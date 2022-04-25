///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Mammal.cpp
/// @version 1.0
///
/// @author Leo Liang <leoliang@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "Mammal.h"
#include "catDatabase.h"

const std::string Mammal::MAMMAL_NAME = "Mammilian";

Color Mammal::getColor() const noexcept {
    return color;
}

void Mammal::setColor(const Color newColor) noexcept {
    color = newColor;
}

void Mammal::dump() const noexcept {
    FORMAT_LINE_FOR_DUMP( "Mammal", "color" ) << getColor() << std::endl ;
}


