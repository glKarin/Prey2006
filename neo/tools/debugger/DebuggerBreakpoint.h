/*
===========================================================================

Doom 3 GPL Source Code
Copyright (C) 1999-2011 id Software LLC, a ZeniMax Media company.

This file is part of the Doom 3 GPL Source Code ("Doom 3 Source Code").

Doom 3 Source Code is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Doom 3 Source Code is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Doom 3 Source Code.  If not, see <http://www.gnu.org/licenses/>.

In addition, the Doom 3 Source Code is also subject to certain additional terms. You should have received a copy of these additional terms immediately following the terms and conditions of the GNU General Public License which accompanied the Doom 3 Source Code.  If not, please request a copy in writing from id Software at the address below.

If you have questions concerning this license or the applicable additional terms, you may contact in writing id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville, Maryland 20850 USA.

===========================================================================
*/
#ifndef DEBUGGERBREAKPOINT_H_
#define DEBUGGERBREAKPOINT_H_

class rvDebuggerBreakpoint
{
public:

	rvDebuggerBreakpoint( const char* filename, int linenumber, int id = -1, bool onceOnly = false );
	rvDebuggerBreakpoint( rvDebuggerBreakpoint& bp );
	~rvDebuggerBreakpoint();

	const char*		GetFilename();
	int				GetLineNumber();
	int				GetID();
	bool			GetOnceOnly();

protected:

	bool	mEnabled;
	bool	mOnceOnly;
	int		mID;
	int		mLineNumber;
	idStr	mFilename;
private:

	static int	mNextID;
};

ID_INLINE const char* rvDebuggerBreakpoint::GetFilename()
{
	return mFilename;
}

ID_INLINE int rvDebuggerBreakpoint::GetLineNumber()
{
	return mLineNumber;
}

ID_INLINE int rvDebuggerBreakpoint::GetID()
{
	return mID;
}

ID_INLINE bool rvDebuggerBreakpoint::GetOnceOnly()
{
	return mOnceOnly;
}

#endif // DEBUGGERBREAKPOINT_H_
