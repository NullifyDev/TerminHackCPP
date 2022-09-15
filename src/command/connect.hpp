#ifndef CONNECT_HPP
#define CONNECT_HPP

#include "../commandhandler.hpp"
#include "../network/devicepointer.hpp"

class Connect : public Command {
    bool AppliesTo(std::string cmd) {  return cmd == "connect"; }
    void Handle(std::vector<char*> args) { 
        Network::SetConnectedDevice(args[0], args[1]);
     }
};

#endif