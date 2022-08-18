#include <cstdio>
#include <cstring>
#include <vector>
#include <iostream>
#include <string>


namespace Utils {
    void Write(std::string msg) { 
        for (auto x : msg ) {
            std::cout.put(x);
        }
    }
    void WriteLine(std::string msg) { 
        for (auto x : msg ) {
            std::cout.put(x);
        }
        std::cout.put('\n');
    }
    std::vector<char*> SplitStr(const char *str, const char *delim) {
        std::vector<char*> arr;
        char *tok = strtok(strdup(str), delim);
        while (tok != NULL) {
            arr.push_back(tok);
            tok = strtok(NULL, delim);
        }
        return arr;
    }
};