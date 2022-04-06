///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.cpp
/// @version 1.0
///
/// @author Leo Liang <leoliang@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include "catDatabase.h"
#include <stdbool.h>
#include "config.h"
#include <string.h>

//char catNames[max_cats][max_length];
//enum Genders catGender[max_cats];
//enum Breeds catBreed[max_cats];
//bool is_fixed[max_cats];
//float catWeight[max_cats];

/*
NumCats numCats  = 0;


void initializeDatabase(){
    numCats = 0;
    memset(&cats, 0, sizeof(cats));
}

bool isCatInDatabase( const char* name){
    for (size_t i =0; i < numCats ; i++) {
        if (strncmp(cats[i].name, name, max_length) == 0) {
            return true;
        }
    }
    return false;
}
*/
const char *Cat::getName() const {
    return name;
}

Genders Cat::getGender() const {
    return gender;
}

void Cat::setGender(Genders gender) {
    Cat::gender = gender;
}

Breeds Cat::getBreed() const {
    return breed;
}

void Cat::setBreed(Breeds breed) {
    Cat::breed = breed;
}

bool Cat::isFixed() const {
    return is_fixed;
}

void Cat::setIsFixed(bool isFixed) {
    is_fixed = isFixed;
}

Weight Cat::getWeight() const {
    return weight;
}

void Cat::setWeight(Weight weight) {
    Cat::weight = weight;
}
