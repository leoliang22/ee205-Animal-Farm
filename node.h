///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file node.h
/// @version 1.0
///
/// @author Leo Liang <leoliang@hawaii.edu>
/// @date   19_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#ifndef _EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_NODE_H
#define _EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_NODE_H

#endif //_EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_NODE_H


class Node{
public:
    virtual void 	dump () const;
    virtual bool 	validate () const noexcept;
    virtual bool 	operator> (const Node &rightSide);

protected:
    static bool 	compareByAddress (const Node *node1, const Node *node2);
    Node * 	next = nullptr;

    //@TODO CREATE LIST AND SINGLY LINKED LIST CLASS//friend:
    friend
    class List;
    //SinglyLinkedList;
};