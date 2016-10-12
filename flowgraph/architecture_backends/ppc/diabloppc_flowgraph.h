/*
 * Copyright (C) 2005, 2006 {{{
 *      Ramon Bertran Monfort <rbertran@ac.upc.edu>
 *      Lluis Vilanova <xscript@gmx.net>
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later
 * version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 * 
 * }}}
 * 
 * This file is part of the PPC port of Diablo (Diablo is a better
 * link-time optimizer)
 */

#include <diabloflowgraph.h>

#ifndef PPC_FLOWGRAPH_H
#define PPC_FLOWGRAPH_H
//t_bbl * PpcBblGetNextBlock(t_bbl *block,t_section *section);
//t_bool PpcBblTouchLinkRegister(t_bbl *block);
//t_bool PpcBblJumpsToLinkRegister(t_bbl *block);
//t_bbl * PpcFlowGraphFindExitBlock(t_bbl *block,t_section *section);
t_uint32 PpcPatchCallsToWeakSymbols (t_object *obj);
void PpcFlowgraph(t_object *obj);
void PpcMakeAddressProducers (t_cfg *cfg);
#endif

/* vim:set sw=2 tw=80 foldmethod=marker expandtab cindent cinoptions=p5,t0,(0: */