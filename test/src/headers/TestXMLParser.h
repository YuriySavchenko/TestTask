//
// Created by yuriy on 10/20/18.
//

#ifndef TEST_WORK_TESTXMLPARSER_H
#define TEST_WORK_TESTXMLPARSER_H

#include <cxxtest/TestSuite.h>
#include "../../../src/headers/XMLParser.h"
#include "../../../src/headers/Interval.h"

class TestXMLParser : public CxxTest::TestSuite {
/* prototypes for testing functions */

public:
    void testOpenFile();
    void testReadFile();
    void testCloseFile();
    void testParseFile();
};


#endif //TEST_WORK_TESTXMLPARSER_H
