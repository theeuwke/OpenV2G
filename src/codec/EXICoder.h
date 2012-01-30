/*
 * Copyright (C) 2007-2012 Siemens AG
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

/*******************************************************************
 *
 * @author Daniel.Peintner.EXT@siemens.com
 * @version 0.6
 * @contact Joerg.Heuer@siemens.com
 *
 * <p>Code generated by EXIdizer</p>
 ********************************************************************/



#ifdef __cplusplus
extern "C" {
#endif

#ifndef EXI_CODER_H
#define EXI_CODER_H

#include "EXITypes.h"

#define IS_STRICT 0
#define DOCUMENT 0
#define DOC_CONTENT 1
#define DOC_END 2
#define UR_TYPE_GRAMMAR_0 73
#define UR_TYPE_GRAMMAR_1 602



int exiPushStack(exi_state_t* state, uint16_t newState, eqname_t* eqn);

int exiPopStack(exi_state_t* state);

int exiHandleXsiNilTrue(exi_state_t* state);

int exiHandleXsiType(exi_state_t* state, eqname_t* xsiType);

int exiIsStartContent(int16_t ruleID);

int exiMoveToElementContentRule(exi_state_t* state);

#endif

#ifdef __cplusplus
}
#endif

