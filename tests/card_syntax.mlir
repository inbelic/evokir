// RUN: evokir-opt %s | FileCheck %s

// CHECK-LABEL: @main
// CHECK-SAME: (%[[ARG:.*]]: !evok.card) -> !evok.card {
// CHECK-NEXT: return %[[ARG]] : !evok.card
module {
  func.func @main(%arg0: !evok.card) -> !evok.card {
    return %arg0: !evok.card
  }
}
