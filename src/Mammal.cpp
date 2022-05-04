///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Animal_Farm_3 - EE 205 - Spr 2022
///
/// @file Mammal.cpp
/// @version 1.0
///
/// @author Leo Liang <leoliang@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "Mammal.h"
#include "catDatabase.h"

const std::string Mammal::MAMMAL_NAME = "Mammilian";

///getter
Color Mammal::getColor() const noexcept {
    return color;
}
///setter
void Mammal::setColor(const Color newColor) noexcept {
    color = newColor;
}

///this is the information that mammal is printing out
void Mammal::dump() const noexcept {
    Animal::dump();
    FORMAT_LINE_FOR_DUMP( "Mammal", "color" ) << getColor() << std::endl ;
}


