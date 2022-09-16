#include "cpp.hpp"
#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>



using json = nlohmann::json;

namespace Json {
    std::string ReadToString(std::string path) {
        std::ifstream f(path);
        json data = json::parse(f);
        // std::string s = data.dump();
        return data.dump(4); 
    }

    json Read(std::string path) {
        std::ifstream f(path);
        json data = json::parse(f);
        // std::string s = data.dump();
        return data;
    }

    void Write(std::string path, std::string content) {
        using namespace std;
        ofstream file;
        file.open (path);
        file << content;
        file.close();
    }
}
