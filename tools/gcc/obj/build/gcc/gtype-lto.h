/* Type information for lto.
   Copyright (C) 2004, 2007, 2009 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

/* This file is machine generated.  Do not edit.  */

void
gt_ggc_mx_language_function (void *x_p)
{
  struct language_function * const x = (struct language_function *)x_p;
  if (ggc_test_and_set_mark (x))
    {
    }
}

void
gt_ggc_mx_lang_tree_node (void *x_p)
{
  union lang_tree_node * x = (union lang_tree_node *)x_p;
  union lang_tree_node * xlimit = x;
  while (ggc_test_and_set_mark (xlimit))
   xlimit = ((union lang_tree_node *)TREE_CHAIN (&(*xlimit).generic));
  while (x != xlimit)
    {
      switch (lto_tree_node_structure (&((*x))))
        {
        case TS_LTO_GENERIC:
          switch (tree_node_structure (&((*x).generic)))
            {
            case TS_BASE:
              break;
            case TS_COMMON:
              gt_ggc_m_9tree_node ((*x).generic.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.common.type);
              break;
            case TS_INT_CST:
              gt_ggc_m_9tree_node ((*x).generic.int_cst.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.int_cst.common.type);
              break;
            case TS_REAL_CST:
              gt_ggc_m_9tree_node ((*x).generic.real_cst.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.real_cst.common.type);
              gt_ggc_m_10real_value ((*x).generic.real_cst.real_cst_ptr);
              break;
            case TS_FIXED_CST:
              gt_ggc_m_9tree_node ((*x).generic.fixed_cst.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.fixed_cst.common.type);
              gt_ggc_m_11fixed_value ((*x).generic.fixed_cst.fixed_cst_ptr);
              break;
            case TS_VECTOR:
              gt_ggc_m_9tree_node ((*x).generic.vector.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.vector.common.type);
              gt_ggc_m_9tree_node ((*x).generic.vector.elements);
              break;
            case TS_STRING:
              gt_ggc_m_9tree_node ((*x).generic.string.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.string.common.type);
              break;
            case TS_COMPLEX:
              gt_ggc_m_9tree_node ((*x).generic.complex.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.complex.common.type);
              gt_ggc_m_9tree_node ((*x).generic.complex.real);
              gt_ggc_m_9tree_node ((*x).generic.complex.imag);
              break;
            case TS_IDENTIFIER:
              gt_ggc_m_9tree_node ((*x).generic.identifier.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.identifier.common.type);
              gt_ggc_m_S ((*x).generic.identifier.id.str);
              break;
            case TS_DECL_MINIMAL:
              gt_ggc_m_9tree_node ((*x).generic.decl_minimal.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.decl_minimal.common.type);
              gt_ggc_m_9tree_node ((*x).generic.decl_minimal.name);
              gt_ggc_m_9tree_node ((*x).generic.decl_minimal.context);
              break;
            case TS_DECL_COMMON:
              gt_ggc_m_9tree_node ((*x).generic.decl_common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.decl_common.common.common.type);
              gt_ggc_m_9tree_node ((*x).generic.decl_common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.decl_common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.decl_common.size);
              gt_ggc_m_9tree_node ((*x).generic.decl_common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.decl_common.initial);
              gt_ggc_m_9tree_node ((*x).generic.decl_common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.decl_common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.decl_common.lang_specific);
              break;
            case TS_DECL_WRTL:
              gt_ggc_m_9tree_node ((*x).generic.decl_with_rtl.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_rtl.common.common.common.type);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_rtl.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_rtl.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_rtl.common.size);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_rtl.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_rtl.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_rtl.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_rtl.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.decl_with_rtl.common.lang_specific);
              gt_ggc_m_7rtx_def ((*x).generic.decl_with_rtl.rtl);
              break;
            case TS_DECL_NON_COMMON:
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.common.common.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.common.common.common.common.common.type);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.common.common.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.common.common.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.common.common.common.size);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.common.common.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.common.common.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.common.common.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.common.common.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.decl_non_common.common.common.common.lang_specific);
              gt_ggc_m_7rtx_def ((*x).generic.decl_non_common.common.common.rtl);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.common.assembler_name);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.common.section_name);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.common.comdat_group);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.saved_tree);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.arguments);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.result);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.vindex);
              break;
            case TS_PARM_DECL:
              gt_ggc_m_9tree_node ((*x).generic.parm_decl.common.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.parm_decl.common.common.common.common.type);
              gt_ggc_m_9tree_node ((*x).generic.parm_decl.common.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.parm_decl.common.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.parm_decl.common.common.size);
              gt_ggc_m_9tree_node ((*x).generic.parm_decl.common.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.parm_decl.common.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.parm_decl.common.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.parm_decl.common.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.parm_decl.common.common.lang_specific);
              gt_ggc_m_7rtx_def ((*x).generic.parm_decl.common.rtl);
              gt_ggc_m_7rtx_def ((*x).generic.parm_decl.incoming_rtl);
              gt_ggc_m_9var_ann_d ((*x).generic.parm_decl.ann);
              break;
            case TS_DECL_WITH_VIS:
              gt_ggc_m_9tree_node ((*x).generic.decl_with_vis.common.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_vis.common.common.common.common.type);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_vis.common.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_vis.common.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_vis.common.common.size);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_vis.common.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_vis.common.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_vis.common.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_vis.common.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.decl_with_vis.common.common.lang_specific);
              gt_ggc_m_7rtx_def ((*x).generic.decl_with_vis.common.rtl);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_vis.assembler_name);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_vis.section_name);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_vis.comdat_group);
              break;
            case TS_VAR_DECL:
              gt_ggc_m_9tree_node ((*x).generic.var_decl.common.common.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.var_decl.common.common.common.common.common.type);
              gt_ggc_m_9tree_node ((*x).generic.var_decl.common.common.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.var_decl.common.common.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.var_decl.common.common.common.size);
              gt_ggc_m_9tree_node ((*x).generic.var_decl.common.common.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.var_decl.common.common.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.var_decl.common.common.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.var_decl.common.common.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.var_decl.common.common.common.lang_specific);
              gt_ggc_m_7rtx_def ((*x).generic.var_decl.common.common.rtl);
              gt_ggc_m_9tree_node ((*x).generic.var_decl.common.assembler_name);
              gt_ggc_m_9tree_node ((*x).generic.var_decl.common.section_name);
              gt_ggc_m_9tree_node ((*x).generic.var_decl.common.comdat_group);
              gt_ggc_m_9var_ann_d ((*x).generic.var_decl.ann);
              break;
            case TS_FIELD_DECL:
              gt_ggc_m_9tree_node ((*x).generic.field_decl.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.common.common.common.type);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.common.size);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.field_decl.common.lang_specific);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.offset);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.bit_field_type);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.qualifier);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.bit_offset);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.fcontext);
              break;
            case TS_LABEL_DECL:
              gt_ggc_m_9tree_node ((*x).generic.label_decl.common.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.label_decl.common.common.common.common.type);
              gt_ggc_m_9tree_node ((*x).generic.label_decl.common.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.label_decl.common.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.label_decl.common.common.size);
              gt_ggc_m_9tree_node ((*x).generic.label_decl.common.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.label_decl.common.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.label_decl.common.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.label_decl.common.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.label_decl.common.common.lang_specific);
              gt_ggc_m_7rtx_def ((*x).generic.label_decl.common.rtl);
              break;
            case TS_RESULT_DECL:
              gt_ggc_m_9tree_node ((*x).generic.result_decl.common.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.result_decl.common.common.common.common.type);
              gt_ggc_m_9tree_node ((*x).generic.result_decl.common.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.result_decl.common.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.result_decl.common.common.size);
              gt_ggc_m_9tree_node ((*x).generic.result_decl.common.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.result_decl.common.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.result_decl.common.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.result_decl.common.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.result_decl.common.common.lang_specific);
              gt_ggc_m_7rtx_def ((*x).generic.result_decl.common.rtl);
              gt_ggc_m_9var_ann_d ((*x).generic.result_decl.ann);
              break;
            case TS_CONST_DECL:
              gt_ggc_m_9tree_node ((*x).generic.const_decl.common.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.const_decl.common.common.common.common.type);
              gt_ggc_m_9tree_node ((*x).generic.const_decl.common.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.const_decl.common.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.const_decl.common.common.size);
              gt_ggc_m_9tree_node ((*x).generic.const_decl.common.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.const_decl.common.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.const_decl.common.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.const_decl.common.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.const_decl.common.common.lang_specific);
              gt_ggc_m_7rtx_def ((*x).generic.const_decl.common.rtl);
              break;
            case TS_TYPE_DECL:
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.common.common.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.common.common.common.common.common.type);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.common.common.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.common.common.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.common.common.common.size);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.common.common.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.common.common.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.common.common.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.common.common.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.type_decl.common.common.common.common.lang_specific);
              gt_ggc_m_7rtx_def ((*x).generic.type_decl.common.common.common.rtl);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.common.assembler_name);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.common.section_name);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.common.comdat_group);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.saved_tree);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.arguments);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.result);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.vindex);
              break;
            case TS_FUNCTION_DECL:
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.common.common.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.common.common.common.common.common.type);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.common.common.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.common.common.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.common.common.common.size);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.common.common.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.common.common.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.common.common.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.common.common.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.function_decl.common.common.common.common.lang_specific);
              gt_ggc_m_7rtx_def ((*x).generic.function_decl.common.common.common.rtl);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.common.assembler_name);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.common.section_name);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.common.comdat_group);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.saved_tree);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.arguments);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.result);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.vindex);
              gt_ggc_m_8function ((*x).generic.function_decl.f);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.personality);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.function_specific_target);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.function_specific_optimization);
              break;
            case TS_TYPE:
              gt_ggc_m_9tree_node ((*x).generic.type.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.type.common.type);
              gt_ggc_m_9tree_node ((*x).generic.type.values);
              gt_ggc_m_9tree_node ((*x).generic.type.size);
              gt_ggc_m_9tree_node ((*x).generic.type.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.type.attributes);
              gt_ggc_m_9tree_node ((*x).generic.type.pointer_to);
              gt_ggc_m_9tree_node ((*x).generic.type.reference_to);
              switch (debug_hooks == &sdb_debug_hooks ? 1 : debug_hooks == &dwarf2_debug_hooks ? 2 : 0)
                {
                case 0:
                  break;
                case 1:
                  gt_ggc_m_S ((*x).generic.type.symtab.pointer);
                  break;
                case 2:
                  gt_ggc_m_10die_struct ((*x).generic.type.symtab.die);
                  break;
                default:
                  break;
                }
              gt_ggc_m_9tree_node ((*x).generic.type.name);
              gt_ggc_m_9tree_node ((*x).generic.type.minval);
              gt_ggc_m_9tree_node ((*x).generic.type.maxval);
              gt_ggc_m_9tree_node ((*x).generic.type.next_variant);
              gt_ggc_m_9tree_node ((*x).generic.type.main_variant);
              gt_ggc_m_9tree_node ((*x).generic.type.binfo);
              gt_ggc_m_9tree_node ((*x).generic.type.context);
              gt_ggc_m_9tree_node ((*x).generic.type.canonical);
              gt_ggc_m_9lang_type ((*x).generic.type.lang_specific);
              break;
            case TS_LIST:
              gt_ggc_m_9tree_node ((*x).generic.list.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.list.common.type);
              gt_ggc_m_9tree_node ((*x).generic.list.purpose);
              gt_ggc_m_9tree_node ((*x).generic.list.value);
              break;
            case TS_VEC:
              gt_ggc_m_9tree_node ((*x).generic.vec.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.vec.common.type);
              {
                size_t i1;
                size_t l1 = (size_t)(TREE_VEC_LENGTH ((tree)&((*x).generic.vec)));
                for (i1 = 0; i1 != l1; i1++) {
                  gt_ggc_m_9tree_node ((*x).generic.vec.a[i1]);
                }
              }
              break;
            case TS_EXP:
              gt_ggc_m_9tree_node ((*x).generic.exp.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.exp.common.type);
              gt_ggc_m_9tree_node ((*x).generic.exp.block);
              switch (TREE_CODE ((tree) &(*x)))
                {
                default:
                  {
                    size_t i2;
                    size_t l2 = (size_t)(TREE_OPERAND_LENGTH ((tree) &(*x)));
                    for (i2 = 0; i2 != l2; i2++) {
                      gt_ggc_m_9tree_node ((*x).generic.exp.operands[i2]);
                    }
                  }
                  break;
                }
              break;
            case TS_SSA_NAME:
              gt_ggc_m_9tree_node ((*x).generic.ssa_name.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.ssa_name.common.type);
              gt_ggc_m_9tree_node ((*x).generic.ssa_name.var);
              gt_ggc_m_18gimple_statement_d ((*x).generic.ssa_name.def_stmt);
              gt_ggc_m_12ptr_info_def ((*x).generic.ssa_name.ptr_info);
              break;
            case TS_BLOCK:
              gt_ggc_m_9tree_node ((*x).generic.block.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.block.common.type);
              gt_ggc_m_9tree_node ((*x).generic.block.vars);
              gt_ggc_m_11VEC_tree_gc ((*x).generic.block.nonlocalized_vars);
              gt_ggc_m_9tree_node ((*x).generic.block.subblocks);
              gt_ggc_m_9tree_node ((*x).generic.block.supercontext);
              gt_ggc_m_9tree_node ((*x).generic.block.abstract_origin);
              gt_ggc_m_9tree_node ((*x).generic.block.fragment_origin);
              gt_ggc_m_9tree_node ((*x).generic.block.fragment_chain);
              break;
            case TS_BINFO:
              gt_ggc_m_9tree_node ((*x).generic.binfo.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.binfo.common.type);
              gt_ggc_m_9tree_node ((*x).generic.binfo.offset);
              gt_ggc_m_9tree_node ((*x).generic.binfo.vtable);
              gt_ggc_m_9tree_node ((*x).generic.binfo.virtuals);
              gt_ggc_m_9tree_node ((*x).generic.binfo.vptr_field);
              gt_ggc_m_11VEC_tree_gc ((*x).generic.binfo.base_accesses);
              gt_ggc_m_9tree_node ((*x).generic.binfo.inheritance);
              gt_ggc_m_9tree_node ((*x).generic.binfo.vtt_subvtt);
              gt_ggc_m_9tree_node ((*x).generic.binfo.vtt_vptr);
              {
                size_t i3;
                size_t l3 = (size_t)(((*x).generic.binfo.base_binfos.base).num);
                for (i3 = 0; i3 != l3; i3++) {
                  gt_ggc_m_9tree_node ((*x).generic.binfo.base_binfos.base.vec[i3]);
                }
              }
              break;
            case TS_STATEMENT_LIST:
              gt_ggc_m_9tree_node ((*x).generic.stmt_list.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.stmt_list.common.type);
              gt_ggc_m_24tree_statement_list_node ((*x).generic.stmt_list.head);
              gt_ggc_m_24tree_statement_list_node ((*x).generic.stmt_list.tail);
              break;
            case TS_CONSTRUCTOR:
              gt_ggc_m_9tree_node ((*x).generic.constructor.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.constructor.common.type);
              gt_ggc_m_22VEC_constructor_elt_gc ((*x).generic.constructor.elts);
              break;
            case TS_OMP_CLAUSE:
              gt_ggc_m_9tree_node ((*x).generic.omp_clause.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.omp_clause.common.type);
              gt_ggc_m_12gimple_seq_d ((*x).generic.omp_clause.gimple_reduction_init);
              gt_ggc_m_12gimple_seq_d ((*x).generic.omp_clause.gimple_reduction_merge);
              {
                size_t i4;
                size_t l4 = (size_t)(omp_clause_num_ops[OMP_CLAUSE_CODE ((tree)&((*x).generic.omp_clause))]);
                for (i4 = 0; i4 != l4; i4++) {
                  gt_ggc_m_9tree_node ((*x).generic.omp_clause.ops[i4]);
                }
              }
              break;
            case TS_OPTIMIZATION:
              gt_ggc_m_9tree_node ((*x).generic.optimization.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.optimization.common.type);
              break;
            case TS_TARGET_OPTION:
              gt_ggc_m_9tree_node ((*x).generic.target_option.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.target_option.common.type);
              break;
            default:
              break;
            }
          break;
        default:
          break;
        }
      x = ((union lang_tree_node *)TREE_CHAIN (&(*x).generic));
    }
}

