# Evok dialect

package(
    default_visibility = ["//visibility:public"],
)

cc_library(
    name = "Dialect",
    srcs = [
        "EvokDialect.cpp",
    ],
    hdrs = [
        "@evokir//include/Dialect/Evok/IR:EvokDialect.h",
        "@evokir//include/Dialect/Evok/IR:EvokTypes.h",
    ],
    deps = [
        "@evokir//include/Dialect/Evok/IR:dialect_inc_gen",
        "@evokir//include/Dialect/Evok/IR:types_inc_gen",
        "@llvm-project//llvm:Support",
        "@llvm-project//mlir:IR",
    ],
)
