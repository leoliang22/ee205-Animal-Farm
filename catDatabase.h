///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 1.0
///
/// @author Leo Liang <leoliang@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include <stdbool.h>
#include "config.h"
#define max_length 50

enum Genders {UNKNOWN_GENDER, MALE, FEMALE, OTHER};
enum Breeds {UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};
enum Color {BLACK, WHITE, RED, BLUE, GREEN, PINK};

extern int max_cats;
extern size_t numCats;

extern void initializeDatabase();
extern bool isCatInDatabase(const char* name);



struct Cat{
    char name[max_length];
    enum Genders gender;
    enum Breeds breed;
    bool is_fixed;
    float weight;
    enum Color collarColor1;
    enum Color collarColor2;
    unsigned long long license;
};

extern struct Cat cats[max_length];
