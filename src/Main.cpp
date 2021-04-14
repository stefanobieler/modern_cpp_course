#include "Main.hpp"
#include "StringLib.hpp"

int main() {

    print_greeting();
    StatusType result = run_example();

    if (result == StatusType::FAILED) {
        std::cout << "The example failed..." << std::endl;
        exit(1);
    }

    if (result == StatusType::SUCCESS) {
        std::cout << "Test ran successful" << std::endl;
    }

    return 0;
}


void print_greeting(){
    std::cout << PROJECT_NAME << " " << PROJECT_VERSION << std::endl << std::endl;
}