///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Animal_Farm_3 - EE 205 - Spr 2022
///
/// @file singlyLinkedList.cpp
/// @version 1.0
///
/// @author Leo Liang <leoliang@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "singlyLinkedList.h"
#include "catDatabase.h"
#include "Animal.h"
#include "Cat.h"


void SinglyLinkedList::push_front(Node *newNode) {
    if (newNode != nullptr) {
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
//runs validate node to validate the singlylinkedlist
bool SinglyLinkedList::validate() const noexcept {
    Node::validate();
    return true;
}

//initializes a singlylinkedlist with a head pointer pointing to nullptr
SinglyLinkedList::SinglyLinkedList() {
    head = nullptr;
}


void SinglyLinkedList::insert_after(Node *currentNode, Node *newNode) {
    for(Node* iNode= head; iNode != nullptr; iNode = iNode->next)
        if(iNode == currentNode){
            Node *temp = currentNode->next;
            currentNode->next = newNode;
            newNode->next = temp;
        }
}
