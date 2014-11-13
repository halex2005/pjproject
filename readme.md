PJSIP
=====

This is an unofficial fork of [great PJSIP library](http://www.pjsip.org) to github.

Improvements:

- Added "native" (without migration) support for MS Visual Studio 2013 (`v120` solution and projects)
- Added "windows xp toolset" support for MS Visual Studio 2013 (`v120_xp` solution and projects).
  Note that to compile pjsip with `v120_xp` toolset you need to install [DirectX SDK](http://www.microsoft.com/en-us/download/details.aspx?id=6812).
  Latest DirectX SDK which included in Windows 8 SDK doesn't support Windows XP targeting and v120_xp toolset.
- Names of libraries for MSVC changed to `$(ProjectName)-$(Platform)-$(PlatformToolset)-$(Configuration).lib`.
  Such naming allow to consume libraries in MSVC more easily (see [CMakeHelpers FindPJSIP.cmake](https://github.com/halex2005/CMakeHelpers/blob/master/FindPJSIP.cmake)).


Regression in VS2013:

- Supported only Win32 and x64 platforms.
- Not supported platforms (please, use Visual Studio 2005 solution for supporting them):
    - Pocket PC 2003 (ARMV4)
    - Smartphone 2003 (ARMV4)
    - Windows Mobile 6 Standard SDK (ARMV4I)
    - Windows Mobile 6 Professional SDK (ARMV4I)
    - Windows Mobile 5.0 Pocket PC SDK (ARMV4I)
    - Windows Mobile 5.0 Smartphone SDK (ARMV4I)

CMake-based builds
------------------

You can use this repository as git submodule for your cmake-based builds.

If your target has linked with `pjproject` target, you get all pjsip dependencies you need for your target.

Licensing
---------

 Copyright (C) 2003-2008 Benny Prijono <benny@prijono.org>

 Copyright (C) 2008-2011 Teluu Inc. (http://www.teluu.com)

 This program is free software: you can redistribute it and/or modify it
 under the terms of the [GNU General Public License as published by the Free
 Software Foundation, either version 2 of the License, or (at your option)
 any later version](COPYING).

 This program is distributed in the hope that it will be useful, but
 WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 for more details.

 You should have received a copy of the GNU General Public License along
 with this program. If not, see http://www.gnu.org/licenses/.
 
 [For proprietary license from Teluu.com see detailed pjsip licensing information](http://www.pjsip.org/licensing.htm).
