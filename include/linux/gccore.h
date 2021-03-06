/*
 * gccore.h
 *
 * Copyright (C) 2010-2011 Vivante Corporation.
 *
 * This package is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * THIS PACKAGE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTIBILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#ifndef GCCORE_H
#define GCCORE_H

#include <linux/sched.h>
#include "gcioctl.h"

/* Command buffer submission. */
void gc_commit(struct gccommit *gccommit, bool fromuser);

/* Surface management. */
void gc_map(struct gcmap *gcmap, bool fromuser);
void gc_unmap(struct gcmap *gcmap, bool fromuser);

#endif
