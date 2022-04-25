///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file singlyLinkedList.cpp
/// @version 1.0
///
/// @author Leo Liang <leoliang@hawaii.edu>
/// @date   19_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "singlyLinkedList.h"
#include "catDatabase.h"

void SinglyLinkedList::push_front(Node *newNode) {
    if (newNode != nullptr) {
        //@TODO maybe learn to throw exceptions
        newNode->next = head;
        head = newNode;
        numCats++;
    }
}

Node *SinglyLinkedList::pop_front() noexcept {
    if(head != nullptr) {
        head = head->next;
        count--;
    }
}

void SinglyLinkedList::dump() const noexcept {

}

bool SinglyLinkedList::validate() const noexcept {
    return false;
}
