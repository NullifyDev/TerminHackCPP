#ifndef CPP_H
#define CPP_H

#include <cstdio>
#include <cstring>
#include <vector>
#include <iostream>
#include <string>

namespace Utils{
    void Write(std::string msg);
    void WriteLine(std::string msg);
    std::vector<char*> SplitStr(const char *str, const char *delim);
}
#endif