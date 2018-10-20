//
// Created by yuriy on 10/20/18.
//

#include "../headers/TestXMLParser.h"

/* procedure for testing { XMLParser::openFile() } */

void TestXMLParser::testOpenFile() {
    XMLParser xmlP("../files/test.xml");
    xmlP.openFile();

    bool open = xmlP.getFin().is_open();
    xmlP.closeFile();

    ETS_ASSERT_EQUALS(open, true);
}

/* procedure for testing { XMLParser::readFile() } */

void TestXMLParser::testReadFile() {
    XMLParser xmlP("../files/test.xml");
    xmlP.openFile();
    xmlP.readFile();
    xmlP.closeFile();

    ETS_ASSERT_EQUALS(xmlP.getBuffer(), "<high> 10 </high>\n");
}

/* procedure for testing { XMLParser::closeFile() } */

void TestXMLParser::testCloseFile() {
    XMLParser xmlP("../files/test.xml");
    xmlP.openFile();
    xmlP.closeFile();

    ETS_ASSERT_EQUALS(xmlP.getFin().is_open(), false);
}

/* procedure for testing { XMLParser::parseFile(std::vector<Interval>) } */

void TestXMLParser::testParseFile() {
    XMLParser xmlP("../files/file.xml");
    std::vector<Interval> intervals;
    std::vector<std::vector<int>> vector;

    xmlP.openFile();
    xmlP.readFile();
    xmlP.parseFile(intervals);
    xmlP.closeFile();

    std::vector<Interval>::iterator it;

    for (it=intervals.begin(); it < intervals.end(); it++)
        vector.push_back(std::vector<int> {(*it).low, (*it).high});

    std::vector<std::vector<int>> cmp_v = {{100, 200}, {500, 888}, {100, 400}};

    ETS_ASSERT_EQUALS(vector, cmp_v);
}
