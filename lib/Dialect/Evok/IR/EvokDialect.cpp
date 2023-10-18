#include "include/Dialect/Evok/IR/EvokDialect.h"
#include "include/Dialect/Evok/IR/EvokTypes.h"

#include "llvm/include/llvm/ADT/TypeSwitch.h"            // from @llvm-project
#include "mlir/include/mlir/IR/Builders.h"               // from @llvm-project
#include "mlir/include/mlir/IR/DialectImplementation.h"  // from @llvm-project

// Generated definitions
#include "include/Dialect/Evok/IR/EvokDialect.cpp.inc"
#define GET_TYPEDEF_CLASSES
#include "include/Dialect/Evok/IR/EvokTypes.cpp.inc"

namespace mlir {
namespace evokir {
namespace evok {

//===----------------------------------------------------------------------===//
// Evok dialect.
//===----------------------------------------------------------------------===//

// Dialect construction: there is one instance per context and it registers its
// operations, types, and interfaces here.
void EvokDialect::initialize() {
  addTypes<
#define GET_TYPEDEF_LIST
#include "include/Dialect/Evok/IR/EvokTypes.cpp.inc"
      >();
}

}  // namespace evok
}  // namespace evokir
}  // namespace mlir
