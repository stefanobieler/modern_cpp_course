//
// Created by kunikos on 4/12/21.
//

#ifndef MODERN_CPP_COURSE_FUNCPTRPARAM_HPP
#define MODERN_CPP_COURSE_FUNCPTRPARAM_HPP


#include<string>

enum StatusType {
    SUCCESS,
    FAILED
};

/// Runs an example built in the library
/// \return a status result of the operation
StatusType run_example();

/// Adds the value of a and b together
///
/// A and B will be dereference and their values will be added together
/// to produce a sum that will be returned.
///
/// \param a pointer to a int reference
/// \param b pointer to an int reference
/// \return sum of the values stored in a and b together.
int add(const int* a, const int* b);


/// Add the value of a and b together and store the sum in the result
///
/// \param a pointer to a int reference
/// \param b pointer to an int reference
/// \param result stores the sum of what a and b points to
void addVal(const int* a, const  int* b, int* result);

/// Swap the values of the two pointers
///
/// \param a pointer to an int reference
/// \param b pointer to an int reference
void swap(int* a, int* b);

/// Generate the factorial
///
/// Generate the factorial of a number and return that through the second pointer argument
/// \param a pointer to an int reference
/// \param result pointer to the factorial result
void factorial(int* a, unsigned int* result);

/// Get library version
///
/// Returns a reference to the version of this library
/// \return a reference to a string containing the version of this library.
const std::string& get_version();


#endif //MODERN_CPP_COURSE_FUNCPTRPARAM_HPP