void
gt_ggc_mx_lang_decl (void *x_p)
{
  struct lang_decl * const x = (struct lang_decl *)x_p;
  if (ggc_test_and_set_mark (x))
    {
    }
}

void
gt_ggc_mx_lang_type (void *x_p)
{
  struct lang_type * const x = (struct lang_type *)x_p;
  if (ggc_test_and_set_mark (x))
    {
    }
}

void
gt_pch_nx_language_function (void *x_p)
{
  struct language_function * const x = (struct language_function *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_17language_function, gt_ggc_e_17language_function))
    {
    }
}

void
gt_pch_nx_lang_tree_node (void *x_p)
{
  union lang_tree_node * x = (union lang_tree_node *)x_p;
  union lang_tree_node * xlimit = x;
  while (gt_pch_note_object (xlimit, xlimit, gt_pch_p_14lang_tree_node, gt_ggc_e_14lang_tree_node))
   xlimit = ((union lang_tree_node *)TREE_CHAIN (&(*xlimit).generic));
  while (x != xlimit)
    {
      switch (lto_tree_node_structure (&((*x))))
        {
        case TS_LTO_GENERIC:
          switch (tree_node_structure (&((*x).generic)))
            {
            case TS_BASE:
              break;
            case TS_COMMON:
              gt_pch_n_9tree_node ((*x).generic.common.chain);
              gt_pch_n_9tree_node ((*x).generic.common.type);
              break;
            case TS_INT_CST:
              gt_pch_n_9tree_node ((*x).generic.int_cst.common.chain);
              gt_pch_n_9tree_node ((*x).generic.int_cst.common.type);
              break;
            case TS_REAL_CST:
              gt_pch_n_9tree_node ((*x).generic.real_cst.common.chain);
              gt_pch_n_9tree_node ((*x).generic.real_cst.common.type);
              gt_pch_n_10real_value ((*x).generic.real_cst.real_cst_ptr);
              break;
            case TS_FIXED_CST:
              gt_pch_n_9tree_node ((*x).generic.fixed_cst.common.chain);
              gt_pch_n_9tree_node ((*x).generic.fixed_cst.common.type);
              gt_pch_n_11fixed_value ((*x).generic.fixed_cst.fixed_cst_ptr);
              break;
            case TS_VECTOR:
              gt_pch_n_9tree_node ((*x).generic.vector.common.chain);
              gt_pch_n_9tree_node ((*x).generic.vector.common.type);
              gt_pch_n_9tree_node ((*x).generic.vector.elements);
              break;
            case TS_STRING:
              gt_pch_n_9tree_node ((*x).generic.string.common.chain);
              gt_pch_n_9tree_node ((*x).generic.string.common.type);
              break;
            case TS_COMPLEX:
              gt_pch_n_9tree_node ((*x).generic.complex.common.chain);
              gt_pch_n_9tree_node ((*x).generic.complex.common.type);
              gt_pch_n_9tree_node ((*x).generic.complex.real);
              gt_pch_n_9tree_node ((*x).generic.complex.imag);
              break;
            case TS_IDENTIFIER:
              gt_pch_n_9tree_node ((*x).generic.identifier.common.chain);
              gt_pch_n_9tree_node ((*x).generic.identifier.common.type);
              gt_pch_n_S ((*x).generic.identifier.id.str);
              break;
            case TS_DECL_MINIMAL:
              gt_pch_n_9tree_node ((*x).generic.decl_minimal.common.chain);
              gt_pch_n_9tree_node ((*x).generic.decl_minimal.common.type);
              gt_pch_n_9tree_node ((*x).generic.decl_minimal.name);
              gt_pch_n_9tree_node ((*x).generic.decl_minimal.context);
              break;
            case TS_DECL_COMMON:
              gt_pch_n_9tree_node ((*x).generic.decl_common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.decl_common.common.common.type);
              gt_pch_n_9tree_node ((*x).generic.decl_common.common.name);
              gt_pch_n_9tree_node ((*x).generic.decl_common.common.context);
              gt_pch_n_9tree_node ((*x).generic.decl_common.size);
              gt_pch_n_9tree_node ((*x).generic.decl_common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.decl_common.initial);
              gt_pch_n_9tree_node ((*x).generic.decl_common.attributes);
              gt_pch_n_9tree_node ((*x).generic.decl_common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.decl_common.lang_specific);
              break;
            case TS_DECL_WRTL:
              gt_pch_n_9tree_node ((*x).generic.decl_with_rtl.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.decl_with_rtl.common.common.common.type);
              gt_pch_n_9tree_node ((*x).generic.decl_with_rtl.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.decl_with_rtl.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.decl_with_rtl.common.size);
              gt_pch_n_9tree_node ((*x).generic.decl_with_rtl.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.decl_with_rtl.common.initial);
              gt_pch_n_9tree_node ((*x).generic.decl_with_rtl.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.decl_with_rtl.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.decl_with_rtl.common.lang_specific);
              gt_pch_n_7rtx_def ((*x).generic.decl_with_rtl.rtl);
              break;
            case TS_DECL_NON_COMMON:
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.common.common.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.common.common.common.common.common.type);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.common.common.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.common.common.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.common.common.common.size);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.common.common.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.common.common.common.initial);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.common.common.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.common.common.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.decl_non_common.common.common.common.lang_specific);
              gt_pch_n_7rtx_def ((*x).generic.decl_non_common.common.common.rtl);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.common.assembler_name);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.common.section_name);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.common.comdat_group);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.saved_tree);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.arguments);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.result);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.vindex);
              break;
            case TS_PARM_DECL:
              gt_pch_n_9tree_node ((*x).generic.parm_decl.common.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.parm_decl.common.common.common.common.type);
              gt_pch_n_9tree_node ((*x).generic.parm_decl.common.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.parm_decl.common.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.parm_decl.common.common.size);
              gt_pch_n_9tree_node ((*x).generic.parm_decl.common.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.parm_decl.common.common.initial);
              gt_pch_n_9tree_node ((*x).generic.parm_decl.common.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.parm_decl.common.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.parm_decl.common.common.lang_specific);
              gt_pch_n_7rtx_def ((*x).generic.parm_decl.common.rtl);
              gt_pch_n_7rtx_def ((*x).generic.parm_decl.incoming_rtl);
              gt_pch_n_9var_ann_d ((*x).generic.parm_decl.ann);
              break;
            case TS_DECL_WITH_VIS:
              gt_pch_n_9tree_node ((*x).generic.decl_with_vis.common.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.decl_with_vis.common.common.common.common.type);
              gt_pch_n_9tree_node ((*x).generic.decl_with_vis.common.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.decl_with_vis.common.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.decl_with_vis.common.common.size);
              gt_pch_n_9tree_node ((*x).generic.decl_with_vis.common.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.decl_with_vis.common.common.initial);
              gt_pch_n_9tree_node ((*x).generic.decl_with_vis.common.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.decl_with_vis.common.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.decl_with_vis.common.common.lang_specific);
              gt_pch_n_7rtx_def ((*x).generic.decl_with_vis.common.rtl);
              gt_pch_n_9tree_node ((*x).generic.decl_with_vis.assembler_name);
              gt_pch_n_9tree_node ((*x).generic.decl_with_vis.section_name);
              gt_pch_n_9tree_node ((*x).generic.decl_with_vis.comdat_group);
              break;
            case TS_VAR_DECL:
              gt_pch_n_9tree_node ((*x).generic.var_decl.common.common.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.var_decl.common.common.common.common.common.type);
              gt_pch_n_9tree_node ((*x).generic.var_decl.common.common.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.var_decl.common.common.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.var_decl.common.common.common.size);
              gt_pch_n_9tree_node ((*x).generic.var_decl.common.common.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.var_decl.common.common.common.initial);
              gt_pch_n_9tree_node ((*x).generic.var_decl.common.common.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.var_decl.common.common.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.var_decl.common.common.common.lang_specific);
              gt_pch_n_7rtx_def ((*x).generic.var_decl.common.common.rtl);
              gt_pch_n_9tree_node ((*x).generic.var_decl.common.assembler_name);
              gt_pch_n_9tree_node ((*x).generic.var_decl.common.section_name);
              gt_pch_n_9tree_node ((*x).generic.var_decl.common.comdat_group);
              gt_pch_n_9var_ann_d ((*x).generic.var_decl.ann);
              break;
            case TS_FIELD_DECL:
              gt_pch_n_9tree_node ((*x).generic.field_decl.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.field_decl.common.common.common.type);
              gt_pch_n_9tree_node ((*x).generic.field_decl.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.field_decl.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.field_decl.common.size);
              gt_pch_n_9tree_node ((*x).generic.field_decl.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.field_decl.common.initial);
              gt_pch_n_9tree_node ((*x).generic.field_decl.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.field_decl.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.field_decl.common.lang_specific);
              gt_pch_n_9tree_node ((*x).generic.field_decl.offset);
              gt_pch_n_9tree_node ((*x).generic.field_decl.bit_field_type);
              gt_pch_n_9tree_node ((*x).generic.field_decl.qualifier);
              gt_pch_n_9tree_node ((*x).generic.field_decl.bit_offset);
              gt_pch_n_9tree_node ((*x).generic.field_decl.fcontext);
              break;
            case TS_LABEL_DECL:
              gt_pch_n_9tree_node ((*x).generic.label_decl.common.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.label_decl.common.common.common.common.type);
              gt_pch_n_9tree_node ((*x).generic.label_decl.common.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.label_decl.common.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.label_decl.common.common.size);
              gt_pch_n_9tree_node ((*x).generic.label_decl.common.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.label_decl.common.common.initial);
              gt_pch_n_9tree_node ((*x).generic.label_decl.common.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.label_decl.common.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.label_decl.common.common.lang_specific);
              gt_pch_n_7rtx_def ((*x).generic.label_decl.common.rtl);
              break;
            case TS_RESULT_DECL:
              gt_pch_n_9tree_node ((*x).generic.result_decl.common.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.result_decl.common.common.common.common.type);
              gt_pch_n_9tree_node ((*x).generic.result_decl.common.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.result_decl.common.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.result_decl.common.common.size);
              gt_pch_n_9tree_node ((*x).generic.result_decl.common.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.result_decl.common.common.initial);
              gt_pch_n_9tree_node ((*x).generic.result_decl.common.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.result_decl.common.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.result_decl.common.common.lang_specific);
              gt_pch_n_7rtx_def ((*x).generic.result_decl.common.rtl);
              gt_pch_n_9var_ann_d ((*x).generic.result_decl.ann);
              break;
            case TS_CONST_DECL:
              gt_pch_n_9tree_node ((*x).generic.const_decl.common.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.const_decl.common.common.common.common.type);
              gt_pch_n_9tree_node ((*x).generic.const_decl.common.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.const_decl.common.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.const_decl.common.common.size);
              gt_pch_n_9tree_node ((*x).generic.const_decl.common.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.const_decl.common.common.initial);
              gt_pch_n_9tree_node ((*x).generic.const_decl.common.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.const_decl.common.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.const_decl.common.common.lang_specific);
              gt_pch_n_7rtx_def ((*x).generic.const_decl.common.rtl);
              break;
            case TS_TYPE_DECL:
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.common.common.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.common.common.common.common.common.type);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.common.common.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.common.common.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.common.common.common.size);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.common.common.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.common.common.common.initial);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.common.common.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.common.common.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.type_decl.common.common.common.common.lang_specific);
              gt_pch_n_7rtx_def ((*x).generic.type_decl.common.common.common.rtl);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.common.assembler_name);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.common.section_name);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.common.comdat_group);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.saved_tree);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.arguments);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.result);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.vindex);
              break;
            case TS_FUNCTION_DECL:
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.common.common.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.common.common.common.common.common.type);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.common.common.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.common.common.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.common.common.common.size);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.common.common.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.common.common.common.initial);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.common.common.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.common.common.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.function_decl.common.common.common.common.lang_specific);
              gt_pch_n_7rtx_def ((*x).generic.function_decl.common.common.common.rtl);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.common.assembler_name);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.common.section_name);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.common.comdat_group);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.saved_tree);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.arguments);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.result);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.vindex);
              gt_pch_n_8function ((*x).generic.function_decl.f);
              gt_pch_n_9tree_node ((*x).generic.function_decl.personality);
              gt_pch_n_9tree_node ((*x).generic.function_decl.function_specific_target);
              gt_pch_n_9tree_node ((*x).generic.function_decl.function_specific_optimization);
              break;
            case TS_TYPE:
              gt_pch_n_9tree_node ((*x).generic.type.common.chain);
              gt_pch_n_9tree_node ((*x).generic.type.common.type);
              gt_pch_n_9tree_node ((*x).generic.type.values);
              gt_pch_n_9tree_node ((*x).generic.type.size);
              gt_pch_n_9tree_node ((*x).generic.type.size_unit);
              gt_pch_n_9tree_node ((*x).generic.type.attributes);
              gt_pch_n_9tree_node ((*x).generic.type.pointer_to);
              gt_pch_n_9tree_node ((*x).generic.type.reference_to);
              switch (debug_hooks == &sdb_debug_hooks ? 1 : debug_hooks == &dwarf2_debug_hooks ? 2 : 0)
                {
                case 0:
                  break;
                case 1:
                  gt_pch_n_S ((*x).generic.type.symtab.pointer);
                  break;
                case 2:
                  gt_pch_n_10die_struct ((*x).generic.type.symtab.die);
                  break;
                default:
                  break;
                }
              gt_pch_n_9tree_node ((*x).generic.type.name);
              gt_pch_n_9tree_node ((*x).generic.type.minval);
              gt_pch_n_9tree_node ((*x).generic.type.maxval);
              gt_pch_n_9tree_node ((*x).generic.type.next_variant);
              gt_pch_n_9tree_node ((*x).generic.type.main_variant);
              gt_pch_n_9tree_node ((*x).generic.type.binfo);
              gt_pch_n_9tree_node ((*x).generic.type.context);
              gt_pch_n_9tree_node ((*x).generic.type.canonical);
              gt_pch_n_9lang_type ((*x).generic.type.lang_specific);
              break;
            case TS_LIST:
              gt_pch_n_9tree_node ((*x).generic.list.common.chain);
              gt_pch_n_9tree_node ((*x).generic.list.common.type);
              gt_pch_n_9tree_node ((*x).generic.list.purpose);
              gt_pch_n_9tree_node ((*x).generic.list.value);
              break;
            case TS_VEC:
              gt_pch_n_9tree_node ((*x).generic.vec.common.chain);
              gt_pch_n_9tree_node ((*x).generic.vec.common.type);
              {
                size_t i1;
                size_t l1 = (size_t)(TREE_VEC_LENGTH ((tree)&((*x).generic.vec)));
                for (i1 = 0; i1 != l1; i1++) {
                  gt_pch_n_9tree_node ((*x).generic.vec.a[i1]);
                }
              }
              break;
            case TS_EXP:
              gt_pch_n_9tree_node ((*x).generic.exp.common.chain);
              gt_pch_n_9tree_node ((*x).generic.exp.common.type);
              gt_pch_n_9tree_node ((*x).generic.exp.block);
              switch (TREE_CODE ((tree) &(*x)))
                {
                default:
                  {
                    size_t i2;
                    size_t l2 = (size_t)(TREE_OPERAND_LENGTH ((tree) &(*x)));
                    for (i2 = 0; i2 != l2; i2++) {
                      gt_pch_n_9tree_node ((*x).generic.exp.operands[i2]);
                    }
                  }
                  break;
                }
              break;
            case TS_SSA_NAME:
              gt_pch_n_9tree_node ((*x).generic.ssa_name.common.chain);
              gt_pch_n_9tree_node ((*x).generic.ssa_name.common.type);
              gt_pch_n_9tree_node ((*x).generic.ssa_name.var);
              gt_pch_n_18gimple_statement_d ((*x).generic.ssa_name.def_stmt);
              gt_pch_n_12ptr_info_def ((*x).generic.ssa_name.ptr_info);
              break;
            case TS_BLOCK:
              gt_pch_n_9tree_node ((*x).generic.block.common.chain);
              gt_pch_n_9tree_node ((*x).generic.block.common.type);
              gt_pch_n_9tree_node ((*x).generic.block.vars);
              gt_pch_n_11VEC_tree_gc ((*x).generic.block.nonlocalized_vars);
              gt_pch_n_9tree_node ((*x).generic.block.subblocks);
              gt_pch_n_9tree_node ((*x).generic.block.supercontext);
              gt_pch_n_9tree_node ((*x).generic.block.abstract_origin);
              gt_pch_n_9tree_node ((*x).generic.block.fragment_origin);
              gt_pch_n_9tree_node ((*x).generic.block.fragment_chain);
              break;
            case TS_BINFO:
              gt_pch_n_9tree_node ((*x).generic.binfo.common.chain);
              gt_pch_n_9tree_node ((*x).generic.binfo.common.type);
              gt_pch_n_9tree_node ((*x).generic.binfo.offset);
              gt_pch_n_9tree_node ((*x).generic.binfo.vtable);
              gt_pch_n_9tree_node ((*x).generic.binfo.virtuals);
              gt_pch_n_9tree_node ((*x).generic.binfo.vptr_field);
              gt_pch_n_11VEC_tree_gc ((*x).generic.binfo.base_accesses);
              gt_pch_n_9tree_node ((*x).generic.binfo.inheritance);
              gt_pch_n_9tree_node ((*x).generic.binfo.vtt_subvtt);
              gt_pch_n_9tree_node ((*x).generic.binfo.vtt_vptr);
              {
                size_t i3;
                size_t l3 = (size_t)(((*x).generic.binfo.base_binfos.base).num);
                for (i3 = 0; i3 != l3; i3++) {
                  gt_pch_n_9tree_node ((*x).generic.binfo.base_binfos.base.vec[i3]);
                }
              }
              break;
            case TS_STATEMENT_LIST:
              gt_pch_n_9tree_node ((*x).generic.stmt_list.common.chain);
              gt_pch_n_9tree_node ((*x).generic.stmt_list.common.type);
              gt_pch_n_24tree_statement_list_node ((*x).generic.stmt_list.head);
              gt_pch_n_24tree_statement_list_node ((*x).generic.stmt_list.tail);
              break;
            case TS_CONSTRUCTOR:
              gt_pch_n_9tree_node ((*x).generic.constructor.common.chain);
              gt_pch_n_9tree_node ((*x).generic.constructor.common.type);
              gt_pch_n_22VEC_constructor_elt_gc ((*x).generic.constructor.elts);
              break;
            case TS_OMP_CLAUSE:
              gt_pch_n_9tree_node ((*x).generic.omp_clause.common.chain);
              gt_pch_n_9tree_node ((*x).generic.omp_clause.common.type);
              gt_pch_n_12gimple_seq_d ((*x).generic.omp_clause.gimple_reduction_init);
              gt_pch_n_12gimple_seq_d ((*x).generic.omp_clause.gimple_reduction_merge);
              {
                size_t i4;
                size_t l4 = (size_t)(omp_clause_num_ops[OMP_CLAUSE_CODE ((tree)&((*x).generic.omp_clause))]);
                for (i4 = 0; i4 != l4; i4++) {
                  gt_pch_n_9tree_node ((*x).generic.omp_clause.ops[i4]);
                }
              }
              break;
            case TS_OPTIMIZATION:
              gt_pch_n_9tree_node ((*x).generic.optimization.common.chain);
              gt_pch_n_9tree_node ((*x).generic.optimization.common.type);
              break;
            case TS_TARGET_OPTION:
              gt_pch_n_9tree_node ((*x).generic.target_option.common.chain);
              gt_pch_n_9tree_node ((*x).generic.target_option.common.type);
              break;
            default:
              break;
            }
          break;
        default:
          break;
        }
      x = ((union lang_tree_node *)TREE_CHAIN (&(*x).generic));
    }
}

