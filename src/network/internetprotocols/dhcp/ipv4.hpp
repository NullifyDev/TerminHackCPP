#ifndef VALIDATEIPV4_HPP
#define VALIDATEIPV4_HPP

#include "../../../utils/json.hpp"
#include "../../../utils/cpp.hpp"
#include <nlohmann/json.hpp>
#include <vector>

namespace DHCP
{

    struct ipv4
    {
        static bool Validate(std::vector<char*> ipv4)
        {
            using namespace Utils; 
            if (ipv4.size() == 4) {
                for (auto x : ipv4)
                {
                    if (atoi(x) > 255 || atoi(x) < 0)
                    {
                        WriteLine("Error: Invalid IPv4 Address - Illegal value");
                        return false;
                    }
                    if (!isdigit(atoi(x)))
                    {
                        WriteLine("Error: Invalid IPv4 Address - Illegal characters");
                        return false;
                    }
                }
            } else {
                WriteLine("Error: Invalid IPv4 Address - Invalid Address");
                return false;
            }
        }
        // bool Generate();
    };
};

#endif