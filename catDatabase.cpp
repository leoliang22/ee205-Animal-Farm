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
#include "addCats.h"
#include <string.h>
#include <iostream>
#include <iomanip>


using namespace std;

NumCats numCats  = 0;


//getters and setters
const std::string *Cat::getName() const {
    return name;
}

void Cat::setName(std::string *newName) {
    validateName( newName );
    memset(name, 0 , MAX_LENGTH);
    Cat::name = newName;
}

Genders Cat::getGender() const {
    return gender;
}

void Cat::setGender(Genders gender) {
    if(Cat::gender== Genders::UNKNOWN_GENDER) {
        Cat::gender = gender;
    }
    else {
        std::cout << "Cat cannot change gender" << std::endl;
    }
}

Breeds Cat::getBreed() const {
    return breed;
}

void Cat::setBreed(Breeds breed) {
    if(Cat::breed== UNKNOWN_BREED) {
        Cat::breed = breed;
    }
    else {
        std::cout << "Cat cannot change breed" << std::endl;
    }
}

bool Cat::isFixed() const {
    return is_fixed;
}

void Cat::setIsFixed() {
    is_fixed = true;
}

Weight Cat::getWeight() const {
    return weight;
}

void Cat::setWeight(Weight::t_weight weight) {
    Cat::weight = weight;
}

//validation
bool Cat::validateName(std::string * newName) {
    if( newName == nullptr ){
        fprintf(stderr, "Cat Name cannot be empty \n");
        return false;
    }
    if((newName->size()) > MAX_LENGTH){
        fprintf(stderr, "Cat name cannot be greater than [%d] \n", MAX_LENGTH);
        return false;
    }
    if( (newName)->size() <= 0){
        fprintf(stderr, "Cat name length cannot be <0 \n");
        return false;
    }
    return true;
}

bool Cat::validateGender(const Genders newGender) {
    if (newGender == Genders::UNKNOWN_GENDER){
        fprintf(stderr,"Gender of cat must be known \n");
        return false;
    }
    return true;
}

bool Cat::validateBreed(const Breeds newBreed) {
    if (newBreed == UNKNOWN_BREED)
    {
        fprintf(stderr, "Breed of cat must be known \n");
        return false;
    }
    return true;
}

bool Cat::validateWeight(const Weight::t_weight newWeight) {
    if ( newWeight < 0){
        fprintf(stderr, "Weight of cat must be >0 \n");
        return false;
    }
    return true;
}
//constructors and destructors
Cat::Cat() {
    memset(name, 0, MAX_LENGTH );
    gender = Genders::UNKNOWN_GENDER ;
    breed = UNKNOWN_BREED ;
    is_fixed = false ;
    weight = -1 ;
    next = nullptr ;
}

Cat::Cat(std::string* newName, const Genders newGender ,const Breeds newBreed ,const Weight::t_weight newWeight){
    setName(newName);
    setGender(newGender);
    setBreed(newBreed);
    setWeight(newWeight);
}

Cat::~Cat() {
    memset(name, 0, MAX_LENGTH );
    gender = Genders::UNKNOWN_GENDER ;
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
    //FORMAT_LINE( "Cat", "weight" ) << getWeight() << endl ;
    return true ;
}

bool Cat::validate() {
    {
        validateName(name);
        validateWeight(weight);
        validateBreed(breed);
        validateGender(gender);
    }
    return true;
}


bool validateDatabase(){
    for(Cat* cats_iterated= catDatabaseHeadPointer; cats_iterated != nullptr; cats_iterated = cats_iterated->next){
        if (!cats_iterated->validate())
        {
            return false;
        }
    }
    return true;
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