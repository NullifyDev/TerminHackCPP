#include "../commandhandler.h"
#include "../system/cpp.h"


class Echo : public Command {
    // bool AppliesTo(std::string cmd) {  return cmd == "echo"; }   
    void Handle(std::vector<std::string> args) {
        using namespace std; string msg = "";
        
        for (auto arg : args) { msg += arg + " "; }
        Utils::WriteLine(msg);
    }
};