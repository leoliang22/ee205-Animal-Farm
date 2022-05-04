///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Animal_Farm_3 - EE 205 - Spr 2022
///
/// @file Animal.h
/// @version 1.0
///
/// @author Leo Liang <leoliang@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include <string>
#include "Weight.h"
#include "node.h"
#include "catDatabase.h"

#ifndef _EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_ANIMAL_H
#define _EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_ANIMAL_H

#endif //_EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_ANIMAL_H





class Animal: public Node{
public:
    //constructors
    Animal (const Weight::t_weight newMaxWeight, const std::string &newClassification, const std::string &newSpecies);
    Animal (const Genders newGender, const Weight::t_weight newWeight, const Weight::t_weight newMaxWeight, const std::string &newClassification, const std::string &newSpecies);

    //getters
    std::string     getKingdom() const noexcept;
    std::string 	getClassification () const noexcept;
    std::string 	getSpecies () const noexcept;
    Genders 	getGender () const noexcept;
    Weight::t_weight 	getWeight () const noexcept;

    //setters
    void 	setWeight (const Weight::t_weight newWeight);

    //methods
    virtual std::string 	speak () const noexcept=0;
    void 	dump () const noexcept override;
    bool 	validate () const noexcept override;

    //validation
    static bool 	validateClassification (const std::string &checkClassification) noexcept;
    static bool 	validateSpecies (const std::string &checkSpecies) noexcept;

    //features
    static const std::string KINGDOM_NAME;

private:
    std::string 	species;
    std::string 	classification;
    Genders	gender = Genders::UNKNOWN_GENDER;
    Weight weight;
};





