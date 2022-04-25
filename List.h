///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  _ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file List.h
/// @version 1.0
///
/// @author Leo Liang <leoliang@hawaii.edu>
/// @date   19_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "node.h"

#ifndef _EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_LIST_H
#define _EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_LIST_H

#endif //_EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_LIST_H


class List :public Node {
public:
    bool 	empty () const noexcept;
    unsigned int 	size () noexcept;
    bool 	isIn (Node *aNode) const;
    bool 	isSorted () const noexcept;
    Node * 	get_first () const noexcept;
    void 	deleteAllNodes () noexcept;
    virtual Node * 	pop_front () noexcept=0;
    virtual void 	dump () const noexcept=0;
    virtual bool 	validate () const noexcept=0;

    static Node * 	get_next (const Node *currentNode);

protected:
    Node * 	head = nullptr;
    unsigned int 	count = 0;
};