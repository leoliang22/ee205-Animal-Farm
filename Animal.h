///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Animal.h
/// @version 1.0
///
/// @author Leo Liang <leoliang@hawaii.edu>
/// @date   19_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <string>
#include "Weight.h"
#include "node.h"
#include "catDatabase.h"

#ifndef _EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_ANIMAL_H
#define _EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_ANIMAL_H

#endif //_EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_ANIMAL_H

//const std::string Animal::KINGDOM_NAME = "Animalia";
//const std::string Mammal::MAMMAL_NAME = "Mammilian";
//const std::string Cat::SPECIES_NAME = "Felis Catus";
//const Weight::t_weight Cat::MAX_WEIGHT = 40;


class Animal: public Node {
public:
    Animal (const Weight::t_weight newMaxWeight, const std::string &newClassification, const std::string &newSpecies);
    Animal (const Genders newGender, const Weight::t_weight newWeight, const Weight::t_weight newMaxWeight, const std::string &newClassification, const std::string &newSpecies);

    std::string 	getKingdom () const noexcept;
    std::string 	getClassification () const noexcept;
    std::string 	getSpecies () const noexcept;

    Genders 	getGender () const noexcept;
    Weight::t_weight 	getWeight () const noexcept;

    void 	setWeight (const Weight::t_weight newWeight);

    virtual std::string 	speak () const noexcept=0;
    void 	dump () const noexcept override;
    bool 	validate () const noexcept override;

    static bool 	validateClassification (const std::string &checkClassification) noexcept;
    static bool 	validateSpecies (const std::string &checkSpecies) noexcept;

    static const std::string 	KINGDOM_NAME = "Animalia";

private:
    std::string 	species;
    std::string 	classification;
    Genders	gender = Genders::UNKNOWN_GENDER;
    Weight 	weight;
};