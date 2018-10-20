//
// Created by yuriy on 10/20/18.
//

#include "../headers/TestXMLWriter.h"

/* procedure for testing { XMLWriter::openFile() } */

void TestXMLWriter::testOpenFile() {
    std::vector<int> v;
    XMLWriter xmlW("../files/test_write.xml", v);
    xmlW.openFile();

    ETS_ASSERT_EQUALS(xmlW.getFout().is_open(), true);
}

/* procedure for testing { XMLWriter::closeFile() } */

void TestXMLWriter::testCloseFile() {
    std::vector<int> v;
    XMLWriter xmlW("../files/test_write.xml", v);
    xmlW.openFile();
    xmlW.closeFile();

    ETS_ASSERT_EQUALS(xmlW.getFout().is_open(), false);
}

/* procedure for testing { XMLWriter::writeFile() } */

void TestXMLWriter::testWriteFile() {
    std::vector<int> v = {3, 5, 7, 9};
    XMLWriter xmlW("../files/test_write.xml", v);
    xmlW.openFile();
    xmlW.writeFile();
    xmlW.closeFile();

    std::string text = "";

    text += "<root>\n";
    text += "    ";
    text += "<primes> 3 5 7 9 </primes>";
    text += "\n</root>";

    ETS_ASSERT_EQUALS(xmlW.getBuffer(), text);
}
