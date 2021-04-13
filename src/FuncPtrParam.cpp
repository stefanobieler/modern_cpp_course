//
// Created by kunikos on 4/12/21.
//

#include "FuncPtrParam.hpp"
#include <iostream>

const static std::string LIBRARY_NAME {"FuncPtrParam"};
const static std::string LIBRARY_VERSION {"0.1.0"};

StatusType run_example(){
    std::cout << LIBRARY_NAME << " " << LIBRARY_VERSION << std::endl;
    std::cout << "Running internal example...." << std::endl;

    // add two values and return aa sum
    {
        int a = 50;
        int b = 20;
        std::cout << "adding these two numbers " << a << " and " << b << std::endl;
        int result = add(&a, &a);
        std::cout << a << " + " << b << " = " << result << std::endl << std::endl;
    }

    // add the values and store into aa point result
    {
        int a = 35;
        int b = 15;
        int result = 0;
        std::cout << "adding these two numbers " << a << " and " << b << std::endl;
        addVal(&a, &b, &result);
        std::cout << a << " + " << b << " = " << result << std::endl << std::endl;
    }

    // swaps the values stored in these references.
    {
        int a = 80;
        int b = 12;
        std::cout << "swapping the values in these addresses: " << std::endl;
        std::cout << &a << " = " << a << std::endl;
        std::cout << &b << " = " << b << std::endl << std::endl;
        swap(&a, &b);
        std::cout << "After swapping the values:" << std::endl;
        std::cout << &a << " = " << a << std::endl;
        std::cout << &b << " = " << b << std::endl << std::endl;
    }

    // Factorial example.
    {
        int a = 5;
        unsigned int result = 1;
        std::cout << "Factorial Operation" << std::endl;
        factorial(&a, &result);
        std::cout << "Factorial: " << result << std::endl;
    }

    return StatusType::SUCCESS;
}

int add(const int* a, const int* b) {
    if(a == nullptr || b == nullptr)
        return 0;
    return *a + *b;
}

void addVal(const int* a, const int* b, int* result){
    if(a == nullptr || b == nullptr)
        return;
    *result = *a + *b;
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void factorial(int* a, unsigned int* result) {
    *result = 1;
    if (*a < 0){
        std::cout << "Error! Factorial of a negative number doesn't exist.";
        return;
    }

    for (int i = 1; i <= *a; i++) {
        *result *= i;
    }
}

const std::string& get_version(){
    return LIBRARY_VERSION;
}
