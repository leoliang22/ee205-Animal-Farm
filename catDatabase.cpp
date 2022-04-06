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
#include "reportCats.h"
#include <string.h>
#include <iostream>
#include <iomanip>
//char catNames[max_cats][MAX_LENGTH];
//enum Genders catGender[max_cats];
//enum Breeds catBreed[max_cats];
//bool is_fixed[max_cats];
//float catWeight[max_cats];
using namespace std;
/*
NumCats numCats  = 0;


void initializeDatabase(){
    numCats = 0;
    memset(&cats, 0, sizeof(cats));
}

bool isCatInDatabase( const char* name){
    for (size_t i =0; i < numCats ; i++) {
        if (strncmp(cats[i].name, name, MAX_LENGTH) == 0) {
            return true;
        }
    }
    return false;
}
*/
const char *Cat::getName() const {
    return name;
}

void Cat::setName(const char *newName) {
    validateName( newName );
    memset(name, 0 , MAX_LENGTH);
    strcpy( name, newName);
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

bool Cat::validateName(const char* newName) {
    if( newName == nullptr ){
        fprintf(stderr, "Cat Name cannot be empty");
        return false;
    }
    if(strlen(newName) > MAX_LENGTH){
        fprintf(stderr, "Cat name cannot be greater than [%d]", MAX_LENGTH);
        return false;
    }
    if( strlen(newName) < 0){
        fprintf(stderr, "Cat name length cannot be <0");
        return false;
    }
}

bool Cat::validateGender(const Genders newGender) {
    if (newGender == UNKNOWN_GENDER){
        fprintf(stderr,"Gender of cat must be known");
        return false;
    }
    return true;
}

bool Cat::validateBreed(const Breeds newBreed) {
    if (newBreed == UNKNOWN_BREED)
    {
        fprintf(stderr, "Breed of cat must be known");
        return false;
    }
    return true;
}

bool Cat::validateWeight(const Weight newWeight) {
    if ( newWeight < 0){
        fprintf(stderr, "Weight of cat must be >0");
        return false;
    }
    return true;
}

Cat::Cat() {
    memset(name, 0, MAX_LENGTH );
    gender = UNKNOWN_GENDER ;
    breed = UNKNOWN_BREED ;
    is_fixed = false ;
    weight = -1 ;
    next = nullptr ;
}

Cat::Cat(const char* newName, const Genders newGender ,const Breeds newBreed ,const Weight newWeight){
    setName(newName);
    setGender(newGender);
    setBreed(newBreed);
    setWeight(newWeight);
}

Cat::~Cat() {
    memset(name, 0, MAX_LENGTH );
    gender = UNKNOWN_GENDER ;
    breed = UNKNOWN_BREED ;
    is_fixed = false ;
    weight = -1 ;
    next = nullptr ;
}

#define FORMAT_LINE( className, member ) cout << setw(8) << (className) << setw(20) << (member) << setw(52)
bool Cat::print(){
    cout << setw(80) << setfill( '=' ) << "" << endl ;
    cout << setfill( ' ' ) ;
    cout << left ;
    cout << boolalpha ;
    FORMAT_LINE( "Cat", "name" ) << getName() << endl ;
    FORMAT_LINE( "Cat", "gender" ) << genderName( getGender() ) << endl ;
    FORMAT_LINE( "Cat", "breed" ) << breedName( getBreed() ) << endl ;
    FORMAT_LINE( "Cat", "isFixed" ) << isFixed() << endl ;
    FORMAT_LINE( "Cat", "weight" ) << getWeight() << endl ;
    return true ;
}
