//
// Created by yuriy on 10/8/18.
//

#include "../headers/XMLWriter.h"

/* implementation of destructor */

XMLWriter::~XMLWriter() {

}

/* redefined function for opening file */

void XMLWriter::openFile() {
    if (!this->fout.is_open())
        this->fout.open(this->name);
}

/* redefined function for closing file */

void XMLWriter::closeFile() {
    if (this->fout.is_open())
        this->fout.close();
}

/* method for writing data into file */

void XMLWriter::writeFile() {
    if (fout.is_open()) {
        fout.write("<root>\n", 7);
        fout.write("    <primes> ", 13);
        std::string sequence = "";

        this->buffer += "<root>\n    <primes> ";

        if (this->vector.size()) {
            for (int i=0; i < vector.size(); i++) {
                sequence += std::to_string(vector[i]);
                sequence += " ";
            }
        }

        fout.write(sequence.c_str(), sequence.size());
        fout.write("</primes>", 9);
        fout.write("\n</root>", 8);

        this->buffer += sequence;
        this->buffer += "</primes>";
        this->buffer += "\n</root>";
    }
}

/* particular constructor for saving vector as object to writing */

XMLWriter::XMLWriter(std::string name, std::vector<int> &vector) {
    this->name = name;
    this->vector = vector;
}

/* function which allows getting value from private variable { fout } */

const std::ofstream &XMLWriter::getFout() const {
    return fout;
}

/* function which allows getting value from private variable { vector } */

const std::vector<int> &XMLWriter::getVector() const {
    return vector;
}

/* function which allows getting value from private variable { buffer } */

const std::string &XMLWriter::getBuffer() const {
    return buffer;
}
