#ifndef ECHO_H 
#define ECHO_H
#include "../commandhandler.h"
class Echo : public Command {
    public:
    bool AppliesTo(std::string cmd) {  return cmd == "echo"; }
    void Handle(std::vector<std::string> args) {
        using namespace std; string msg = "";
        
        for (auto arg : args) { msg += arg + " "; }
        cout << msg << endl;
    }
};
#endif