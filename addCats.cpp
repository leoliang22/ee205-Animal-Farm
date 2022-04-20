///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCats.cpp
/// @version 1.0
///
/// @author Leo Liang <leoliang@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <string.h>
#include "catDatabase.h"
#include "config.h"
#include "addCats.h"
#include <stdbool.h>



//#define DEBUG

Cat* catDatabaseHeadPointer = nullptr;

bool addCat(Cat* newCat){
    if (newCat != nullptr ) {
        newCat->next = catDatabaseHeadPointer;
        catDatabaseHeadPointer = newCat;
        numCats++;
        return true;
    }
    return false;
}

