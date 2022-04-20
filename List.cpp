///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file List.cpp
/// @version 1.0
///
/// @author Leo Liang <leoliang@hawaii.edu>
/// @date   19_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <cassert>
#include "List.h"


bool List::empty() const noexcept {
    if (get_first() == nullptr){
        return true;
    }
    return false;
}

unsigned int List::size() noexcept {
    for(Node* iNode= head; iNode != nullptr; iNode = iNode->next){
        count += 1;
    }
    return count;
}

Node *List::get_first() const noexcept {
    //@TODO add get first
    return nullptr;
}

bool List::isIn(Node *aNode) const {
    for(Node* iNode= head; iNode != nullptr; iNode = iNode->next)
        if( iNode == aNode) {
            return true;
        }
    return false;
}

bool List::isSorted() const noexcept {
    //@TODO add isSorted
    return false;
}

void List::deleteAllNodes() noexcept {
    assert( validate() );
    while( head != nullptr ) {
        pop_front();
    }
#ifdef DEBUG
    cout << PROGRAM_NAME << ": All Nodes have been deleted" << endl ;
#endif
    assert( validate() );
}
