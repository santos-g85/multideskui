# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\FlexibleUi_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\FlexibleUi_autogen.dir\\ParseCache.txt"
  "FlexibleUi_autogen"
  )
endif()
