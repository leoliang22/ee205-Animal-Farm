///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file updateCats.h
/// @version 1.0
///
/// @author Leo Liang <leoliang@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include <stdbool.h>

extern char catNames[];
extern float catWeight[];
extern bool is_fixed[];


extern int updateCatName(int index, const char* newName);
extern int fixCat(int index);
extern int updateCatWeight(int index, const float newWeight);
extern int updateCatCollar1(int index, const enum Color collar1);
extern int updateCatCollar2(int index, const enum Color collar2);
extern int updateLicense(int index, int licen_num);
