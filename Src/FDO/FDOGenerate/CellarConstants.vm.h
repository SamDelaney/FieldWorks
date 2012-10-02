## --------------------------------------------------------------------------------------------
## Copyright (C) 2006-2011 SIL International. All rights reserved.
##
## Distributable under the terms of either the Common Public License or the
## GNU Lesser General Public License, as specified in the LICENSING.txt file.
##
## NVelocity template file
## This file is used by the FdoGenerate task to generate the source code from the database
## model.
## --------------------------------------------------------------------------------------------
// This is automatically generated by FDOGenerate task
// from MasterFieldWorksModel.xml.  ****Do not edit****
#ifdef _MSC_VER
#pragma once
#endif
#ifndef CELLARCONSTANTS_H
#define CELLARCONSTANTS_H 1

\#include "CellarBaseConstants.h"

typedef enum CellarConstants
{
#foreach($module in $fdogenerate.Modules)
#foreach($class in $module.Classes)
#set( $className = $class.Name )
	kclid${className} = $class.Number,
#foreach( $prop in $class.Properties)
	kflid${className}_${prop.Name} = ${prop.Number},
#end
#end
#end
	// from Cellar.idh:
	kflidCmObject_Id = 100, // We start high enough to allow the CM to add CmObject fields.
	kflidCmObject_Guid,
	kflidCmObject_Class,
	kflidCmObject_Owner,
	kflidCmObject_OwnFlid,
	kflidCmObject_OwnOrd,

	// flids larger than this are considered dummies, and it is not an error if we don't
	// find information about them in the database.
	// Note: FwMetaDataCache::GetFieldType knows this value, though it does not use the
	// constant here because (to reduce cyclic dependencies) it does not include this header.
	// Note: currently any flid >= kflidDummyFlids is interpreted as a dummy. I (JohnT)
	// recommend that we limit ourselves to dummies in the 1000 domain (1000000000 to
	// 1000999999) just on the offchance that one day we want more than 1000 domains.
	kflidStartDummyFlids = 1000000000,
} CellarConstants;

// REVIEW (EberhardB): I don't know what this value should be in the new world.
// It used to be defined in Cellar/lib/CmTypes.h and was to be kept in sync with
// LangProject.cs. LangProject.cs is gone and we don't seem to use any of the other kws*
// values defined in CmTypes.h, so I don't know what this should be.
#define kwsLim	0xfffffff0 /* (-16) One beyond the last magic value. */

#endif
