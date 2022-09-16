#ifndef DEVICEPOINTER_HPP
#define DEVICEPOINTER_HPP

#include "../utils/json.hpp"
#include "../utils/cpp.hpp"
#include "internetprotocols/dhcp/ipv4.hpp"
#include <nlohmann/json.hpp>
#include <vector>

namespace Network {
    void GetDevice() {
        using namespace Json;
        using namespace Utils;
        auto routerip = Json::Read("src/network/playerpointer.json")["Player"]["Router"].dump(4);
        auto deviceip = Json::Read("src/network/playerpointer.json")["Player"]["Device"].dump(4);
    }

    void SetConnectedDevice(std::string routerip, std::string deviceip) {
        // connect 192.168.12.25 A1:B2:C3:D4
        using json = nlohmann::json;
        using namespace Utils;
        json jdata = Json::Read("src/network/playerpointer.json");
        WriteLine(jdata.dump(4));


        std::vector<char*> splitrouterip = SplitStr(routerip.c_str(), ".");
        std::vector<char*> splitdeviceip = SplitStr(deviceip.c_str(), ".");

        bool isValid = DHCP::ipv4::Validate(splitrouterip);

        // validate IPv4 format
        WriteLine("Before: " + jdata.dump(4));


        jdata["ConnectedTo"] = { {"Router", routerip}, {"Device", deviceip} };
        WriteLine(jdata["ConnectedTo"].dump(4));
        Json::Write("src/network/playerpointer.json", jdata.dump(4));
    }
};

#endif