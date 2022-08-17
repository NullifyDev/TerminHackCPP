#include <map>
#include <vector>
#include "commands/echo.h"

void Handler(std::string cmd, std::vector<std::string> args) {
    std::map<std::string, Command*> _commandHandler {
        { "echo", new Echo() },
    };
    // if cmd is in _commandHandler, run it by calling the value of the key with passing the arguments
    if (_commandHandler.find(cmd) != _commandHandler.end()) {
        _commandHandler.at(cmd)->Handle(args);
    }
}