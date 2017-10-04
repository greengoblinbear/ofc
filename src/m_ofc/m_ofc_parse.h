/* Copyright 2015 Codethink Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __ofc_parse_h__
#define __ofc_parse_h__

#include <m_ofc_sparse.h>
#include <m_ofc_str_ref.h>
#include <m_ofc_fctype.h>

#include <stdio.h>

#include <parse_debug.h>

typedef struct ofc_parse_lhs_s ofc_parse_lhs_t;
typedef struct ofc_parse_expr_s ofc_parse_expr_t;
typedef struct ofc_parse_stmt_s ofc_parse_stmt_t;
typedef struct ofc_parse_expr_implicit_do_s ofc_parse_expr_implicit_do_t;
typedef struct ofc_parse_lhs_implicit_do_s  ofc_parse_lhs_implicit_do_t;

#include <parse_list.h>
#include <parse_keyword.h>
#include <parse_literal.h>
#include <parse_operator.h>
#include <parse_array.h>
#include <parse_lhs.h>
#include <parse_expr.h>
#include <parse_assign.h>
#include <parse_call_arg.h>
#include <parse_define_file_arg.h>
#include <parse_implicit_do.h>
#include <parse_star_len.h>
#include <parse_type.h>
#include <parse_data.h>
#include <parse_decl.h>
#include <parse_common.h>
#include <parse_save.h>
#include <parse_implicit.h>
#include <parse_format.h>
#include <parse_pointer.h>
#include <parse_stmt.h>
#include <parse_file.h>

#endif
