/* Copyright (C) 1990 Free Software Foundation, Inc.

This file is part of GDB.

GDB is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 1, or (at your option)
any later version.

GDB is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GDB; see the file COPYING.  If not, write to
the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* The standard thing is to include param.h.  However, files that are
   specific to a particular target can include that tm-xxx.h file and
   param-no-tm.h.  Any future inclusions of param.h will be protected
   against by the #if !defined stuff below.  */

/* Some tm files need CORE_ADDR, for example.  */
#include "defs.h"

#if !defined (PARAM_H)
#include "tm.h"
#endif

#include "param-no-tm.h"

#define PARAM_H 1
