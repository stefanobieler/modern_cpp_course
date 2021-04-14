#include "StringLib.hpp"
#include <iostream>

struct LibraryInfo {
    std::string name{"StringLib"};
    std::string version{"1.0.0.0"};
};

const static LibraryInfo LIBRARY_INFO{};

static void print_greeting(){
    std::cout << "-----------------------------------------------------" << std::endl << std::endl;
    std::cout << LIBRARY_INFO.name << " " << LIBRARY_INFO.version << std::endl;
    std::cout << "Running internal example...." << std::endl;
    std::cout << "-----------------------------------------------------" << std::endl << std::endl;

}

StatusType run_example() {

    std::string input{};
    std::cout << "Enter in a string to be lower cased" << std::endl;
    std::getline(std::cin, input);

    input = to_lower(input);
    std::cout << "input = " << input << std::endl << std::endl;

    std::cout << "Enter in a string to be upper cased" << std::endl << std::endl;
    std::getline(std::cin, input);

    input = to_upper(input);
    std::cout << "input = " << input << std::endl << std::endl;

    return StatusType::SUCCESS;
}

std::string to_upper(const std::string &str) {

    std::string upper_case{};

    for(char c : str){
        upper_case += std::to_string(toupper(c));
    }
    return upper_case;
}

std::string to_lower(const std::string &str) {

    std::string lower_case{};

    for(char c : str) {
        lower_case += std::to_string(tolower(c));
    }

    return lower_case;

}
