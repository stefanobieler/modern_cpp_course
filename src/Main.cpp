#include "Main.hpp"
#include "FuncPtrParam.hpp"

int main() {

    print_greeting();
    run_example();

    return 0;
}


void print_greeting(){
    std::cout << PROJECT_NAME << " " << PROJECT_VERSION << std::endl << std::endl;
}