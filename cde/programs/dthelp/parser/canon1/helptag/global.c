/*
 * CDE - Common Desktop Environment
 *
 * Copyright (c) 1993-2012, The Open Group. All rights reserved.
 *
 * These libraries and programs are free software; you can
 * redistribute them and/or modify them under the terms of the GNU
 * Lesser General Public License as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * These libraries and programs are distributed in the hope that
 * they will be useful, but WITHOUT ANY WARRANTY; without even the
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 * PURPOSE. See the GNU Lesser General Public License for more
 * details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with these libraries and programs; if not, write
 * to the Free Software Foundation, Inc., 51 Franklin Street, Fifth
 * Floor, Boston, MA 02110-1301 USA
 */
 
#include "basic.h"
#include "trie.h"
#include "common.h"

#include "global.h"

/* global variables */
PBLOCK blockinfo INIT(NULL);
LOGICAL inParText INIT(FALSE);
LOGICAL inSdlP    INIT(FALSE);

/* Save these ids and reuse them on the current virpage.
 * We need two of each (except for the first) so we can alternate to
 * avoid <form> thinking it is supposed to span them.  The bullet id
 * indexes will flip back and forth between 0 and 1 to pick an id.
*/
int bulletId[2], looseBulletId[2], firstBulletId, firstLooseBulletId;
int bulletIdIndex INIT(1);
int looseBulletIdIndex INIT(1);

/* Should we use these BASENAME_LIMIT on the size of file names? */
LOGICAL usingshortnames INIT(FALSE);


