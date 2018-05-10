// Copyright (c) 2010-2018 SIL International
// This software is licensed under the LGPL, version 2.1 or later
// (http://www.gnu.org/licenses/lgpl-2.1.html)

using System;
using System.ComponentModel.Composition;
using System.Diagnostics;
using LanguageExplorer;
using SIL.FieldWorks.Common.FwUtils;
using SIL.LCModel;
using System.Windows.Forms;
using SIL.LCModel.Utils;

namespace SIL.FieldWorks
{
	/// <summary>
	/// Pass-through object for access to FieldWorks from an application. This ensures that
	/// there is only one FieldWorks object in each process.
	/// </summary>
	[Export(typeof(IFieldWorksManager))]
	internal class FieldWorksManager : IFieldWorksManager
	{
		#region IFieldWorksManager Members
		/// <summary>
		/// Gets the cache.
		/// </summary>
		public LcmCache Cache => FieldWorks.Cache;

		/// <summary>
		/// Shut down the specified application, which will be disposed of immediately.
		/// If no other applications are running, then FieldWorks will also be shut down.
		/// </summary>
		/// <param name="app">The application to shut down.</param>
		public void ShutdownApp(IFlexApp app)
		{
			FieldWorks.ShutdownApp(app);
		}

		/// <summary>
		/// Executes the specified method asynchronously. The method will typically be called
		/// when the the Application.Run() loop regains control or the next call to
		/// Application.DoEvents() at some unspecified time in the future.
		/// </summary>
		/// <param name="action">The action to execute</param>
		/// <param name="param1">The first parameter of the action.</param>
		public void ExecuteAsync<T>(Action<T> action, T param1)
		{
			FieldWorks.ThreadHelper.InvokeAsync(action, param1);
		}

		/// <summary>
		/// Opens a new main window for the specified application.
		/// </summary>
		public void OpenNewWindowForApp(IFwMainWnd currentWindow)
		{
			if (!FieldWorks.CreateAndInitNewMainWindow(currentWindow, false))
			{
				Debug.Fail("New main window was not created correctly!");
			}
		}

		/// <summary>
		/// Lets the user chooses a language project and opens it. If the project is already
		/// open in a FieldWorks process, then the request is sent to the running FieldWorks
		/// process and a new window is opened for that project. Otherwise a new FieldWorks
		/// process is started to handle the project request.
		/// </summary>
		public void ChooseLangProject()
		{
			var openedProject = FieldWorks.ChooseLangProject();
			if (openedProject != null && !FieldWorks.OpenExistingProject(openedProject))
			{
				Debug.Fail("Failed to open the project specified!");
			}
		}

		/// <summary>
		/// Lets the user create a new language project and opens it. If the project is already
		/// open in a FieldWorks process, then the request is sent to the running FieldWorks
		/// process and a new window is opened for that project. Otherwise a new FieldWorks
		/// process is started to handle the new project.
		/// </summary>
		public void CreateNewProject()
		{
			var newProject = FieldWorks.CreateNewProject();
			if (newProject != null && !FieldWorks.OpenNewProject(newProject))
			{
				Debug.Fail("Failed to open the new project");
			}
		}

		/// <summary>
		/// Lets the user delete any FW databases that are not currently open
		/// </summary>
		/// <param name="helpTopicProvider">The application's help provider.</param>
		/// <param name="dialogOwner">The owner of the dialog</param>
		public void DeleteProject(IHelpTopicProvider helpTopicProvider, Form dialogOwner)
		{
			FieldWorks.DeleteProject(dialogOwner, helpTopicProvider);
		}

		/// <summary>
		/// Lets the user backup any FW databases that are not currently open
		/// </summary>
		/// <param name="dialogOwner">The owner of the dialog</param>
		/// <returns>The path to the backup file, or <c>null</c> if the user cancels the
		/// backup</returns>
		public string BackupProject(Form dialogOwner)
		{
			return FieldWorks.BackupProject(dialogOwner);
		}

		/// <summary>
		/// Restore a project.
		/// </summary>
		/// <param name="helpTopicProvider">The FieldWorks application's help topic provider.</param>
		/// <param name="dialogOwner">The dialog owner.</param>
		public void RestoreProject(IHelpTopicProvider helpTopicProvider, Form dialogOwner)
		{
			FieldWorks.RestoreProject(dialogOwner, helpTopicProvider);
		}

		/// <summary>
		/// Restore a project.
		/// </summary>
		/// <param name="app">The FieldWorks application.</param>
		/// <param name="dialogOwner">The dialog owner.</param>
		public void FileProjectLocation(IApp app, Form dialogOwner)
		{
			FieldWorks.FileProjectLocation(dialogOwner, app, Cache);
		}

		/// <summary>
		/// Rename the project used by this FieldWorks to the specified new name.
		/// </summary>
		/// <returns>True if the rename was successful, false otherwise</returns>
		public bool RenameProject(string newName)
		{
			return FieldWorks.RenameProject(newName);
		}

		/// <summary>
		/// Handles a link request. This is expected to handle determining the correct
		/// application to start up on the correct project and passing the link to any newly
		/// started application.
		/// </summary>
		/// <param name="link">The link.</param>
		public void HandleLinkRequest(FwAppArgs link)
		{
			FieldWorks.HandleLinkRequest(link);
		}

		/// <summary>
		/// Reopens the given FLEx project. This may be necessary if some external process modified the project data.
		/// Currently used when FLExBridge modifies our project during a Send/Receive
		/// </summary>
		/// <param name="project">The project name to re-open</param>
		/// <param name="app"></param>
		public IFlexApp ReopenProject(string project, FwAppArgs app)
		{
			return FieldWorks.ReopenProject(project, app);
		}
		#endregion
	}
}
