//
// Created by yuriy on 10/20/18.
//

#ifndef TEST_TASK_TESTSTRINGMETHODS_H
#define TEST_TASK_TESTSTRINGMETHODS_H

#include <cxxtest/TestSuite.h>
#include "../../../src/headers/string_methods.h"

class TestStringMethods : public CxxTest::TestSuite {
/* prototypes of methods for testing procedures in { string_methods.h } */

public:
    void testDigitString();
    void testPureString();
    void testIndexString();
    void testCmpString();
    void testSplitString();
};


#endif //TEST_TASK_TESTSTRINGMETHODS_H