void
gt_pch_nx_lang_decl (void *x_p)
{
  struct lang_decl * const x = (struct lang_decl *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_9lang_decl, gt_ggc_e_9lang_decl))
    {
    }
}

void
gt_pch_nx_lang_type (void *x_p)
{
  struct lang_type * const x = (struct lang_type *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_9lang_type, gt_ggc_e_9lang_type))
    {
    }
}

void
gt_pch_p_17language_function (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct language_function * const x ATTRIBUTE_UNUSED = (struct language_function *)x_p;
}

void
gt_pch_p_14lang_tree_node (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  union lang_tree_node * const x ATTRIBUTE_UNUSED = (union lang_tree_node *)x_p;
  switch (lto_tree_node_structure (&((*x))))
    {
    case TS_LTO_GENERIC:
      switch (tree_node_structure (&((*x).generic)))
        {
        case TS_BASE:
          break;
        case TS_COMMON:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.common.type), cookie);
          break;
        case TS_INT_CST:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.int_cst.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.int_cst.common.type), cookie);
          break;
        case TS_REAL_CST:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.real_cst.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.real_cst.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.real_cst.real_cst_ptr), cookie);
          break;
        case TS_FIXED_CST:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.fixed_cst.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.fixed_cst.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.fixed_cst.fixed_cst_ptr), cookie);
          break;
        case TS_VECTOR:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.vector.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.vector.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.vector.elements), cookie);
          break;
        case TS_STRING:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.string.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.string.common.type), cookie);
          break;
        case TS_COMPLEX:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.complex.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.complex.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.complex.real), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.complex.imag), cookie);
          break;
        case TS_IDENTIFIER:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.identifier.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.identifier.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.identifier.id.str), cookie);
          break;
        case TS_DECL_MINIMAL:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_minimal.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_minimal.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_minimal.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_minimal.context), cookie);
          break;
        case TS_DECL_COMMON:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_common.common.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_common.common.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_common.common.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_common.common.context), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_common.size), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_common.size_unit), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_common.initial), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_common.attributes), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_common.abstract_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_common.lang_specific), cookie);
          break;
        case TS_DECL_WRTL:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.common.common.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.common.common.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.common.common.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.common.common.context), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.common.size), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.common.size_unit), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.common.initial), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.common.attributes), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.common.abstract_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.common.lang_specific), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.rtl), cookie);
          break;
        case TS_DECL_NON_COMMON:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.common.common.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.common.common.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.common.common.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.common.common.context), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.common.size), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.common.size_unit), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.common.initial), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.common.attributes), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.common.abstract_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.common.lang_specific), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.rtl), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.assembler_name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.section_name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.comdat_group), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.saved_tree), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.arguments), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.result), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.vindex), cookie);
          break;
        case TS_PARM_DECL:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.common.common.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.common.common.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.common.common.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.common.common.context), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.common.size), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.common.size_unit), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.common.initial), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.common.attributes), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.common.abstract_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.common.lang_specific), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.rtl), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.incoming_rtl), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.ann), cookie);
          break;
        case TS_DECL_WITH_VIS:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.common.common.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.common.common.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.common.common.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.common.common.context), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.common.size), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.common.size_unit), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.common.initial), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.common.attributes), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.common.abstract_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.common.lang_specific), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.rtl), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.assembler_name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.section_name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.comdat_group), cookie);
          break;
        case TS_VAR_DECL:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.common.common.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.common.common.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.common.common.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.common.common.context), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.common.size), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.common.size_unit), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.common.initial), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.common.attributes), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.common.abstract_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.common.lang_specific), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.rtl), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.assembler_name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.section_name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.comdat_group), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.ann), cookie);
          break;
        case TS_FIELD_DECL:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.common.common.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.common.common.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.common.common.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.common.common.context), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.common.size), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.common.size_unit), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.common.initial), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.common.attributes), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.common.abstract_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.common.lang_specific), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.offset), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.bit_field_type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.qualifier), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.bit_offset), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.fcontext), cookie);
          break;
        case TS_LABEL_DECL:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.common.common.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.common.common.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.common.common.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.common.common.context), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.common.size), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.common.size_unit), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.common.initial), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.common.attributes), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.common.abstract_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.common.lang_specific), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.rtl), cookie);
          break;
        case TS_RESULT_DECL:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.common.common.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.common.common.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.common.common.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.common.common.context), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.common.size), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.common.size_unit), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.common.initial), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.common.attributes), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.common.abstract_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.common.lang_specific), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.rtl), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.ann), cookie);
          break;
        case TS_CONST_DECL:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.common.common.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.common.common.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.common.common.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.common.common.context), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.common.size), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.common.size_unit), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.common.initial), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.common.attributes), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.common.abstract_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.common.lang_specific), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.rtl), cookie);
          break;
        case TS_TYPE_DECL:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.common.common.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.common.common.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.common.common.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.common.common.context), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.common.size), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.common.size_unit), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.common.initial), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.common.attributes), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.common.abstract_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.common.lang_specific), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.rtl), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.assembler_name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.section_name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.comdat_group), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.saved_tree), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.arguments), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.result), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.vindex), cookie);
          break;
        case TS_FUNCTION_DECL:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.common.common.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.common.common.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.common.common.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.common.common.context), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.common.size), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.common.size_unit), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.common.initial), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.common.attributes), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.common.abstract_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.common.lang_specific), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.rtl), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.assembler_name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.section_name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.comdat_group), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.saved_tree), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.arguments), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.result), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.vindex), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.f), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.personality), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.function_specific_target), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.function_specific_optimization), cookie);
          break;
        case TS_TYPE:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.values), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.size), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.size_unit), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.attributes), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.pointer_to), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.reference_to), cookie);
          switch (debug_hooks == &sdb_debug_hooks ? 1 : debug_hooks == &dwarf2_debug_hooks ? 2 : 0)
            {
            case 0:
              break;
            case 1:
              if ((void *)(x) == this_obj)
                op (&((*x).generic.type.symtab.pointer), cookie);
              break;
            case 2:
              if ((void *)(x) == this_obj)
                op (&((*x).generic.type.symtab.die), cookie);
              break;
            default:
              break;
            }
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.minval), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.maxval), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.next_variant), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.main_variant), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.binfo), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.context), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.canonical), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.lang_specific), cookie);
          break;
        case TS_LIST:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.list.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.list.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.list.purpose), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.list.value), cookie);
          break;
        case TS_VEC:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.vec.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.vec.common.type), cookie);
          {
            size_t i1;
            size_t l1 = (size_t)(TREE_VEC_LENGTH ((tree)&((*x).generic.vec)));
            for (i1 = 0; i1 != l1; i1++) {
              if ((void *)(x) == this_obj)
                op (&((*x).generic.vec.a[i1]), cookie);
            }
          }
          break;
        case TS_EXP:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.exp.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.exp.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.exp.block), cookie);
          switch (TREE_CODE ((tree) &(*x)))
            {
            default:
              {
                size_t i2;
                size_t l2 = (size_t)(TREE_OPERAND_LENGTH ((tree) &(*x)));
                for (i2 = 0; i2 != l2; i2++) {
                  if ((void *)(x) == this_obj)
                    op (&((*x).generic.exp.operands[i2]), cookie);
                }
              }
              break;
            }
          break;
        case TS_SSA_NAME:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.ssa_name.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.ssa_name.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.ssa_name.var), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.ssa_name.def_stmt), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.ssa_name.ptr_info), cookie);
          break;
        case TS_BLOCK:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.vars), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.nonlocalized_vars), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.subblocks), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.supercontext), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.abstract_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.fragment_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.fragment_chain), cookie);
          break;
        case TS_BINFO:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.offset), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.vtable), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.virtuals), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.vptr_field), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.base_accesses), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.inheritance), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.vtt_subvtt), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.vtt_vptr), cookie);
          {
            size_t i3;
            size_t l3 = (size_t)(((*x).generic.binfo.base_binfos.base).num);
            for (i3 = 0; i3 != l3; i3++) {
              if ((void *)(x) == this_obj)
                op (&((*x).generic.binfo.base_binfos.base.vec[i3]), cookie);
            }
          }
          break;
        case TS_STATEMENT_LIST:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.stmt_list.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.stmt_list.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.stmt_list.head), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.stmt_list.tail), cookie);
          break;
        case TS_CONSTRUCTOR:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.constructor.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.constructor.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.constructor.elts), cookie);
          break;
        case TS_OMP_CLAUSE:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.omp_clause.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.omp_clause.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.omp_clause.gimple_reduction_init), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.omp_clause.gimple_reduction_merge), cookie);
          {
            size_t i4;
            size_t l4 = (size_t)(omp_clause_num_ops[OMP_CLAUSE_CODE ((tree)&((*x).generic.omp_clause))]);
            for (i4 = 0; i4 != l4; i4++) {
              if ((void *)(x) == this_obj)
                op (&((*x).generic.omp_clause.ops[i4]), cookie);
            }
          }
          break;
        case TS_OPTIMIZATION:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.optimization.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.optimization.common.type), cookie);
          break;
        case TS_TARGET_OPTION:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.target_option.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.target_option.common.type), cookie);
          break;
        default:
          break;
        }
      break;
    default:
      break;
    }
}

