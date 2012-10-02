## --------------------------------------------------------------------------------------------
## Copyright (C) 2007-2008 SIL International. All rights reserved.
##
## Distributable under the terms of either the Common Public License or the
## GNU Lesser General Public License, as specified in the LICENSING.txt file.
##
## NVelocity template file
## This file is used by the FdoGenerate task to generate the source code from the XMI
## database model.
## --------------------------------------------------------------------------------------------
## This will generate the various methods used by the FDO aware ISilDataAccess implementation.
## Using these methods avoids using Reflection in that implementation.
##
		/// <summary>
		/// Get the value of an atomic reference or owning property, including owner.
		/// </summary>
		/// <param name="flid">The property to read.</param>
		protected override int GetObjectPropertyInternal(int flid)
		{
			switch (flid)
			{
				default:
					return base.GetObjectPropertyInternal(flid);
## Loop over each property and do something with the ones that are atomic reference or atomic owning.
#foreach( $prop in $class.AtomicProperties )
				case $prop.Number:
					lock (SyncRoot)
#if( $prop.IsHandGenerated)
						return $prop.NiuginianPropName == null ? FdoCache.kNullHvo : ${prop.NiuginianPropName}.Hvo;
#else
						return m_$prop.NiuginianPropName == null ? FdoCache.kNullHvo : ${prop.NiuginianPropName}.Hvo;
#end
#end
			}
		}

		/// <summary>
		/// Set the value of an atomic reference or owning property, including owner.
		/// </summary>
		/// <param name="flid">The property to read.</param>
		/// <param name="newValue">The new property value (may be null).</param>
		/// <param name="useAccessor"></param>
		protected override void SetPropertyInternal(int flid, ICmObject newValue, bool useAccessor)
		{
			switch (flid)
			{
				default:
					base.SetPropertyInternal(flid, newValue, useAccessor);
					break;
## Loop over each property and do something with the ones that are atomic reference or owning.
#foreach( $prop in $class.AtomicProperties )
				case $prop.Number:
					if (useAccessor)
						$prop.NiuginianPropName = (newValue == null) ? null : (I$prop.Signature)newValue;
					else
						m_$prop.NiuginianPropName = (newValue == null) ? null : (I$prop.Signature)newValue;
					break;
#end
			}
		}