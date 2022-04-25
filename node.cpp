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
    return false;
}

bool Node::operator>(const Node &rightSide) {
    //@todo add the override for comparison
    return false;
}

bool Node::compareByAddress(const Node *node1, const Node *node2) {
    return false;
}
