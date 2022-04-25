///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file node.cpp
/// @version 1.0
///
/// @author Leo Liang <leoliang@hawaii.edu>
/// @date   19_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "node.h"
#include "config.h"
#include <iostream>



bool Node::validate() const noexcept {
    if(next == nullptr){
        return true;
    }
    return true;
}

bool Node::operator>(const Node &rightSide) {
    return compareByAddress( this, &(Node&)rightSide );
    return false;
}

