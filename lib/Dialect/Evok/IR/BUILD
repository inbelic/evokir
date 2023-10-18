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
    ],
    deps = [
        "@evokir//include/Dialect/Evok/IR:dialect_inc_gen",
        "@llvm-project//llvm:Support",
        "@llvm-project//mlir:IR",
    ],
)
