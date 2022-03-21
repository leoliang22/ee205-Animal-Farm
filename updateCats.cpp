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

int updateCatName(int index, const char* newName){
    if(strlen(newName) == 0){
        fprintf(stderr, "Cat name cannot be empty. \n");
        return 0;
    }
    if(isCatInDatabase(newName) == true){
        fprintf(stderr, "Update Cats: Cat name [%s] is already in the database.\n", newName);
        return 0;
    }
    else{
        memset(cats[index].name, 0, max_length);
        strcpy(cats[index].name, newName);
        return 0;
    }
}

int fixCat(int index){
    cats[index].is_fixed=1;
    return 0;
}

int updateCatWeight(int index, float newWeight){
    if (newWeight < 0){
        return 1;
    }
    else{
        cats[index].weight= newWeight;
        return 0;
    }
}

int updateCatCollar1(int index, const enum Color collar1){
    cats[index].collarColor1 = collar1;
    return 1;
}

int updateCatCollar2(int index, const enum Color collar2){
    cats[index].collarColor2 = collar2;
    return 1;
}

int updateLicense(int index, int licen_num){
    cats[index].license = licen_num;
    return 1;
}
