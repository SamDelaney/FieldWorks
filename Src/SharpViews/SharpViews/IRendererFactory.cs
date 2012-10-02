﻿using SIL.FieldWorks.Common.COMInterfaces;

namespace SIL.FieldWorks.SharpViews
{
	/// <summary>
	/// Interface needed to lay out text, can determine the proper renderer to use based on writing system.
	/// </summary>
	public interface IRendererFactory
	{
		/// <summary>
		/// Get a suitable rendering engine for the specified writing system when drawing in the specified graphics environment.
		/// A writing system value of zero here should be interpreted as the default user writing system (suitable
		/// for example for literal strings with unspecified writing system).
		/// </summary>
		IRenderEngine GetRenderer(int ws, IVwGraphics vg);
		/// <summary>
		/// The writing system that corresponds to the user interface language.
		/// </summary>
		int UserWs { get; }
	}
}