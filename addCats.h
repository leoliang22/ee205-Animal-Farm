///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCats.h
/// @version 1.0
///
/// @author Leo Liang <leoliang@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include <stdbool.h>
#include <stdio.h>

#include "catDatabase.h"
#include "config.h"

extern NumCats numCats;



int addCat(const char* name, const enum Genders gender, const enum Breeds breed, const bool isFixed , const Weight weight, const enum Color color1, const enum Color color2, const unsigned long long licen_num);
