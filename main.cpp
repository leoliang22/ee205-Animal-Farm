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
#include "singlyLinkedList.h"
#include "Cat.h"


int main(){
    std::cout <<"Starting Animal Farm 3" << std::endl;
        SinglyLinkedList catDB ;
        catDB.push_front( new Cat( "Loki", Color::CREAM, true, Genders::MALE, 1.0 ) ) ;
        catDB.push_front( new Cat( "Milo", Color::BLACK, true, Genders::MALE, 1.1 ) ) ;
        catDB.push_front( new Cat( "Bella", Color::BROWN, true, Genders::FEMALE, 1.2 ) ) ;
        catDB.push_front( new Cat( "Kali", Color::CALICO, true, Genders::FEMALE, 1.3 ) ) ;
        catDB.push_front( new Cat( "Trin", Color::WHITE, true, Genders::FEMALE, 1.4 ) ) ;
        catDB.insert_after(catDB.get_first(), new Cat( "Chili", Color::GINGER, true,
                                                   Genders::MALE, 1.5 ) );
        catDB.dump();
        for( Animal* pAnimal = (Animal*)catDB.get_first() ; pAnimal != nullptr ; pAnimal =
                                                                                     (Animal*)List::get_next( (Node*)pAnimal ) ) {
        std::cout << pAnimal->speak() << std::endl;
    }
        catDB.deleteAllNodes();
        catDB.dump();


    //Cat Chili = Cat("Chili", MALE, SHORTHAIR, 1.5);
    //Chili.print();
    //Chili.setIsFixed();
    //Chili.print();
    //Cat Trin = Cat("Trin", FEMALE, MANX, 1.4);
    //Trin.print();
    //Cat Kali = Cat("Kali", FEMALE, SHORTHAIR, 1.3);
    //Kali.print();
    //Cat Bella = Cat("Bella", FEMALE, MAINE_COON, 1.2);
    //Bella.print();
    //Cat Milo = Cat("Milo", MALE, MANX, 1.1);
    //Milo.print();
    //Cat Loki = Cat("Loki", MALE, PERSIAN, 1);
    //Loki.print();
/*
    bool result ;
    result = addCat( new Cat( "Loki", MALE, PERSIAN, 1.0 )) ;
    result = addCat( new Cat( "Milo", MALE, MANX , 1.1 )) ;
    result = addCat( new Cat( "Bella", FEMALE, MAINE_COON, 1.2 )) ;
    result = addCat( new Cat( "Kali", FEMALE, SHORTHAIR, 1.3 )) ;
    result = addCat( new Cat( "Trin", FEMALE, MANX, 1.4 )) ;
    result = addCat( new Cat( "Chili", MALE, SHORTHAIR, 1.5 )) ;
    printAllCats();
    deleteAllCats();
    printAllCats();
*/

#ifdef TEST
    Cat test = Cat();
    test.print();
    test.validate();
    test.setName(nullptr);
    test.setName("");
    test.setName("1");
    test.setGender(MALE);
    test.print();
    test.setGender(FEMALE);
    test.print();
    test.setWeight(0);
    test.setWeight(1/1024);
    Cat *pBella = findCatByName("Bella");
    Cat *pBelinda = findCatByName("Belinda");
    deleteCat(pBella);
    deleteCat(pBella);
#endif

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
    std::cout <<"Done with Animal Farm 3" << std::endl;
}

