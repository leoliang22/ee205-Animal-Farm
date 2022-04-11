///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file deleteCats.cpp
/// @version 1.0
///
/// @author Leo Liang <leoliang@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include "catDatabase.h"
#include "deleteCats.h"
#include "addCats.h"
#include <string.h>

/*
void deleteAllCats(void){
    numCats=0;
    memset(&cats, 0, sizeof(cats));
}
*/

bool deleteCat(Cat* removeableCat){
    if (removeableCat == nullptr)
    {
        catDatabaseHeadPointer = catDatabaseHeadPointer->next;
        delete removeableCat;
        numCats--;
        return true;
    }

    Cat* cats_iterated = catDatabaseHeadPointer;
    while(cats_iterated != nullptr){
        if(catDatabaseHeadPointer->next == removeableCat){
            cats_iterated-> next = removeableCat -> next;
            delete removeableCat;
            numCats--;
            return true;
        }
    }
    return false;
}

bool deleteAlLCats(){
    while(catDatabaseHeadPointer != nullptr){
        deleteCat(catDatabaseHeadPointer);
    }
    return true;
}