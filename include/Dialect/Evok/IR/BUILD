# Evok, dialect defining runtime library ops

load("@llvm-project//mlir:tblgen.bzl", "gentbl_cc_library", "td_library")

package(
    default_visibility = ["//visibility:public"],
)

exports_files(
    [
        "EvokDialect.h",
    ],
)

td_library(
    name = "td_files",
    srcs = [
        "EvokDialect.td",
    ],
    # include from the evokir-root to enable fully-qualified include-paths
    includes = ["../../../.."],
    deps = [
        "@llvm-project//mlir:BuiltinDialectTdFiles",
        "@llvm-project//mlir:InferTypeOpInterfaceTdFiles",
        "@llvm-project//mlir:OpBaseTdFiles",
        "@llvm-project//mlir:SideEffectInterfacesTdFiles",
    ],
)

gentbl_cc_library(
    name = "dialect_inc_gen",
    tbl_outs = [
        (
            ["-gen-dialect-decls"],
            "EvokDialect.h.inc",
        ),
        (
            ["-gen-dialect-defs"],
            "EvokDialect.cpp.inc",
        ),
        (
            ["-gen-dialect-doc"],
            "EvokDialect.md",
        ),
    ],
    tblgen = "@llvm-project//mlir:mlir-tblgen",
    td_file = "EvokDialect.td",
    deps = [
        ":td_files",
    ],
)
