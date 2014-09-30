PJSIP
=====

This is an unofficial fork of [great PJSIP library](http://www.pjsip.org) to github.

Improvements:

- Added "native" (without migration) support for MS Visual Studio 2013 (solution and projects)
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
 