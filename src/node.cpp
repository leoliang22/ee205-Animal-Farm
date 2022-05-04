///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Animal_Farm_3 - EE 205 - Spr 2022
///
/// @file node.cpp
/// @version 1.0
///
/// @author Leo Liang <leoliang@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "node.h"
#include "config.h"
#include <iostream>


///function to validate node
bool Node::validate() const noexcept {
    if(next == nullptr){
        return true;
    }
    return true;
}
///runs compareByAddress (defined in node.h) on the two nodes
bool Node::operator>(const Node &rightSide) {
    return compareByAddress( this, &(Node&)rightSide );
    return false;
}

