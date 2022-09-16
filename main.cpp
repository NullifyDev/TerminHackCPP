#include <iostream>
#include "src/utils/cpp.hpp"
#include "src/commandhandler.hpp"
#include "src/utils/json.hpp"

int main(int argc, char *argv[]) {
    
    // Initiate Namespace Tools
    #pragma region Tools
    using namespace std;
    using namespace Utils;
    using namespace CHandler;
    using json = nlohmann::json;
    #pragma endregion

    // Initiate Player Information
    #pragma region PlayerInfo
    using json = nlohmann::json;

        #pragma region SetInitConnectedDevice
        auto jdata = Json::Read("src/network/networkpointer.json");
        jdata["ConnectedTo"] = jdata["Player"];
        Json::Write("src/network/networkpointer.json", jdata.dump(4));
        #pragma endregion

    #pragma endregion


    WriteLine("Faraware Ramdahl [Version 1.0]");
    WriteLine("Copyright (C) Faraware Corporation 2022. Rights reserved.");
    WriteLine("");

    while (true)
    {
        string input;
        Write("root@ramdahl:~# ");
        getline(cin, input = " ");
        if (input.size() > 0) {
            std::string cmd = input.substr(0, input.find(' '));
            vector<char*> args = SplitStr(input.c_str(), " "); 
            args.erase(args.begin());
            CHandler::Handler(cmd, args);
        } 
    }
    return 0;
}