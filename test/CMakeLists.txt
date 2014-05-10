
ADD_EXECUTABLE(debugsinglylinkedlist debugsinglylinkedlist.cpp)
TARGET_LINK_LIBRARIES(debugsinglylinkedlist DATASTRUCTURE)
ADD_TEST(debugsinglylinkedlist
  ${EXECUTABLE_OUTPUT_PATH}/debugsinglylinkedlist

COMMAND run_stest
        --report $<TARGET_FILE:  debugsinglylinkedlist>
  )
SET_TESTS_PROPERTIES(debugsinglylinkedlist PROPERTIES FAIL_REGULAR_EXPRESSION "ERROR;WARNING" )



ADD_EXECUTABLE(singlylinkedlist_add_to_front singlylinkedlist_add_to_front.cpp)
TARGET_LINK_LIBRARIES(singlylinkedlist_add_to_front DATASTRUCTURE)
ADD_TEST(singlylinkedlist_add_to_front
  ${EXECUTABLE_OUTPUT_PATH}/singlylinkedlist_add_to_front

COMMAND run_stest
        --report $<TARGET_FILE:  singlylinkedlist_add_to_front>
  )
SET_TESTS_PROPERTIES(singlylinkedlist_add_to_front  PROPERTIES FAIL_REGULAR_EXPRESSION "ERROR;WARNING" )



ADD_EXECUTABLE(singlylinkedlist_add_to_end singlylinkedlist_add_to_end.cpp)
TARGET_LINK_LIBRARIES(singlylinkedlist_add_to_end DATASTRUCTURE)
ADD_TEST(singlylinkedlist_add_to_end
  ${EXECUTABLE_OUTPUT_PATH}/singlylinkedlist_add_to_end

COMMAND run_stest
        --report $<TARGET_FILE:  singlylinkedlist_add_to_end>
  )
SET_TESTS_PROPERTIES(singlylinkedlist_add_to_end  PROPERTIES FAIL_REGULAR_EXPRESSION "ERROR;WARNING" )


ADD_EXECUTABLE(singlylinkedlist_EraseFront singlylinkedlist_erase_front.cpp)
TARGET_LINK_LIBRARIES(singlylinkedlist_EraseFront DATASTRUCTURE)
ADD_TEST(singlylinkedlist_EraseFront
  ${EXECUTABLE_OUTPUT_PATH}/singlylinkedlist_EraseFront

COMMAND run_stest
        --report $<TARGET_FILE:  singlylinkedlist_EraseFront>
  )
SET_TESTS_PROPERTIES(singlylinkedlist_EraseFront  PROPERTIES FAIL_REGULAR_EXPRESSION "ERROR;WARNING" )


ADD_EXECUTABLE(singlylinkedlist_EraseBack singlylinkedlist_erase_back.cpp)
TARGET_LINK_LIBRARIES(singlylinkedlist_EraseBack DATASTRUCTURE)
ADD_TEST(singlylinkedlist_EraseBack
  ${EXECUTABLE_OUTPUT_PATH}/singlylinkedlist_EraseBack

COMMAND run_stest
        --report $<TARGET_FILE:  singlylinkedlist_EraseBack>
  )
SET_TESTS_PROPERTIES(singlylinkedlist_EraseBack  PROPERTIES FAIL_REGULAR_EXPRESSION "ERROR;WARNING" )



ADD_EXECUTABLE(stackbysinglylinkedlist_push stackbysinglylinkedlist_push.cpp)
TARGET_LINK_LIBRARIES(stackbysinglylinkedlist_push DATASTRUCTURE)
ADD_TEST(stackbysinglylinkedlist_push
  ${EXECUTABLE_OUTPUT_PATH}/stackbysinglylinkedlist_push

COMMAND run_stest
        --report $<TARGET_FILE:  stackbysinglylinkedlist_push>
  )
SET_TESTS_PROPERTIES(stackbysinglylinkedlist_push  PROPERTIES
FAIL_REGULAR_EXPRESSION "ERROR;WARNING" )



ADD_EXECUTABLE(stackbysinglylinkedlist_pop stackbysinglylinkedlist_pop.cpp)
TARGET_LINK_LIBRARIES(stackbysinglylinkedlist_pop DATASTRUCTURE)
ADD_TEST(stackbysinglylinkedlist_pop
  ${EXECUTABLE_OUTPUT_PATH}/stackbysinglylinkedlist_pop

COMMAND run_stest
        --report $<TARGET_FILE:  stackbysinglylinkedlist_pop>
  )
SET_TESTS_PROPERTIES(stackbysinglylinkedlist_pop  PROPERTIES
FAIL_REGULAR_EXPRESSION "ERROR;WARNING" )



ADD_EXECUTABLE(stackbyarray_Push stackbyarray_push.cpp)
TARGET_LINK_LIBRARIES(stackbyarray_Push DATASTRUCTURE)
ADD_TEST(stackbyarray_Push
  ${EXECUTABLE_OUTPUT_PATH}/stackbyarray_Push

COMMAND run_stest
        --report $<TARGET_FILE:  stackbyarray_Push>
  )
SET_TESTS_PROPERTIES(stackbyarray_Push  PROPERTIES
FAIL_REGULAR_EXPRESSION "ERROR;WARNING" )


ADD_EXECUTABLE(stackbyarray_Pop stackbyarray_pop.cpp)
TARGET_LINK_LIBRARIES(stackbyarray_Pop DATASTRUCTURE)
ADD_TEST(stackbyarray_Pop
  ${EXECUTABLE_OUTPUT_PATH}/stackbyarray_Pop

COMMAND run_stest
        --report $<TARGET_FILE:  stackbyarray_Pop>
  )
SET_TESTS_PROPERTIES(stackbyarray_Pop  PROPERTIES
FAIL_REGULAR_EXPRESSION "ERROR;WARNING" )




ADD_EXECUTABLE(stackbyarray_DoubleCapacity stackbyarray_double_capacity.cpp)
TARGET_LINK_LIBRARIES(stackbyarray_DoubleCapacity DATASTRUCTURE)
ADD_TEST(stackbyarray_DoubleCapacity
  ${EXECUTABLE_OUTPUT_PATH}/stackbyarray_DoubleCapacity

COMMAND run_stest
        --report $<TARGET_FILE:  stackbyarray_DoubleCapacity>
  )
SET_TESTS_PROPERTIES(stackbyarray_DoubleCapacity  PROPERTIES
FAIL_REGULAR_EXPRESSION "ERROR;WARNING" )
