/**
 * \file imperative/src/impl/ops/utility.cpp
 * MegEngine is Licensed under the Apache License, Version 2.0 (the "License")
 *
 * Copyright (c) 2014-2021 Megvii Inc. All rights reserved.
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT ARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 */

#include "megbrain/imperative/ops/utility.h"
#include "megbrain/imperative/ops/opr_attr.h"
#include "megbrain/opr/utility.h"
#include "../op_trait.h"

namespace mgb::imperative {

MGB_DYN_TYPE_OBJ_FINAL_IMPL(GenericPyOp);

namespace { namespace fastpathcopy {
    auto apply_on_var_node(
            const OpDef& def,
            const VarNodeArray& inputs) {
        return inputs;
    }

OP_TRAIT_REG(FastpathCopy,FastpathCopy)
    .apply_on_var_node(apply_on_var_node)
    .fallback();
}} // fastpathcopy

MGB_DYN_TYPE_OBJ_FINAL_IMPL(FastpathCopy);

} // namespace mgb::imperative
