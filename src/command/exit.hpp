#ifndef EXIT_HPP
#define EXIT_HPP

#include "../commandhandler.hpp"

class Exit : public Command {
    bool AppliesTo(std::string cmd) {  return cmd == "exit"; }
    void Handle(std::vector<char*> args) { exit(0); }
};

#endif