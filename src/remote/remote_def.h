/*
 *	PROGRAM:	JRD Remote Interface/Server
 *	MODULE:		remote_def.h
 *	DESCRIPTION:	Common descriptions
 *
 * The contents of this file are subject to the Interbase Public
 * License Version 1.0 (the "License"); you may not use this file
 * except in compliance with the License. You may obtain a copy
 * of the License at http://www.Inprise.com/IPL.html
 *
 * Software distributed under the License is distributed on an
 * "AS IS" basis, WITHOUT WARRANTY OF ANY KIND, either express
 * or implied. See the License for the specific language governing
 * rights and limitations under the License.
 *
 * The Original Code was created by Inprise Corporation
 * and its predecessors. Portions created by Inprise Corporation are
 * Copyright (C) Inprise Corporation.
 *
 * All Rights Reserved.
 * Contributor(s): ______________________________________.
 *
 * 2002.02.15 Sean Leyne - Code Cleanup, removed obsolete ports:
 *                          - EPSON, XENIX, DELTA, IMP, NCR3000, M88K
 *                          - NT Power PC and HP9000 s300
 *
 * 2002.10.27 Sean Leyne - Completed removal of obsolete "DG_X86" port
 * 2002.10.27 Sean Leyne - Code Cleanup, removed obsolete "Ultrix" port
 *
 * 2002.10.28 Sean Leyne - Completed removal of obsolete "DGUX" port
 * 2002.10.28 Sean Leyne - Code cleanup, removed obsolete "MPEXL" port
 * 2002.10.28 Sean Leyne - Code cleanup, removed obsolete "DecOSF" port
 * 2002.10.28 Sean Leyne - Code cleanup, removed obsolete "SGI" port
 *
 * 2002.10.29 Sean Leyne - Removed support for obsolete IPX/SPX Protocol
 * 2002.10.29 Sean Leyne - Removed obsolete "Netware" port
 *
 */

#ifndef REMOTE_REMOTE_DEF_H
#define REMOTE_REMOTE_DEF_H

#include "../remote/protocol.h"

#if defined(__sun)
#	ifdef sparc
constexpr P_ARCH ARCHITECTURE	= arch_sun4;
#elif (defined i386 || defined AMD64)
constexpr P_ARCH ARCHITECTURE	= arch_sunx86;
#	else
constexpr P_ARCH ARCHITECTURE	= arch_sun;
#	endif
#elif defined(HPUX)
constexpr P_ARCH ARCHITECTURE	= arch_hpux;
#elif (defined AIX || defined AIX_PPC)
constexpr P_ARCH ARCHITECTURE	= arch_rt;
#elif defined(LINUX)
constexpr P_ARCH ARCHITECTURE	= arch_linux;
#elif defined(FREEBSD)
constexpr P_ARCH ARCHITECTURE	= arch_freebsd;
#elif defined(NETBSD)
constexpr P_ARCH ARCHITECTURE	= arch_netbsd;
#elif defined(DARWIN) && defined(__ppc__)
constexpr P_ARCH ARCHITECTURE	= arch_darwin_ppc;
#elif defined(WIN_NT) && defined(AMD64)
constexpr P_ARCH ARCHITECTURE	= arch_winnt_64;
#elif defined(WIN_NT) && defined(ARM64)
constexpr P_ARCH ARCHITECTURE	= arch_winnt_arm64;
#elif defined(I386)
constexpr P_ARCH ARCHITECTURE	= arch_intel_32;
#elif defined(DARWIN64)
constexpr P_ARCH ARCHITECTURE	= arch_darwin_x64;
#elif defined(DARWINPPC64)
constexpr P_ARCH ARCHITECTURE	= arch_darwin_ppc64;
#elif defined(ARM)
constexpr P_ARCH ARCHITECTURE	= arch_arm;
#endif


// port_server_flags

constexpr USHORT SRVR_server			= 1;	// server
constexpr USHORT SRVR_multi_client		= 2;	// multi-client server
constexpr USHORT SRVR_debug				= 4;	// debug run
constexpr USHORT SRVR_inet				= 8;	// Inet protocol
constexpr USHORT SRVR_xnet				= 16;	// Xnet protocol (Win32)
constexpr USHORT SRVR_non_service		= 32;	// not running as an NT service
constexpr USHORT SRVR_high_priority		= 64;	// fork off server at high priority
constexpr USHORT SRVR_thread_per_port	= 128;	// bind thread to a port
constexpr USHORT SRVR_no_icon			= 256;	// tell the server not to show the icon

#endif /* REMOTE_REMOTE_DEF_H */
