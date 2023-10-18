#ifndef EVOKIR_INCLUDE_DIALECT_EVOK_IR_EVOKTYPES_TD_
#define EVOKIR_INCLUDE_DIALECT_EVOK_IR_EVOKTYPES_TD_

include "EvokDialect.td"
include "mlir/IR/AttrTypeBase.td"

// Base class for Evok types
class Evok_Type<string name, string typeMnemonic> : TypeDef<Evok_Dialect, name> {
  let mnemonic = typeMnemonic;
}

def Card : Evok_Type<"Card", "card"> {
  let summary = "An abstract representation of a card";

  let description = [{
    A type for an opaque card within the runtime environment.
  }];
}

#endif  // EVOKIR_INCLUDE_DIALECT_EVOK_IR_EVOKTYPES_TD_
