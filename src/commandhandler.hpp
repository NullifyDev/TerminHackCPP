#ifndef COMMANDMANAGER_H
#define COMMANDMANAGER_H

#include <iostream>
#include <vector>
#include <map>


namespace CHandler {
    void Handler(std::string cmd, std::vector<char*> args);
}

class Command {
    public:
    virtual bool AppliesTo(std::string cmd) = 0;
    virtual void Handle(std::vector<char*> args) = 0;
};

#endif