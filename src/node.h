///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Animal_Farm_3 - EE 205 - Spr 2022
///
/// @file node.h
/// @version 1.0
///
/// @author Leo Liang <leoliang@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "config.h"



#pragma once
#ifndef _EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_NODE_H
#define _EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_NODE_H

#endif //_EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_NODE_H


class Node{
public:
    virtual void    dump () const{
        PRINT_HEADING_FOR_DUMP;
        FORMAT_LINE_FOR_DUMP( "Node", "this" ) << this << std::endl ;
        FORMAT_LINE_FOR_DUMP( "Node", "next" ) << next << std::endl ;
    }
    virtual bool 	validate () const noexcept;
    virtual bool 	operator> (const Node &rightSide);

protected:
    //takes the addresses of the nodes and compares those
    static bool 	compareByAddress (const Node *node1, const Node *node2){
        if( node1 > node2 )
            return true;
        return false;
    }
    Node * 	next = nullptr;


    friend class List;
    friend class SinglyLinkedList;
};