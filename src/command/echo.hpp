#ifndef ECHO_HPP
#define ECHO_HPP
#include "../commandhandler.hpp"
#include "../utils/cpp.hpp"

class Echo : public Command {
    public:
    bool AppliesTo(std::string cmd) {  return cmd == "echo"; }
    void Handle(std::vector<char*> args) {
        using namespace std; using namespace Utils; string msg = "";

        for (auto arg : args) { msg += arg; msg += ' '; }
        WriteLine(msg);
    }
};
#endif