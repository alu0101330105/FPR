add_library(libraries SHARED
  FPR.cc
)

target_include_directories(libraries PUBLIC
  .
)