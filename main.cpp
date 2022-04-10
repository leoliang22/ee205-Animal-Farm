///////////////////////////////////////////////////////////////////////////////
/// University of Hawaii, College of Engineering
/// @brief Lab 07d - AnimalFarm 1 - EE 205 - Spr 2022
///
/// @file main.cpp
/// @version 1.0
///
/// @author Leo Liang <leoliang@hawaii.edu>
/// @date 20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <stdio.h>
#include <stdbool.h>
#include "catDatabase.h"
#include "addCats.h"
#include "deleteCats.h"
#include "reportCats.h"
#include "updateCats.h"



int main(){
    std::cout <<"Starting Animal Farm 2" << std::endl;
    Cat Chili = Cat("Chili", MALE, SHORTHAIR, 1.5);
    Chili.print();
    //Chili.setIsFixed();
    //Chili.print();
    Cat Trin = Cat("Trin", FEMALE, MANX, 1.4);
    Trin.print();
    Cat Kali = Cat("Kali", FEMALE, SHORTHAIR, 1.3);
    Kali.print();
    Cat Bella = Cat("Bella", FEMALE, MAINE_COON, 1.2);
    Bella.print();
    Cat Milo = Cat("Milo", MALE, MANX, 1.1);
    Milo.print();
    Cat Loki = Cat("Loki", MALE, PERSIAN, 1);
    Loki.print();

  /*  addCat( "Loki", MALE, PERSIAN, true, 8.5, BLACK, WHITE, 101 ) ;
    addCat( "Milo", MALE, MANX, true, 7.0, BLACK, RED, 102 ) ;
    addCat( "Bella", FEMALE, MAINE_COON, true, 18.2, BLACK, BLUE, 103 ) ;
    addCat( "Kali", FEMALE, SHORTHAIR, false, 9.2, BLACK, GREEN, 104 ) ;
    addCat( "Trin", FEMALE, MANX, true, 12.2, BLACK, PINK, 105 ) ;
    addCat( "Chili", UNKNOWN_GENDER, SHORTHAIR, false, 19.0, WHITE, BLACK, 106 ) ;
    printAllCats();
    int kali = findCat( "Kali" ) ;
    updateCatName( kali, "Chili" ) ; // this should fail
    printAllCats();
    printCat( kali );
    updateCatName( kali, "Capulet" ) ;
    updateCatWeight( kali, 9.9 ) ;
    fixCat( kali ) ;
    printCat( kali );
    updateCatCollar1(kali, BLUE);
    updateCatCollar2(kali, PINK);
    updateLicense(kali, 103);
    printAllCats();
    deleteAllCats();
    printAllCats();
*/
    std::cout <<"Done with Animal Farm 2" << std::endl;
}

