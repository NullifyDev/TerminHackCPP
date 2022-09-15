#ifndef LS_HPP
#define LS_HPP

#include "../commandhandler.hpp"
#include "../utils/json.hpp"
#include "../utils/cpp.hpp"
#include "../network/devicepointer.hpp"

class Ls : public Command {
    bool AppliesTo(std::string cmd) {  return cmd == "ls"; }
    void Handle(std::vector<char*> args) {
        using namespace Json;
        using namespace Utils;
        // using namespace Network;
        Network::GetDevice();
    }
};

#endif