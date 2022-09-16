#ifndef VALIDATEIPV4_HPP
#define VALIDATEIPV4_HPP

#include "../../../utils/json.hpp"
#include "../../../utils/cpp.hpp"
#include <nlohmann/json.hpp>
#include <vector>

namespace DHCP
{
    class ipv4
    {
        public:
        static bool Validate(std::vector<char *> ipv4)
        { // connect 192.168.12.44.155.122 A1:B2:C3:D4
            using namespace Utils; 
            if (ipv4.size() == 4) 
            {
                for (auto x : ipv4)
                {
                    if (atoi(x) > 255 || atoi(x) < 0)
                    {
                        WriteLine("Error: Invalid IPv4 Address - Illegal Value");
                        return false;
                    }
                    // if (!isdigit(atoi(x)))
                    // {
                    //     WriteLine("Error: Invalid IPv4 Address - Illegal characters");
                    //     return false;
                    // }
                } 
            } else {
                WriteLine("Error: Invalid IPv4 Address - Incorrect Format");
                return false;
            }
            return true;
        }
        // bool Generate();
    };
};

#endif