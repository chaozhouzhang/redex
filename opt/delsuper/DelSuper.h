/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include "DexClass.h"
#include "PassManager.h"

class DelSuperPass : public Pass {
 public:
  DelSuperPass() : Pass("DelSuperPass") {}

  virtual void run_pass(DexStoresVector&, ConfigFiles&, PassManager&) override;
};
