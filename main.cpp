#include <iostream>
#include "src/system/cpp.h"
#include "src/commandhandler.h"

void RunTerminal() {
    using namespace std;
    using namespace Utils;
    string input;
    cout << "root@ramdahl:~# ";
    cin >> input;
    vector<char*> args = SplitStr(input.c_str(), " ");
    RunTerminal();
}

int main(int argc, char *argv[]) {
    using namespace Utils;
    WriteLine("/////////// [START] ///////////");
    RunTerminal();
    return 0;
}