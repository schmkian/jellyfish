#include <iostream>
using std::cout; using std::string; using std::endl;
#include "getarch.h"

#define DEBUG false
#define DEV_STAGE "prealpha"
#define VERSION "0.1"
#define REVISION "rev0"


int main(int argc, char* argv[]) {
    int recalc_argc = argc-1;
    if(DEBUG == true) {
        std::cout << "DEBUG BUILD" << std::endl;
        std::cout << "argc: " << recalc_argc << std::endl;
        std::cout << "argv[]: ";
        for(int i = 1; i < argc; i++) {
            std::cout << argv[i] << ',';
        }
        std::cout << " " << endl;
    }

    if(recalc_argc == 1) {
             std::string arg = argv[1];
            if(arg == "-v" || arg == "-V" || arg == "-version") {
                std::cout << "jellyfish ";
                std::cout << VERSION << "." << DEV_STAGE << " (";
                std::cout << getTargetTriple() << ", " << REVISION << ")" << std::endl;
            }
            else if(arg == "-h" || arg == "-H" || arg == "-help") {

            }
        }
        else {
        }

    for(int i = 1; i < argc; i++) {
    }
    return 0;
}