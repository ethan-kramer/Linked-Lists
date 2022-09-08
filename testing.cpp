// Class 2-7-22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "DynamicList.h"


int main()
{
    DynamicList list;
    
    list.insertFirst(4);
    list.insertFirst(1);
    list.insertFirst(5);
    list.print();
    list.search(4);
    DynamicNode* node = list.search(4);
    if (node != nullptr) {
        std::cout << "Found value: " << node->info << std::endl;
    }
    else {
        std::cout << "Value not found" << std::endl;
    }

    std::cout << "Inserting 7 after found node..." << std::endl;
    list.insertAfter(node, 7);  //inserts 7 after 4 in list
    list.print();
    //list.deleteAfter(node);
    std::cout << "Deleting " << list.deleteAfter(node) << " from list..." << std::endl;
    list.print();
    list.remove(5);
    std::cout << "Removing 1" << std::endl;
    list.print();

}

