//
// Created by yuriy on 10/20/18.
//

#include "../headers/TestStringMethods.h"

/* procedure for testing { digitString(std::string) } */

void TestStringMethods::testDigitString() {
    ETS_ASSERT_EQUALS(digitString("<low> 100</low>"), "100");
}

/* procedure for testing { pureString(std::string) } */

void TestStringMethods::testPureString() {
    ETS_ASSERT_EQUALS(pureString("    <intervals>"), "<intervals>");
}

/* procedure for testing { indexString(int, int, char, std::string) } */

void TestStringMethods::testIndexString() {
    ETS_ASSERT_EQUALS(indexString(4, 13, '<', "<low> 10</low>"), 8);
}

/* procedure for testing { cmpString(std::string, std::string) } */

void TestStringMethods::testCmpString() {
    ETS_ASSERT_EQUALS(cmpString("<root>", "</root>"), false);
}

/* procedure for testing { splitString(std::string, char) } */

void TestStringMethods::testSplitString() {
    std::string text = "<interval>\n <low> 100</low>\n <high> 200</high>\n </interval>";
    std::vector<std::string> v_str = {"<interval>", "<low>100</low>", "<high>200</high>", "</interval>"};
    ETS_ASSERT_EQUALS(splitString(text, '\n'), v_str);
}
