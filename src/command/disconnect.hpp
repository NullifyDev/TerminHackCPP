#ifndef DISCONNECT_HPP
#define DISCONNECT_HPP

#include <iostream>
#include "../utils/cpp.hpp"
#include "../utils/json.hpp"
#include "../commandhandler.hpp"

class Disconnect : public Command {
    bool AppliesTo(std::string cmd) {  return cmd == "disconnect"; }
    void Handle(std::vector<char*> args) {
        using json = nlohmann::json;
        auto jdata = Json::Read("src/network/networkpointer.json");
        jdata["ConnectedTo"] = jdata["Player"];
        Json::Write("src/network/networkpointer.json", jdata.dump(4));
    }
};

#endif

/* 
auto jdata = Json::Read("src/network/networkpointer.json");
jdata["ConnectedTo"] = jdata["Player"];
Json::Write("src/network/networkpointer.json", jdata.dump(4));
*/