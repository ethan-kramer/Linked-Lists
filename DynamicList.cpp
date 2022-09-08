#include "DynamicList.h"

void DynamicList::insertFirst(int num) {	//must reference class name to be able to access private fields (head)
	DynamicNode* q = new DynamicNode();	//reference to a memory address
	q->info = num;	// temp assigned value
	q->next = head;	// temp assigned link

	head = q;
}

void DynamicList::print() {	
	DynamicNode* p;
	if (head == nullptr) {
		std::cout << "empty list";
	}
	std::cout << "Current List: ";
	for (p=head; p!=nullptr; p=p->next) {
		std::cout << p->info << " ";
	}
	std::cout << std::endl;
}

//search for node whose info is x and returns it
DynamicNode* DynamicList::search(int x) {
	DynamicNode* p;		// only traversing so don't need to create a whole new node
	for (p = head; p != nullptr; p = p->next) {
		if (p->info == x) {
			return p;
		}
	}
	return nullptr;	//value not found
}
void DynamicList::insertAfter(DynamicNode* p, int x) {
	DynamicNode* q = new DynamicNode();
	if (p == nullptr) { return; }
	q->info = x;	//inserts 7
	q->next = p->next;
	p->next = q;
}

int  DynamicList::deleteAfter(DynamicNode* p) {
	if (p == nullptr || p->next == nullptr) { return -1; }
	DynamicNode* q = p->next;	//q is to be deleted
	int temp = q->info;
	p->next = p->next->next;
	delete q;
	return temp;
}

void DynamicList::remove(int x) {
	DynamicNode* temp = new DynamicNode();
	temp = head;
	while (temp->next->info != x) {
		temp = temp->next;
	}	// at end of loop, temp will POINT to the element BEFORE node to be deleted
	DynamicNode* toDelete = new DynamicNode();
	toDelete = temp->next;
	temp->next = temp->next->next;
	delete toDelete;
}