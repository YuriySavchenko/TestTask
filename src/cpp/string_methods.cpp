//
// Created by yuriy on 10/20/18.
//

#include "../headers/string_methods.h"

/* method which looking for digits in string and transforming into number */

std::string digitString(std::string string) {
    std::string digit = "";

    for (int i=0; i < string.length(); i++) {
        if (isdigit(string[i]))
            digit += string[i];
    }

    return digit;
}

/* method for cutting string */

std::vector<std::string> splitString(std::string string, char delimiter) {
    std::vector<std::string> splitted;

    int index = 0;

    for (int i=0; i <= string.length(); i++) {
        if (string[i] == '\n' || i == string.length()) {
            std::string word = "";

            for (int j=index; j < i; j++) {
                word += string[j];
            }

            index = i+2;
            splitted.push_back(pureString(word));
            word.clear();
        }
    }

    return splitted;
}

/* method which allows remove all tabs from string */

std::string pureString(std::string string) {
    std::string result = "";

    for (int i=0; i < string.length(); i++) {
        if ((int) string[i] != 32)
            result += string[i];
    }

    return result;
}

/* implementation of method for compare strings */

bool cmpString(std::string string1, std::string string2) {
    for (int i=0; string1[i] != '\0'; i++)
        if (string1[i] != string2[i])
            return false;

    return true;
}

/* method which allows looking for index of symbol in string */

int indexString(int begin, int end, char symbol, std::string string) {
    for (int i=begin; i < end; i++)
        if (string[i] == symbol)
            return i;
}