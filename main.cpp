#include <iostream>
#include "src/system/cpp.h"
#include "src/commandhandler.h"

int main(int argc, char *argv[]) {
    using namespace Utils;
    WriteLine("/////////// [START] ///////////");

    while(true) {
        using namespace std;
        using namespace Utils;
        
        string input;
        Utils::Write("root@ramdahl:~# ");
        cin >> input;
        input+= "\n";
        Utils::WriteLine("Terminal Input: " + input);
        if (!input.size() || input.size() != 0) {
            vector<char*> args = SplitStr(input.c_str(), " ");
            // CommandHandler::Handle(args);
        }
    }


    return 0;
}