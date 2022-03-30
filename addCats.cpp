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
#define PROGRAM_NAME "addCats.c"
#define max_cats 1024

//#define DEBUG

struct Cat cats[max_length];


int addCat(const char* name, const enum Genders gender, const enum Breeds breed, const bool isFixed , const Weight weight, const enum Color color1, const enum Color color2, const unsigned long long licen_num){

    if (numCats >= max_cats){
        fprintf(stderr, "[%s]: Cat Database is full\n", PROGRAM_NAME);
        return 0;
    }
    //Add name
    if(strlen(name)==0){
        fprintf(stderr, "[%s]: Cat Name cannot be empty\n", PROGRAM_NAME);
        return 0;
    }
    if (strlen(name) > max_length){
        fprintf(stderr, "[%s]: Cat Name cannot be longer than [%d]\n", PROGRAM_NAME, max_length);
        return 0;
    }
    if(isCatInDatabase(name) == false){
        //fprintf(stdr, "[%s]: Cat name [%s] is already in the database.\n", PROGRAM_NAME, name);
        //return 0;
        strncpy(cats[numCats].name, name, max_length);
#ifdef DEBUG
        printf("added name \n");
#endif
    }
    else {
        fprintf(stderr, "[%s]: Cat name [%s] is already in the database.\n", PROGRAM_NAME, name);
        return 0;
    }
    //add gender
    cats[numCats].gender = gender;
#ifdef DEBUG
    printf("added gender \n");
#endif
    //add breed
    cats[numCats].breed =  breed;
#ifdef DEBUG
    printf("added breed \n");
#endif
    //add isFixed
    cats[numCats].is_fixed = isFixed;
#ifdef DEBUG
    printf("added is fixed \n");
#endif
    //add weight
    if (weight < 0){
        fprintf(stderr, "[%s]: Cat weight cannot be less than 0\n", PROGRAM_NAME);
        return 0;
    }
    else{
        cats[numCats].weight = weight;
    }
    //add collar color 1
    cats[numCats].collarColor1 = color1;
    //add collar color 2
    cats[numCats].collarColor2 = color2;
    //add cat license number
    cats[numCats].license = licen_num;

    return numCats++;
}
