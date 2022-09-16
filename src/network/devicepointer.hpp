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
        std::string deviceip = Json::Read("src/network/networkpointer.json")["Player"]["Device"].dump(4);
        std::string routerip = Json::Read("src/network/networkpointer.json")["Player"]["Router"].dump(4);
    }

    void SetConnectedDevice(char * routerip, std::string deviceip) {
        // connect 192.168.12.25 A1:B2:C3:D4
        using json = nlohmann::json;
        using namespace Utils;

        json jdata = Json::Read("src/network/networkpointer.json");

        std::vector<char *> splitrouterip = SplitStr(routerip, ".");
        bool isValid = DHCP::ipv4::Validate(splitrouterip);

        WriteLine("isValid: " + isValid);

        if (isValid == true) {
            jdata["ConnectedTo"] = { {"Router", routerip}, {"Device", deviceip} };
            Json::Write("src/network/networkpointer.json", jdata.dump(4));
        }
    }
};

#endif