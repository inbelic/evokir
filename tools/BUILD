# The "tools" directory contains binary targets that expose the public API of
# the passes in the project.

package(
    default_visibility = ["//visibility:public"],
)

# We name the tool `evokir-opt` following the pattern of `mlir-opt`.
cc_binary(
    name = "evokir-opt",
    srcs = ["evokir-opt.cpp"],
    includes = ["include"],
    deps = [
        "@evokir//lib/Dialect/Evok/IR:Dialect",
        "@llvm-project//mlir:AllPassesAndDialects",
        "@llvm-project//mlir:MlirOptLib",
        "@llvm-project//mlir:Pass",
    ],
)
