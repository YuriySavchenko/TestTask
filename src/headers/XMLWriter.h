//
// Created by yuriy on 10/8/18.
//

#ifndef TEST_WORK_XMLWRITER_H
#define TEST_WORK_XMLWRITER_H

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "XML.h"

class XMLWriter : public XML {
/* private section for saving variables */

private:
    std::ofstream fout;
    std::string buffer;
    std::vector<int> vector;

/* constructors and destructors */

public:
    XMLWriter(std::string, std::vector<int> &);
    ~XMLWriter();

/* public section for main methods */

public:
    void openFile() override;
    void closeFile() override;
    void writeFile();

/* prototypes of functions which allow getting values from private variables */

public:
    const std::ofstream &getFout() const;
    const std::vector<int> &getVector() const;
    const std::string &getBuffer() const;
};


#endif //TEST_WORK_XMLWRITER_H
