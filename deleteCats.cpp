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
#include <iostream>

/*
void deleteAllCatsOld(void){
    numCats=0;
    memset(&cats, 0, sizeof(cats));
}
*/

bool deleteCat(Cat* removableCat){
    if(removableCat == nullptr){
        return false;
    }
    if (removableCat == catDatabaseHeadPointer)
    {
        catDatabaseHeadPointer = catDatabaseHeadPointer->next;
        delete removableCat;
        numCats--;
        return true;
    }

    Cat* cats_iterated = catDatabaseHeadPointer;
    std::cout << "typing cats_iterated";
    while(cats_iterated != nullptr){
        if(cats_iterated->next == removableCat){
            cats_iterated ->next = removableCat->next;
            delete removableCat;
            numCats--;
            return true;
        }
    }
    return false;
}



bool deleteAllCats(){
    while(catDatabaseHeadPointer != nullptr){
        deleteCat(catDatabaseHeadPointer);
    }
    return true;
}