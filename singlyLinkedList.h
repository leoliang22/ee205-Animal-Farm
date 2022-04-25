///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file singlyLinkedList.h
/// @version 1.0
///
/// @author Leo Liang <leoliang@hawaii.edu>
/// @date   19_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "List.h"
#include "Cat.h"

#ifndef _EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_SINGLYLINKEDLIST_H
#define _EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_SINGLYLINKEDLIST_H

#endif //_EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_SINGLYLINKEDLIST_H

class SinglyLinkedList: public List{
public:
    SinglyLinkedList ();
    void 	push_front (Node *newNode);
    Node * 	pop_front () noexcept override;
    void 	insert_after (Node *currentNode, Node *newNode);
    void 	dump () const noexcept override;
    bool 	validate () const noexcept override;

};