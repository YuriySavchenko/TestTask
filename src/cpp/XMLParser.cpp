//
// Created by yuriy on 10/7/18.
//

#include "../headers/XMLParser.h"

/* implementation of method for parsing *.xml files */

void XMLParser::parseFile(std::vector<Interval> &intervals) {
    if (fin.is_open()) {

        std::vector<std::string> text = splitString(buffer, '\n');

        // we are checking if first and second tags are <root>

        if (cmpString(text[0], "<root>") && cmpString(text[text.size()], "</root>")) {
            for (int i=1; i < text.size(); i++) {
                if (cmpString(text[i], "<intervals>")) {
                    int endIntervals = 0;

                    // loop which allows looking for end of section { <intervals> ... </intervals> }

                    for (int j=i+1; j < text.size(); j++) {
                        if (cmpString(text[j], "</intervals>")) {
                            endIntervals = j;
                            break;
                        }
                    }

                    // revising each tag until end of section

                    for (int j=i+1; j < endIntervals; j++) {
                        if (cmpString(text[j], "<interval>")) {
                            // variables for saving integer values

                            std::string lowStr = "";
                            std::string highStr = "";

                            // if we have in first tag construction { <low> num </low> }
                            // we are transforming string between tags into number

                            int pos = indexString(5, (int) text[j+1].length(), '<', text[j+1]);

                            if (cmpString(text[j+1].substr(0, 5), "<low>") &&
                                cmpString(text[j+1].substr(pos, pos+8), "</low>"))
                                lowStr = digitString(text[j+1]);

                            // if we have in second tag construction { <high> num </high> }
                            // we are transforming string between tags into number

                            pos = indexString(6, (int) text[j+2].length(), '<', text[j+2]);

                            if (cmpString(text[j+2].substr(0, 6), "<high>") &&
                                cmpString(text[j+2].substr(pos, pos+6), "</high>"))
                                highStr = digitString(text[j+2]);

                            // if both strings can to be transforming into numbers, then add them into vector

                            int low = std::stoi(lowStr);
                            int high = std::stoi(highStr);

                            if ((low > 2) && (high > 2)) {
                                intervals.push_back(Interval{low, high});
                            }
                        }

                        // case which looking for others <interval> into <intervals>

                        if (cmpString(text[j], "</interval>")) {
                            continue;
                        }
                    }
                }
            }
        }
    }
}

/* implementation of particular constructor */

XMLParser::XMLParser(std::string name) {
    this->name = name;
}

/* implementation of destructor */

XMLParser::~XMLParser() {

}

/* redefined function for opening file */

void XMLParser::openFile() {
    if (!this->fin.is_open())
        this->fin.open(this->name);
}

/* function for reading from file */

void XMLParser::readFile() {
    if (this->fin.is_open()) {
        std::string text = "";
        std::string line;

        while(std::getline(fin, line))
            text += line + '\n';

        this->buffer = text;
    }
}

/* redefined function for closing file */

void XMLParser::closeFile() {
    if (fin.is_open())
        fin.close();
}

/* function which allows getting value from private variable { fin } */

const std::ifstream &XMLParser::getFin() const {
    return fin;
}

/* function which allows getting value from private variable { buffer } */

const std::string &XMLParser::getBuffer() const {
    return buffer;
}
