#include "include/Dialect/Evok/IR/EvokDialect.h"
#include "mlir/include/mlir/InitAllDialects.h"
#include "mlir/include/mlir/Tools/mlir-opt/MlirOptMain.h"

int main(int argc, char **argv) {
  mlir::DialectRegistry registry;
  registry.insert<mlir::evokir::evok::EvokDialect>();
  mlir::registerAllDialects(registry);

  return mlir::asMainReturnCode(
      mlir::MlirOptMain(argc, argv, "Evokir Pass Driver", registry));
}
