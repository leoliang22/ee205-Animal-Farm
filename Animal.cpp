///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Animal_Farm_3 - EE 205 - Spr 2022
///
/// @file Animal.cpp
/// @version 1.0
///
/// @author Leo Liang <leoliang@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "Animal.h"
#include "Weight.h"

const std::string Animal::KINGDOM_NAME = "Animalia";

//getters and setters
std::string Animal::getKingdom() const noexcept {
    return KINGDOM_NAME;
}

std::string Animal::getClassification() const noexcept {
    return classification;
}

std::string Animal::getSpecies() const noexcept {
    return species;
}

Genders Animal::getGender() const noexcept {
    return gender;
}

Weight::t_weight Animal::getWeight() const noexcept {
    return weight.getWeight();
}
//calls from Weight.cpp to setweight
void Animal::setWeight(const Weight::t_weight newWeight) {
    weight.setWeight(newWeight);
}
//prints out info for dumping
void Animal::dump() const noexcept {
    Node::dump();
    FORMAT_LINE_FOR_DUMP("Animal", "this") << this << std::endl;
    FORMAT_LINE_FOR_DUMP("Animal", "kingdom") << getKingdom() << std::endl;
    FORMAT_LINE_FOR_DUMP("Animal", "classification" ) << getClassification() << std::endl ;
    FORMAT_LINE_FOR_DUMP("Animal", "species" ) << getSpecies() << std::endl ;
    FORMAT_LINE_FOR_DUMP("Animal", "gender" ) << getGender() << std::endl ;
    std::cout <<"Animal  weight              " << getWeight() << " out of " << weight.getMaxWeight() << " " << weight.getUnitOfWeight() <<std::endl;
}
//validation checks
bool Animal::validate() const noexcept {
    validateClassification((getClassification()));
    validateSpecies(getSpecies());
    return true;
}

bool Animal::validateClassification(const std::string &checkClassification) noexcept {
    if (checkClassification == "Mammilian"){
        return true;
    }
    return false;
}

bool Animal::validateSpecies(const std::string &checkSpecies) noexcept {
    if (checkSpecies == "Felis Catus"){
        return true;
    }
    return false;
}
//constructors
Animal::Animal(const Weight::t_weight newMaxWeight, const std::string &newClassification,
               const std::string &newSpecies) {
    weight.setMaxWeight(newMaxWeight);
    classification = newClassification;
    species = newSpecies;
}

Animal::Animal(const Genders newGender, const Weight::t_weight newWeight, const Weight::t_weight newMaxWeight,
               const std::string &newClassification, const std::string &newSpecies) {
    gender = newGender;
    weight.setWeight( newWeight );
    weight.setMaxWeight( newMaxWeight );
    classification = newClassification;
    species = newSpecies;
}
