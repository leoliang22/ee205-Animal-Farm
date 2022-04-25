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
#include "Weight.h"

#define MAX_LENGTH 50


//typedef float Weight;

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

enum class Color {
    UNKNOWN_COLOR =0 , BLACK , BROWN , WHITE ,
    RED , BLUE , GREEN , GINGER ,
    CREAM , CINNAMON , CALICO
};


inline std::ostream& operator<<( std::ostream& lhs_stream, const Color& rhs_Color ) {
        switch( rhs_Color ) {
                case Color::UNKNOWN_COLOR:
                        lhs_stream << "Unknown color";
                break;
                case Color::BLACK:
                        lhs_stream << "Black";
                break;
                case Color::BROWN:
                        lhs_stream << "Brown";
                break;
                case Color::WHITE:
                        lhs_stream << "White";
                break;
                case Color::RED:
                        lhs_stream << "Red";
                break;
                case Color::BLUE:
                        lhs_stream << "Blue";
                break;
                case Color::GREEN:
                        lhs_stream << "Green";
                break;
                case Color::GINGER:
                        lhs_stream << "Ginger";
                break;
                case Color::CREAM:
                        lhs_stream << "Cream";
                break;
                case Color::CINNAMON:
                        lhs_stream << "Cinnamon";
                break;
                case Color::CALICO:
                        lhs_stream << "Calico";
                break;
                default:
                        /// @throw out_of_range If the enum is not mapped to a string.
                        throw std::out_of_range( PROGRAM_NAME ": Color not mapped to a string" );
        }

        return lhs_stream;
}

/// Output Gender as a formatted string
///
/// @param lhs_stream The output stream to write to (usually `cout`). `
/// `lhs` stands for Left Hand Side and means the left side
/// of the `<<` operator.
/// @param rhs_Gender The Gender to output.
/// `rhs` stands for Right Hand Side and means the right
/// side of the `<<` operator.
/// @return `Unknown gender`, `Female` or `Male`.
inline std::ostream& operator<<( std::ostream& lhs_stream, const Genders& rhs_Gender ){
        switch( rhs_Gender ) {
                case Genders::UNKNOWN_GENDER:
                        lhs_stream << "Unknown gender";
                break;
                case Genders::MALE:
                        lhs_stream << "Male";
                break;
                case Genders::FEMALE:
                        lhs_stream << "Female";
                break;
                default:
/// @throw out_of_range If the enum is not mapped to a string.
                        throw std::out_of_range( PROGRAM_NAME ": Gender not mapped to a string" );
        }
        return lhs_stream;
}

