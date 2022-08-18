#ifndef ECHO_H 
#define ECHO_H
#include "../commandhandler.h"
#include "../system/cpp.h"

class Echo : public Command {
    public:
    bool AppliesTo(std::string cmd) {  return cmd == "echo"; }
    void Handle(std::vector<std::string> args) {
        using namespace std; string msg = "";
        cout << "ECHO CALLED!" << endl;

        for (auto arg : args) { msg += arg + " "; }
        // Utils::WriteLine(msg);
        // cout << msg << endl;
    }
};
#endif