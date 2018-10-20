//
// Created by yuriy on 10/20/18.
//

#ifndef TEST_TASK_TESTXMLWRITER_H
#define TEST_TASK_TESTXMLWRITER_H

#include <cxxtest/TestSuite.h>
#include "../../../src/headers/XMLWriter.h"

class TestXMLWriter : public CxxTest::TestSuite {
/* prototypes for testing functions */

public:
    void testOpenFile();
    void testCloseFile();
    void testWriteFile();
};


#endif //TEST_TASK_TESTXMLWRITER_H
