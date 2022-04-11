///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file updateCats.cpp
/// @version 1.0
///
/// @author Leo Liang <leoliang@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include "catDatabase.h"
#include "updateCats.h"
#include "config.h"
#include "addCats.h"



Cat* findCatByName(const char* name){
    for(Cat* cats_iterated= catDatabaseHeadPointer; cats_iterated != nullptr; cats_iterated = cats_iterated->next){
        if(strcmp(name, cats_iterated-> getName())==0){
            return cats_iterated;
        }
    }
    return nullptr;
}