# Evok, dialect defining runtime library ops

load("@llvm-project//mlir:tblgen.bzl", "gentbl_cc_library", "td_library")

package(
    default_visibility = ["//visibility:public"],
)

exports_files(
    [
        "EvokDialect.h",
        "EvokTypes.h",
    ],
)

td_library(
    name = "td_files",
    srcs = [
        "EvokDialect.td",
        "EvokTypes.td",
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
    ],
    tblgen = "@llvm-project//mlir:mlir-tblgen",
    td_file = "EvokDialect.td",
    deps = [
        ":td_files",
    ],
)

gentbl_cc_library(
    name = "types_inc_gen",
    tbl_outs = [
        (
            ["-gen-typedef-decls"],
            "EvokTypes.h.inc",
        ),
        (
            ["-gen-typedef-defs"],
            "EvokTypes.cpp.inc",
        ),
    ],
    tblgen = "@llvm-project//mlir:mlir-tblgen",
    td_file = "EvokTypes.td",
    deps = [
        ":dialect_inc_gen",
        ":td_files",
    ],
)
