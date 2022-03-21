///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file reportCats.h
/// @version 1.0
///
/// @author Leo Liang <leoliang@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include <stdbool.h>
#include <stdio.h>
#include "catDatabase.h"

extern size_t numCats;
extern float catWeight[];
extern bool is_fixed[];



extern int printCat(int index);
extern void printAllCats();
extern int findCat(const char* name);
extern const char* genderName(const enum Genders gender);
extern const char* breedName(const enum Breeds breed);
extern const char* collarColorName(const enum Color color);
