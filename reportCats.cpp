///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file reportCats.cpp
/// @version 1.0
///
/// @author Leo Liang <leoliang@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<string.h>
#include "catDatabase.h"
#include "reportCats.h"
#include "addCats.h"
#include<stdbool.h>
#include <iostream>

const char* genderName(const enum Genders gender){
    switch( gender ) {
        case Genders::UNKNOWN_GENDER: return "Unknown";
        case Genders::MALE:           return "Male";
        case Genders::FEMALE:         return "Female" ;
        //case Genders::OTHER:          return "Other" ;
    }
    return 0;
}
const char *breedName(const enum Breeds breed){
    switch (breed){
        case UNKNOWN_BREED: return "Unknown";
        case MAINE_COON:    return "Maine Coon";
        case MANX:          return "Manx";
        case SHORTHAIR:     return "Shorthair";
        case PERSIAN:       return "Persian";
        case SPHYNX:        return "Sphynx";
    }
    return 0;
}

const char *collarColorName(const enum Color color){
    switch (color){
        case Color::BLACK:       return "Black";
        case Color::WHITE:       return "White";
        case Color::RED:         return "Red";
        case Color::BLUE:        return "Blue";
        case Color::GREEN:       return "Green";
        case Color::PINK:        return "Pink";
    }
    return 0;
}


bool printAllCats(){
    if(catDatabaseHeadPointer == nullptr) {
        return false;
    }
    for(Cat* cats_iterated= catDatabaseHeadPointer; cats_iterated != nullptr; cats_iterated = cats_iterated->next)
    {
        cats_iterated->print();
    }
    return true;
}