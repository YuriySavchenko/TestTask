/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_TestXMLParser_init = false;
#include "/home/yuriy/Projects/CLionProjects/Test_Task/test/src/headers/TestXMLParser.h"

static TestXMLParser suite_TestXMLParser;

static CxxTest::List Tests_TestXMLParser = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestXMLParser( "../test/src/headers/TestXMLParser.h", 12, "TestXMLParser", suite_TestXMLParser, Tests_TestXMLParser );

static class TestDescription_suite_TestXMLParser_testOpenFile : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestXMLParser_testOpenFile() : CxxTest::RealTestDescription( Tests_TestXMLParser, suiteDescription_TestXMLParser, 16, "testOpenFile" ) {}
 void runTest() { suite_TestXMLParser.testOpenFile(); }
} testDescription_suite_TestXMLParser_testOpenFile;

static class TestDescription_suite_TestXMLParser_testReadFile : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestXMLParser_testReadFile() : CxxTest::RealTestDescription( Tests_TestXMLParser, suiteDescription_TestXMLParser, 17, "testReadFile" ) {}
 void runTest() { suite_TestXMLParser.testReadFile(); }
} testDescription_suite_TestXMLParser_testReadFile;

static class TestDescription_suite_TestXMLParser_testCloseFile : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestXMLParser_testCloseFile() : CxxTest::RealTestDescription( Tests_TestXMLParser, suiteDescription_TestXMLParser, 18, "testCloseFile" ) {}
 void runTest() { suite_TestXMLParser.testCloseFile(); }
} testDescription_suite_TestXMLParser_testCloseFile;

static class TestDescription_suite_TestXMLParser_testParseFile : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestXMLParser_testParseFile() : CxxTest::RealTestDescription( Tests_TestXMLParser, suiteDescription_TestXMLParser, 19, "testParseFile" ) {}
 void runTest() { suite_TestXMLParser.testParseFile(); }
} testDescription_suite_TestXMLParser_testParseFile;

#include "/home/yuriy/Projects/CLionProjects/Test_Task/test/src/headers/TestStringMethods.h"

static TestStringMethods suite_TestStringMethods;

static CxxTest::List Tests_TestStringMethods = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestStringMethods( "../test/src/headers/TestStringMethods.h", 11, "TestStringMethods", suite_TestStringMethods, Tests_TestStringMethods );

static class TestDescription_suite_TestStringMethods_testDigitString : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestStringMethods_testDigitString() : CxxTest::RealTestDescription( Tests_TestStringMethods, suiteDescription_TestStringMethods, 15, "testDigitString" ) {}
 void runTest() { suite_TestStringMethods.testDigitString(); }
} testDescription_suite_TestStringMethods_testDigitString;

static class TestDescription_suite_TestStringMethods_testPureString : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestStringMethods_testPureString() : CxxTest::RealTestDescription( Tests_TestStringMethods, suiteDescription_TestStringMethods, 16, "testPureString" ) {}
 void runTest() { suite_TestStringMethods.testPureString(); }
} testDescription_suite_TestStringMethods_testPureString;

static class TestDescription_suite_TestStringMethods_testIndexString : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestStringMethods_testIndexString() : CxxTest::RealTestDescription( Tests_TestStringMethods, suiteDescription_TestStringMethods, 17, "testIndexString" ) {}
 void runTest() { suite_TestStringMethods.testIndexString(); }
} testDescription_suite_TestStringMethods_testIndexString;

static class TestDescription_suite_TestStringMethods_testCmpString : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestStringMethods_testCmpString() : CxxTest::RealTestDescription( Tests_TestStringMethods, suiteDescription_TestStringMethods, 18, "testCmpString" ) {}
 void runTest() { suite_TestStringMethods.testCmpString(); }
} testDescription_suite_TestStringMethods_testCmpString;

static class TestDescription_suite_TestStringMethods_testSplitString : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestStringMethods_testSplitString() : CxxTest::RealTestDescription( Tests_TestStringMethods, suiteDescription_TestStringMethods, 19, "testSplitString" ) {}
 void runTest() { suite_TestStringMethods.testSplitString(); }
} testDescription_suite_TestStringMethods_testSplitString;

#include "/home/yuriy/Projects/CLionProjects/Test_Task/test/src/headers/TestXMLWriter.h"

static TestXMLWriter suite_TestXMLWriter;

static CxxTest::List Tests_TestXMLWriter = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestXMLWriter( "../test/src//headers/TestXMLWriter.h", 11, "TestXMLWriter", suite_TestXMLWriter, Tests_TestXMLWriter );

static class TestDescription_suite_TestXMLWriter_testOpenFile : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestXMLWriter_testOpenFile() : CxxTest::RealTestDescription( Tests_TestXMLWriter, suiteDescription_TestXMLWriter, 15, "testOpenFile" ) {}
 void runTest() { suite_TestXMLWriter.testOpenFile(); }
} testDescription_suite_TestXMLWriter_testOpenFile;

static class TestDescription_suite_TestXMLWriter_testCloseFile : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestXMLWriter_testCloseFile() : CxxTest::RealTestDescription( Tests_TestXMLWriter, suiteDescription_TestXMLWriter, 16, "testCloseFile" ) {}
 void runTest() { suite_TestXMLWriter.testCloseFile(); }
} testDescription_suite_TestXMLWriter_testCloseFile;

static class TestDescription_suite_TestXMLWriter_testWriteFile : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestXMLWriter_testWriteFile() : CxxTest::RealTestDescription( Tests_TestXMLWriter, suiteDescription_TestXMLWriter, 17, "testWriteFile" ) {}
 void runTest() { suite_TestXMLWriter.testWriteFile(); }
} testDescription_suite_TestXMLWriter_testWriteFile;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
