#ifndef DYNAMICLIST_H
#define DYNAMICLIST_H
#include <iostream>

// node struct
struct DynamicNode {
	int info;
	DynamicNode* next;	// a pointer to the address of a Dynamic Node
};


class DynamicList {
public:
	// constructors
	DynamicList() { head = nullptr; } // default constructor


	// methods (inserts, deletes, print, search)
	void insertFirst(int x);
	void insertAfter(DynamicNode *p, int x); 
	DynamicNode* search(int x); 
	//int deleteFirst();
	int deleteAfter(DynamicNode *p);
	void remove(int x);
	bool isEmpty();
	void print();
private:
	DynamicNode* head;
};	// end class

#endif