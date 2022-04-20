///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_13a_animal_farm_3 - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 1.0
///
/// @author Leo Liang <leoliang@hawaii.edu>
/// @date   19_April_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include <stdbool.h>
#include <stdexcept>
#include "config.h"
#define MAX_LENGTH 50



typedef float Weight;
typedef size_t NumCats;

//enum Genders {UNKNOWN_GENDER, MALE, FEMALE, OTHER};
enum Breeds {UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};
//enum Color {BLACK, WHITE, RED, BLUE, GREEN, PINK};


extern NumCats numCats;


extern bool validateDatabase();


/// A gender... for educational use only. This is not intended to be
/// inclusive of all possible genders
enum class Genders {
    UNKNOWN_GENDER=0
    ,MALE
    ,FEMALE
};

enum class Color{
    BLACK=0,
    WHITE,
    RED,
    BLUE,
    GREEN,
    PINK
};


class Cat{
        //the traits of the cat we are recording
        protected:
        std::string *name;
        enum Genders gender;
        enum Breeds breed;
        bool is_fixed;
        Weight weight;

        //the pointer of the next cat
        public:
        Cat* next;

        public:
        //name
        const std::string *getName() const;
        void setName(std::string* newName);
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
        bool validateName(std::string * newName);
        bool validateGender(const Genders newGender);
        bool validateBreed(const Breeds newBreed);
        bool validateWeight(const Weight newWeight);

        //constructors and destructors
        public:
        Cat();
        Cat(std::string* newName ,const Genders newGender ,const Breeds newBreed ,const Weight newWeight);
        virtual ~Cat();

        //print and validate
        bool print();

        bool validate();
};


