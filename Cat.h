///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Animal_Farm_3 - EE 205 - Spr 2022
///
/// @file Cat.h
/// @version 1.0
///
/// @author Leo Liang <leoliang@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include "Mammal.h"


#ifndef _EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_CAT_H
#define _EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_CAT_H

#endif //_EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_CAT_H

//cat class inheriting from mammal class
class Cat : public Mammal{
public:
    std::string 	getName () const noexcept;
    void 	setName (const std::string &newName);
    bool 	isFixed () const noexcept;
    void 	fixCat () noexcept;
    std::string 	speak () const noexcept override;
    void 	dump () const noexcept override;
    bool 	validate () const noexcept override;

    static bool 	validateName (const std::string &newName);
    static const std::string      SPECIES_NAME;
    static const Weight::t_weight MAX_WEIGHT;

protected:
    std::string 	name;
    bool 	isCatFixed;

public:
    explicit Cat( const std::string& newName ) : Mammal( MAX_WEIGHT, SPECIES_NAME ) {
        if( !validateName( newName) ) {
            /// @throws out_of_range If the Cat doesn't have a name
            throw std::out_of_range( "Cats must have a name" );
        }
        name = newName;
        isCatFixed = false;

        Cat::validate();
    }

    /// Create a Cat, populating *all* of the member variables
    Cat( const std::string&     newName
            ,const Color            newColor
            ,const bool             newIsFixed
            ,const Genders           newGender
            ,const Weight::t_weight newWeight
    ) : Mammal( newColor, newGender, newWeight, MAX_WEIGHT, SPECIES_NAME ) {
        if( !validateName( newName) ) {
            /// @throws out_of_range If the Cat doesn't have a name
            throw std::out_of_range( "Cats must have a name" );
        }
        name = newName;
        isCatFixed = newIsFixed;

        Cat::validate();
    }
};
