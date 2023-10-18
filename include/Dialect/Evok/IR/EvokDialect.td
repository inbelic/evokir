#ifndef EVOKIR_INCLUDE_DIALECT_EVOK_IR_EVOKDIALECT_TD_
#define EVOKIR_INCLUDE_DIALECT_EVOK_IR_EVOKDIALECT_TD_

include "mlir/IR/DialectBase.td"

//===----------------------------------------------------------------------===//
// Evok dialect definitions
//===----------------------------------------------------------------------===//

def Evok_Dialect : Dialect {
  // The namespace of the dialect.
  // This corresponds to the string provided in `getDialectNamespace`.
  let name = "evok";

  let description = [{
    The Evok dialect represents the various operations that are provided by
    the evokir runtime library.
  }];

  let cppNamespace = "::mlir::evokir::evok";
}

#endif  // EVOKIR_INCLUDE_DIALECT_EVOK_IR_EVOKDIALECT_TD_
