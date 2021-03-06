get_property(IDYNTREE_TREE_INCLUDE_DIRS GLOBAL PROPERTY IDYNTREE_TREE_INCLUDE_DIRS)
macro(add_ik_test classname)
  set(testsrc ${classname}UnitTest.cpp)
  set(testbinary ${classname}UnitTest)
  set(testname   UnitTest${classname})
  add_executable(${testbinary} ${testsrc})
  target_include_directories(${testbinary} PRIVATE ${IDYNTREE_TREE_INCLUDE_DIRS} ${EIGEN3_INCLUDE_DIR})
  target_link_libraries(${testbinary} idyntree-model idyntree-inverse-kinematics)
  add_test(NAME ${testname} COMMAND ${testbinary})

  if(IDYNTREE_RUN_VALGRIND_TESTS)
    add_test(NAME memcheck_${testname} COMMAND ${MEMCHECK_COMMAND_COMPLETE} $<TARGET_FILE:${testbinary}>)
  endif()
endmacro()

add_ik_test(ConvexHullHelpers)
add_ik_test(InverseKinematics)

