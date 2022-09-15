#ifndef CLEAR_HPP
#define CLEAR_HPP
#include "../commandhandler.hpp"
#include "../utils/cpp.hpp"

class Clear : public Command {
    bool AppliesTo(std::string cmd) {  return cmd == "echo"; } 
    void Handle(std::vector<char*> args) { std::system("clear"); }
};
#endif