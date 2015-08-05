﻿using System;
using System.Xml;
using SIL.CoreImpl;
using XCore;
using SIL.FieldWorks.XWorks;

namespace SIL.FieldWorks.IText
{
	/// <summary>
	/// This is so that we can use InterlinMaster in VS Designer.
	/// Designer won't work with classes that have abstract base classes.
	/// </summary>
	public class InterlinMasterBase : RecordView
	{
		internal InterlinMasterBase()
		{
		}

		public override void Init(Mediator mediator, IPropertyTable propertyTable, XmlNode configurationParameters)
		{
			throw new NotSupportedException();
		}
	}
}
