#ifndef JSON_HPP
#define JSON_HPP

#include <fstream>
#include "cpp.hpp"
#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>

namespace Json { 
    using json = nlohmann::json;
    json Read(std::string path);
    std::string ReadToString(std::string path);
    void Write(std::string path, std::string content);
}

#endif