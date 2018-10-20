//
// Created by yuriy on 10/8/18.
//

#ifndef TEST_WORK_XML_H
#define TEST_WORK_XML_H

#include <iostream>

class XML {
protected:
    std::string name;

public:
    virtual void openFile() = 0;
    virtual void closeFile() = 0;
};


#endif //TEST_WORK_XML_H