void
gt_pch_p_9lang_decl (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct lang_decl * const x ATTRIBUTE_UNUSED = (struct lang_decl *)x_p;
}

void
gt_pch_p_9lang_type (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct lang_type * const x ATTRIBUTE_UNUSED = (struct lang_type *)x_p;
}

/* GC roots.  */

EXPORTED_CONST struct ggc_root_tab gt_ggc_r_gtype_lto_h[] = {
  {
    &lto_global_var_decls,
    1,
    sizeof (lto_global_var_decls),
    &gt_ggc_mx_VEC_tree_gc,
    &gt_pch_nx_VEC_tree_gc
  },
  LAST_GGC_ROOT_TAB
};

extern const struct ggc_root_tab gt_ggc_r_gt_coverage_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_caller_save_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_alias_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_cselib_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_cgraph_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_ipa_inline_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_dbxout_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_dwarf2out_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_dwarf2asm_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_tree_vect_generic_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_dojump_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_emit_rtl_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_explow_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_expr_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_function_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_except_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_gcse_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_optabs_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_reginfo_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_cfglayout_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_sdbout_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_stor_layout_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_stringpool_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_tree_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_varasm_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_tree_mudflap_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_tree_ssa_address_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_gimplify_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_tree_scalar_evolution_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_tree_profile_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_tree_nested_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_varpool_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_tree_parloops_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_omp_low_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_targhooks_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_arm_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_passes_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_cgraphunit_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_tree_ssa_propagate_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_ipa_reference_h[];
extern const struct ggc_root_tab gt_ggc_r_gtype_desc_c[];
extern const struct ggc_root_tab gt_ggc_r_gtype_lto_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_lto_lto_lang_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_lto_lto_h[];
EXPORTED_CONST struct ggc_root_tab * const gt_ggc_rtab[] = {
  gt_ggc_r_gt_coverage_h,
  gt_ggc_r_gt_caller_save_h,
  gt_ggc_r_gt_alias_h,
  gt_ggc_r_gt_cselib_h,
  gt_ggc_r_gt_cgraph_h,
  gt_ggc_r_gt_ipa_inline_h,
  gt_ggc_r_gt_dbxout_h,
  gt_ggc_r_gt_dwarf2out_h,
  gt_ggc_r_gt_dwarf2asm_h,
  gt_ggc_r_gt_tree_vect_generic_h,
  gt_ggc_r_gt_dojump_h,
  gt_ggc_r_gt_emit_rtl_h,
  gt_ggc_r_gt_explow_h,
  gt_ggc_r_gt_expr_h,
  gt_ggc_r_gt_function_h,
  gt_ggc_r_gt_except_h,
  gt_ggc_r_gt_gcse_h,
  gt_ggc_r_gt_optabs_h,
  gt_ggc_r_gt_reginfo_h,
  gt_ggc_r_gt_cfglayout_h,
  gt_ggc_r_gt_sdbout_h,
  gt_ggc_r_gt_stor_layout_h,
  gt_ggc_r_gt_stringpool_h,
  gt_ggc_r_gt_tree_h,
  gt_ggc_r_gt_varasm_h,
  gt_ggc_r_gt_tree_mudflap_h,
  gt_ggc_r_gt_tree_ssa_address_h,
  gt_ggc_r_gt_gimplify_h,
  gt_ggc_r_gt_tree_scalar_evolution_h,
  gt_ggc_r_gt_tree_profile_h,
  gt_ggc_r_gt_tree_nested_h,
  gt_ggc_r_gt_varpool_h,
  gt_ggc_r_gt_tree_parloops_h,
  gt_ggc_r_gt_omp_low_h,
  gt_ggc_r_gt_targhooks_h,
  gt_ggc_r_gt_arm_h,
  gt_ggc_r_gt_passes_h,
  gt_ggc_r_gt_cgraphunit_h,
  gt_ggc_r_gt_tree_ssa_propagate_h,
  gt_ggc_r_gt_ipa_reference_h,
  gt_ggc_r_gtype_desc_c,
  gt_ggc_r_gtype_lto_h,
  gt_ggc_r_gt_lto_lto_lang_h,
  gt_ggc_r_gt_lto_lto_h,
  NULL
};
extern const struct ggc_root_tab gt_ggc_rd_gt_alias_h[];
extern const struct ggc_root_tab gt_ggc_rd_gt_bitmap_h[];
extern const struct ggc_root_tab gt_ggc_rd_gt_emit_rtl_h[];
extern const struct ggc_root_tab gt_ggc_rd_gt_lists_h[];
extern const struct ggc_root_tab gt_ggc_rd_gt_gimple_h[];
extern const struct ggc_root_tab gt_ggc_rd_gt_tree_iterator_h[];
extern const struct ggc_root_tab gt_ggc_rd_gt_tree_phinodes_h[];
EXPORTED_CONST struct ggc_root_tab * const gt_ggc_deletable_rtab[] = {
  gt_ggc_rd_gt_alias_h,
  gt_ggc_rd_gt_bitmap_h,
  gt_ggc_rd_gt_emit_rtl_h,
  gt_ggc_rd_gt_lists_h,
  gt_ggc_rd_gt_gimple_h,
  gt_ggc_rd_gt_tree_iterator_h,
  gt_ggc_rd_gt_tree_phinodes_h,
  NULL
};
extern const struct ggc_cache_tab gt_ggc_rc_gt_emit_rtl_h[];
extern const struct ggc_cache_tab gt_ggc_rc_gt_function_h[];
extern const struct ggc_cache_tab gt_ggc_rc_gt_tree_h[];
extern const struct ggc_cache_tab gt_ggc_rc_gt_varasm_h[];
extern const struct ggc_cache_tab gt_ggc_rc_gt_tree_ssa_structalias_h[];
extern const struct ggc_cache_tab gt_ggc_rc_gt_lto_symtab_h[];
EXPORTED_CONST struct ggc_cache_tab * const gt_ggc_cache_rtab[] = {
  gt_ggc_rc_gt_emit_rtl_h,
  gt_ggc_rc_gt_function_h,
  gt_ggc_rc_gt_tree_h,
  gt_ggc_rc_gt_varasm_h,
  gt_ggc_rc_gt_tree_ssa_structalias_h,
  gt_ggc_rc_gt_lto_symtab_h,
  NULL
};
extern const struct ggc_root_tab gt_pch_rc_gt_emit_rtl_h[];
extern const struct ggc_root_tab gt_pch_rc_gt_function_h[];
extern const struct ggc_root_tab gt_pch_rc_gt_tree_h[];
extern const struct ggc_root_tab gt_pch_rc_gt_varasm_h[];
extern const struct ggc_root_tab gt_pch_rc_gt_tree_ssa_structalias_h[];
extern const struct ggc_root_tab gt_pch_rc_gt_lto_symtab_h[];
EXPORTED_CONST struct ggc_root_tab * const gt_pch_cache_rtab[] = {
  gt_pch_rc_gt_emit_rtl_h,
  gt_pch_rc_gt_function_h,
  gt_pch_rc_gt_tree_h,
  gt_pch_rc_gt_varasm_h,
  gt_pch_rc_gt_tree_ssa_structalias_h,
  gt_pch_rc_gt_lto_symtab_h,
  NULL
};
extern const struct ggc_root_tab gt_pch_rs_gt_alias_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_cgraph_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_dbxout_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_dwarf2out_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_dwarf2asm_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_tree_vect_generic_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_emit_rtl_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_function_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_except_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_sdbout_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_tree_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_varasm_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_gimplify_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_omp_low_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_arm_h[];
extern const struct ggc_root_tab gt_pch_rs_gtype_desc_c[];
EXPORTED_CONST struct ggc_root_tab * const gt_pch_scalar_rtab[] = {
  gt_pch_rs_gt_alias_h,
  gt_pch_rs_gt_cgraph_h,
  gt_pch_rs_gt_dbxout_h,
  gt_pch_rs_gt_dwarf2out_h,
  gt_pch_rs_gt_dwarf2asm_h,
  gt_pch_rs_gt_tree_vect_generic_h,
  gt_pch_rs_gt_emit_rtl_h,
  gt_pch_rs_gt_function_h,
  gt_pch_rs_gt_except_h,
  gt_pch_rs_gt_sdbout_h,
  gt_pch_rs_gt_tree_h,
  gt_pch_rs_gt_varasm_h,
  gt_pch_rs_gt_gimplify_h,
  gt_pch_rs_gt_omp_low_h,
  gt_pch_rs_gt_arm_h,
  gt_pch_rs_gtype_desc_c,
  NULL
};
