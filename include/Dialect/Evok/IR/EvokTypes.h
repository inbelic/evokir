#ifndef EVOKIR_INCLUDE_DIALECT_EVOK_IR_EVOKTYPES_H_
#define EVOKIR_INCLUDE_DIALECT_EVOK_IR_EVOKTYPES_H_

// Required because the .h.inc file refers to MLIR classes and does not itself
// have any includes.
#include "mlir/include/mlir/IR/DialectImplementation.h"

#define GET_TYPEDEF_CLASSES
#include "include/Dialect/Evok/IR/EvokTypes.h.inc"

#endif  // EVOKIR_INCLUDE_DIALECT_EVOK_IR_EVOKTYPES_H_
