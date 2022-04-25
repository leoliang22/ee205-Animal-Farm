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
#include "Animal.h"
#include "Cat.h"


void SinglyLinkedList::push_front(Node *newNode) {
    if (newNode != nullptr) {
        //@TODO maybe learn to throw exceptions
        newNode->next = head;
        head = newNode;
        next= head->next;
        numCats++;
    }
}

Node *SinglyLinkedList::pop_front() noexcept {
    if(head != nullptr) {
        head = head->next;
        count--;
    }
    return head;
}

void SinglyLinkedList::dump() const noexcept {
    std::cout << "SinglyLinkedList: head=[" << head <<"]" <<std::endl;
    for( Animal* pAnimal = (Animal*)get_first() ; pAnimal != nullptr ; pAnimal =
                                                                                     (Animal*)List::get_next( (Node*)pAnimal ) ) {
        pAnimal->dump();
    }
}

bool SinglyLinkedList::validate() const noexcept {
    Node::validate();
}

SinglyLinkedList::SinglyLinkedList() {
    head = nullptr;
}

void SinglyLinkedList::insert_after(Node *currentNode, Node *newNode) {
    Node *temp;
    temp = currentNode->next;
    currentNode->next = newNode;
    newNode->next = temp;
    head = newNode;
    numCats++;
}
