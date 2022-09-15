#include <iostream>
#include <string>
#include <vector>

namespace Terminal {
    void Error(std::string message) { 
        using namespace std; 
        cout << "\u001b[31m" << message << "\u001b[0m" << endl; 
    };
    void Warning(std::string message) { 
        using namespace std; 
        cout << "\u001b[33m" << message << "\u001b[0m" << "\n";
    };
    void Output(std::string msg = "", int newLine = 0) {
        using namespace std;
        string line = "";

        vector<char*> message = ::SplitStr(input.c_str(), " ");
        for (std::string x : message) {
            std::string line;
            switch (x)
            {
                case "\\R": line += "\u001b[3m"; break;
                case "\\G": line += "\u001b[3m"; break;
                case "\\Y": line += "\u001b[3m"; break;
                case "\\B": line += "\u001b[3m"; break;
                case "\\M": line += "\u001b[3m"; break;
                case "\\C": line += "\u001b[3m"; break;
                case "\\W": line += "\u001b[3m"; break;
                case "\\b": line += "\u001b[3m"; break;
                case "\\u": line += "\u001b[3m"; break;
                case "\\r": line += "\u001b[3m"; break;
                case "\\Reset": return "\u001b[0m";
                case "\\BW": return "\u001b[3m";
                default: return x;
            }
            if (newLine > 0) {
                for (int i = 1; i < newLine; i++) line += "\n";
                cout << line << "\u001b[0m";
            }  else { 
                cout << line << "\u001b[0m"; 
            };
            // {
            //     "\\R" => "\u001b[31m",
            //     "\\G" => "\u001b[32m",
            //     "\\Y" => "\u001b[33m",
            //     "\\B" => "\u001b[34m",                        
            //     "\\M" => "\u001b[35m",
            //     "\\C" => "\u001b[36m",
            //     "\\W" => "\u001b[37m",
            //     "\\b" => "\u001b[1m",
            //     "\\u" => "\u001b[4m",
            //     "\\r" => "\u001b[7m",
            //     "\\Reset" => "\u001b[0m",
            //     "\\BW"=> "\u001b[47m",
            //     _ => $"{x} "
            // };
        }
        if (newLine > 0) {
            for (int i = 1; i < newLine; i++) line += "\n";
            Console.WriteLine($"{line}\u001b[0m");
        }  else Console.Write($"{line}\u001b[0m");
    }

}