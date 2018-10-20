//
// Created by yuriy on 10/7/18.
//

#ifndef TEST_WORK_XMLPARSER_H
#define TEST_WORK_XMLPARSER_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "XML.h"
#include "Interval.h"
#include "string_methods.h"

class XMLParser : public XML {
/* private section for saving name of file */

private:
    std::ifstream fin;
    std::string buffer;

/* section for constructors and destructors */

public:
    XMLParser(std::string);
    ~XMLParser();

/* redefined and main procedures for parsing */

public:
    void openFile() override;
    void closeFile() override;
    void readFile();
    void parseFile(std::vector<Interval> &);

/* prototypes of functions which allow getting values from private variables */

public:
    const std::ifstream &getFin() const;
    const std::string &getBuffer() const;
};


#endif //TEST_WORK_XMLPARSER_H
