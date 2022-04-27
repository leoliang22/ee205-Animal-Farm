///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Animal_Farm_3 - EE 205 - Spr 2022
///
/// @file List.cpp
/// @version 1.0
///
/// @author Leo Liang <leoliang@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <cassert>
#include "List.h"
#include "Cat.h"

//is empty, returns true if empty, and false if not empty
bool List::empty() const noexcept {
    if (get_first() == nullptr){
        return true;
    }
    return false;
}

//returns the size of the list as an unsinged int
unsigned int List::size() noexcept {
    for(Node* iNode= head; iNode != nullptr; iNode = iNode->next){
        count += 1;
    }
    return count;
}

//returns the first node
Node *List::get_first() const noexcept {
    return head;
}

//returns true if the node is already in the list, and returns false if it is not
bool List::isIn(Node *aNode) const {
    for(Node* iNode= head; iNode != nullptr; iNode = iNode->next)
        if( iNode == aNode) {
            return true;
        }
    return false;
}

//returns the node after the node
Node *List::get_next(const Node *currentNode) {
    Node * lhs = currentNode -> next;
    return lhs;
}

//checks if the list is sorted by seeing if the nodes are less than the next node
bool List::isSorted() const noexcept {
    for(Node* iNode= head; iNode != nullptr; iNode = iNode->next)
        if( iNode < iNode->next){
            return true;
        }
    return false;
}


//deletes all nodes
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

//runs the node validate method
bool List::validate() const noexcept {
    Node::validate();
    return false;
}

