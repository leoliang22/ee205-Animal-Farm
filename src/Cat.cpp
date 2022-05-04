///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Animal_Farm_3 - EE 205 - Spr 2022
///
/// @file Cat.cpp
/// @version 1.0
///
/// @author Leo Liang <leoliang@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "Cat.h"

const std::string Cat::SPECIES_NAME = "Felis Catus";
const Weight::t_weight Cat::MAX_WEIGHT = 40;

//getters and setters
std::string Cat::getName() const noexcept {
    return name;
}

void Cat::setName(const std::string &newName) {
    name = newName;
}

bool Cat::isFixed() const noexcept {
    return isCatFixed;
}

void Cat::fixCat() noexcept {
    isCatFixed = true;
}

std::string Cat::speak() const noexcept {
    return std::string("Meow");
}

//validates the name by making sure it is not empty
bool Cat::validateName(const std::string &newName) {
    if(newName.size() <= 0){
        return false;
    }
    return true;
}
//this is the information that the Cat class prints out
void Cat::dump() const noexcept {
    Mammal::dump();
    FORMAT_LINE_FOR_DUMP( "Cat", "name" ) << getName() << std::endl ;
    FORMAT_LINE_FOR_DUMP( "Cat", "isFixed" ) << isFixed() << std::endl ;
}

//runs validateName and animal's validate to validate the Cat
bool Cat::validate() const noexcept {
    validateName(getName());
    return Animal::validate();
}
