#ifndef COMMANDHANDLER_H
#define COMMANDHANDLER_H

#include <iostream>
#include <vector>
#include <map>

#include "./system/cpp.h"

void Handler(std::string cmd, std::vector<std::string> args);

class Command {
    public:
    virtual bool AppliesTo(std::string cmd) = 0;
    virtual void Handle(std::vector<std::string> args) = 0;
};

#endif