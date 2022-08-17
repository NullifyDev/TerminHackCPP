#include <iostream>
#include "./src/system/cpp.h"
#include "./src/commandhandler.cpp"
void WriteLine(std::string msg) { std::cout << msg << std::endl; }

void RunTerminal() {
    using namespace std;
    string input;
    cout << "root@ramdahl:~# ";
    cin >> input;
    vector<char*> args = splitStr(input.c_str(), " ");
    
    RunTerminal();
}

int main(int argc, char *argv[]) {
    WriteLine("/////////// [START] ///////////");
    RunTerminal();
    return 0;
}