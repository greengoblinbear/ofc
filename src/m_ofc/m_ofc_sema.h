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

#ifndef __ofc_sema_h__
#define __ofc_sema_h__

#include <m_ofc_parse.h>
#include <m_ofc_hashmap.h>
#include <m_ofc_global_opts.h>

typedef struct ofc_sema_stmt_s       ofc_sema_stmt_t;
typedef struct ofc_sema_scope_s      ofc_sema_scope_t;
typedef struct ofc_sema_module_s     ofc_sema_module_t;
typedef struct ofc_sema_type_s       ofc_sema_type_t;
typedef struct ofc_sema_expr_s       ofc_sema_expr_t;
typedef struct ofc_sema_lhs_s        ofc_sema_lhs_t;
typedef struct ofc_sema_decl_s       ofc_sema_decl_t;
typedef struct ofc_sema_decl_alias_s ofc_sema_decl_alias_t;
typedef struct ofc_sema_implicit_s   ofc_sema_implicit_t;

typedef struct ofc_sema_decl_list_s         ofc_sema_decl_list_t;
typedef struct ofc_sema_decl_alias_map_s    ofc_sema_decl_alias_map_t;
typedef struct ofc_sema_expr_list_s         ofc_sema_expr_list_t;
typedef struct ofc_sema_stmt_list_s         ofc_sema_stmt_list_t;
typedef struct ofc_sema_lhs_list_s          ofc_sema_lhs_list_t;
typedef struct ofc_sema_module_list_s       ofc_sema_module_list_t;
typedef struct ofc_sema_format_label_list_s ofc_sema_format_label_list_t;

#include <sema_kind.h>
#include <sema_array.h>
#include <sema_structure.h>
#include <sema_typeval.h>
#include <sema_parameter.h>
#include <sema_equiv.h>
#include <sema_common.h>
#include <sema_format.h>
#include <sema_label.h>
#include <sema_external.h>
#include <sema_dummy_arg.h>
#include <sema_intrinsic.h>
#include <sema_io.h>
#include <sema_arg.h>
#include <sema_range.h>
#include <sema_accessibility.h>

#include <sema_stmt.h>
#include <sema_type.h>
#include <sema_expr.h>
#include <sema_lhs.h>
#include <sema_decl.h>
#include <sema_implicit.h>
#include <sema_scope.h>
#include <sema_module.h>

#include <sema_pass.h>

#endif
