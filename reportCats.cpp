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

/*

int printCat(int index){
    if(index<0){
        fprintf(stderr, "reportCats.c: animalFarm0: Bad cat [%d]" ,index);
    }
    else if(index> numCats){
        fprintf(stderr, "reportCats.c: animalFarm0: Bad cat [%d]" ,index);
    }
    else{
        std::cout << "cat index = [" << index << "] ";
        std::cout <<"name =[" << cats[index].name << "] ";
        std::cout << "gender = [" << genderName(cats[index].gender) << "] ";
        std::cout << "breed =[" << breedName(cats[index].breed) << "] ";
        std::cout << "isFixed = [" << cats[index].is_fixed << "] ";
        std::cout << "weight = [" << cats[index].weight << "] ";
        std::cout <<"color1 = [" << collarColorName(cats[index].collarColor1) << "] ";
        std::cout <<"color2 = [" << collarColorName(cats[index].collarColor2) << "] ";
        std::cout << "License Number = [" << cats[index].license << "] " << std::endl;


    }
    return 0;
}

void printAllCats_old(){
    for (int i=0; i < numCats; i++){
        std::cout << "cat index = [" << i << "] ";
        std::cout <<"name =[" << cats[i].name << "] ";
        std::cout << "gender = [" << genderName(cats[i].gender) << "] ";
        std::cout << "breed =[" << breedName(cats[i].breed) << "] ";
        std::cout << "isFixed = [" << cats[i].is_fixed << "] ";
        std::cout << "weight = [" << cats[i].weight << "] ";
        std::cout <<"color1 = [" << collarColorName(cats[i].collarColor1) << "] ";
        std::cout <<"color2 = [" << collarColorName(cats[i].collarColor2) << "] ";
        std::cout << "License Number = [" << cats[i].license << "] " << std::endl;

    }
}
int findCat(const char* name){
    for( size_t i = 0; i < numCats; i++) {
        if(strncmp(name, cats[i].name, MAX_LENGTH) == 0){
            return i;
        }
    }
    return 0;
}
*/

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
        case UNKNOWN_BREED: return "Unkown";
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