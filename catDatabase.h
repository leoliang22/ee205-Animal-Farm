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
#define MAX_LENGTH 50


typedef float Weight;
typedef size_t NumCats;

enum Genders {UNKNOWN_GENDER, MALE, FEMALE, OTHER};
enum Breeds {UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};
enum Color {BLACK, WHITE, RED, BLUE, GREEN, PINK};

extern int max_cats;
extern NumCats numCats;

extern void initializeDatabase();
extern bool isCatInDatabase(const char* name);



/*struct Cat{
    char name[MAX_LENGTH];
    enum Genders gender;
    enum Breeds breed;
    bool is_fixed;
    Weight weight;
    enum Color collarColor1;
    enum Color collarColor2;
    unsigned long long license;
};*/

class Cat{
        //the traits of the cat we are recording
        protected:
        char name[MAX_LENGTH];
        enum Genders gender;
        enum Breeds breed;
        bool is_fixed;
        Weight weight;

        //the pointer of the next cat
        public:
        Cat* next;

        public:
        //name
        const char *getName() const;
        void setName(const char* newName);
        //gender
        Genders getGender() const;
        void setGender(Genders gender);
        //breed
        Breeds getBreed() const;
        void setBreed(Breeds breed);
        //isCatFixed
        bool isFixed() const;
        void setIsFixed();
        //Weight
        Weight getWeight() const;
        void setWeight(Weight weight);

        public:
        //validate functions
        bool validateName(const char* newName);
        bool validateGender(const Genders newGender);
        bool validateBreed(const Breeds newBreed);
        bool validateWeight(const Weight newWeight);

        //constructors and destructors
        public:
        Cat();
        Cat(const char* newName ,const Genders newGender ,const Breeds newBreed ,const Weight newWeight);
        virtual ~Cat();

        //print and validate
        bool print();

        bool validate();
};


extern struct Cat cats[MAX_LENGTH];
