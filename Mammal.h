///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Animal_Farm_3 - EE 205 - Spr 2022
///
/// @file Mammal.h
/// @version 1.0
///
/// @author Leo Liang <leoliang@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "Animal.h"

#ifndef _EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_MAMMAL_H
#define _EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_MAMMAL_H

#endif //_EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_MAMMAL_H

class Mammal : public Animal{
public:
    static const std::string MAMMAL_NAME;

protected:
    Color color = Color::UNKNOWN_COLOR;

public:
    Mammal (const Weight::t_weight newMaxWeight, const std::string &newSpecies):Animal( newMaxWeight, MAMMAL_NAME, newSpecies ){};
    Mammal( const Color            newColor
            ,const Genders           newGender
            ,const Weight::t_weight newWeight
            ,const Weight::t_weight newMaxWeight
            ,const std::string&     newSpecies
    ) : Animal( newGender, newWeight, newMaxWeight, MAMMAL_NAME, newSpecies ) {
        setColor( newColor );
    };

    Color 	getColor () const noexcept;
    void 	setColor (const Color newColor) noexcept;
    void 	dump () const noexcept override;
};

