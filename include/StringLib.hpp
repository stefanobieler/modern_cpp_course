//!
//!The std::string function does not provide any function to convert the underlying string to upper case or lower case.
//!Write two functions that provide this behavior. Both functions return a copy of the converted string. In case of error,
//!return an empty string.
//!
//! Created by Stefano Bieler



#ifndef MODERN_CPP_COURSE_STRING_LIB_HPP
#define MODERN_CPP_COURSE_STRING_LIB_HPP



#include <string>

enum class StatusType {
    SUCCESS,
    FAILED
};
/// Runs the internal example
/// \return return a StatusType indicating operation status
StatusType run_example();

/// Convert string to upper case
///
/// Converts a lower cased string to be upper cased.
///
/// \param str value to be converted to upper case.
/// \return the upper case version of the param.
std::string to_upper(const std::string &str);

/// Convert string to lower case
///
/// Converts a upper cased string to be lower cased.
///
/// \param str value to be converted to lower case.
/// \return the lower case version of the param.
std::string to_lower(const std::string &str);



#endif