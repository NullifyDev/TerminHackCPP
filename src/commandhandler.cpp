#include <map>
#include <vector>

#include "command/cmdIncluder.hpp"
#include "utils/cpp.hpp"
#include "utils/json.hpp"

namespace CHandler {
    void Handler(std::string cmd, std::vector<char*> args) {
        using namespace std;
        
        std::map<std::string, Command*> _commandHandler {
            { "echo", new Echo },
            { "clear", new Clear },
            { "exit", new Exit },
            { "ls", new Ls },
            { "connect", new Connect } 
        };
        
        if (_commandHandler.find(cmd) != _commandHandler.end()) {
            _commandHandler.at(cmd)->Handle(args);
        } else {
            Utils::WriteLine("bash: " + cmd + ": is not a valid command");
        }
    }
}
