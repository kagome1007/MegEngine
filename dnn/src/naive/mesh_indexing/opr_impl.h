/**
 * \file dnn/src/naive/mesh_indexing/opr_impl.h
 * MegEngine is Licensed under the Apache License, Version 2.0 (the "License")
 *
 * Copyright (c) 2014-2021 Megvii Inc. All rights reserved.
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT ARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 */
#pragma once

#include "megdnn/oprs.h"
#include "src/common/utils.h"

namespace megdnn {
namespace naive {

class MeshIndexingImpl : public MeshIndexing {
public:
    using MeshIndexing::MeshIndexing;
    void exec(
            _megdnn_tensor_in src, const IndexDesc& desc, _megdnn_tensor_out dst,
            _megdnn_workspace workspace) override;
};

class IncrMeshIndexingImpl : public IncrMeshIndexing {
public:
    using IncrMeshIndexing::IncrMeshIndexing;
    void exec(
            _megdnn_tensor_inout data, _megdnn_tensor_in value, const IndexDesc& desc,
            _megdnn_workspace workspace) override;
};

class BatchedMeshIndexingImpl : public BatchedMeshIndexing {
public:
    using BatchedMeshIndexing::BatchedMeshIndexing;
    void exec(
            _megdnn_tensor_in src, const IndexDesc& desc, _megdnn_tensor_out,
            _megdnn_workspace workspace) override;
};

class SetMeshIndexingImpl : public SetMeshIndexing {
public:
    using SetMeshIndexing::SetMeshIndexing;
    void exec(
            _megdnn_tensor_inout data, _megdnn_tensor_in value, const IndexDesc& desc,
            _megdnn_workspace workspace) override;
};

class BatchedIncrMeshIndexingImpl : public BatchedIncrMeshIndexing {
public:
    using BatchedIncrMeshIndexing::BatchedIncrMeshIndexing;
    void exec(
            _megdnn_tensor_inout data, _megdnn_tensor_in value, const IndexDesc& desc,
            _megdnn_workspace workspace) override;
};

class BatchedSetMeshIndexingImpl : public BatchedSetMeshIndexing {
public:
    using BatchedSetMeshIndexing::BatchedSetMeshIndexing;
    void exec(
            _megdnn_tensor_inout data, _megdnn_tensor_in value, const IndexDesc& desc,
            _megdnn_workspace workspace) override;
};

}  // namespace naive
}  // namespace megdnn
