///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Animal_Farm_3 - EE 205 - Spr 2022
///
/// @file config.h
/// @version 1.0
///
/// @author Leo Liang <leoliang@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include <iostream>
#include <iomanip>
#define PROGRAM_NAME "Animal Farm 3"

/// Format the heading for dumping members of a class to the console
///
/// Print =====================
#define PRINT_HEADING_FOR_DUMP \
/* Print =========================================================== */ \
std::cout << std::setw(80) << std::setfill( '=' ) << "" << std::endl
/// Format a line for dumping the members of a class to the console.
/// Setup the fields for printing (space pad, left justify, etc.)
#define FORMAT_LINE_FOR_DUMP( className, member ) \
std::cout << std::setfill( ' ' ) /* Space pad */ \
<< std::left /* Left justify */ \
<< std::boolalpha /* Print `true` or `false` for `bool`s */ \
<< std::setw(8) << (className) \
<< std::setw(20) << (member) \
<< std::setw(52) /* (data) */
