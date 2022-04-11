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
        case UNKNOWN_GENDER: return "Unknown";
        case MALE:           return "Male";
        case FEMALE:         return "Female" ;
        case OTHER:          return "Other" ;
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
        case BLACK:       return "Black";
        case WHITE:       return "White";
        case RED:         return "Red";
        case BLUE:        return "Blue";
        case GREEN:       return "Green";
        case PINK:        return "Pink";
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