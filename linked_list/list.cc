#include <iostream>
#include "list.h"
using namespace std;

//YOU: Write these four functions
//Make sure you handle empty Lists cleanly!

//Deletes the oldest Node inserted, and returns its data value
//The oldest Node inserted should be tail_ptr
int List::pop() {
	if (head_ptr -> get_data() == 0)
		return 0;
	while (head_ptr != NULL) {
		int temp = tail_ptr -> get_data();
		Node *curr = tail_ptr;
		Node *tmp = head_ptr;
		for (int i = list_size; i > 2; i--) {
			tmp = tmp -> get_next();
		}
		tail_ptr -> set_next(NULL);
		tail_ptr = tmp;
		delete curr;
		list_size--;
		return temp;
	}
}

//Adds a new Node to the end of the list
//The newest Node will be held in head_ptr
void List::push(int new_data) {
	if (tail_ptr == NULL) {
		Node *cur = new Node (new_data, NULL);
	}
	if (head_ptr == NULL) {
		tail_ptr = head_ptr = new Node(new_data, head_ptr);
	}
	else
	{
		Node *curr2 = new Node(new_data, head_ptr);
		head_ptr = curr2;
	}
	list_size++;

}


//Returns if a Node containing the passed-in integer is in the list
//True if such a Node exists, false otherwise
bool List::search(int test_data) {
	Node *search = head_ptr;
	while (search != NULL)	
	{
		if (test_data == search -> get_data())
		{
			return true;
		}
		search = search -> get_next();
	}
	return false;
}

//Removes the newest node containing the passed in integer
//Only remove one Node. Not all of them.
//Return true if any elements removed, false otherwise
bool List::remove (int old_data) {
	Node *curr = head_ptr;
	if (curr == NULL) {
		return true;
	}
	if (!search(old_data)) {
		return false;
	}
	if (head_ptr -> get_data() == old_data) {
		head_ptr = head_ptr -> get_next();
		delete curr;
		list_size--;
        if (list_size == 1)
            tail_ptr = NULL;
		return true;
	}
	else if (tail_ptr -> get_data() == old_data) {
		pop ();
		return true;
	}
	else {
		curr = curr -> get_next();
		Node *tmp = head_ptr;
		for (curr; curr; curr = curr -> get_next()) {
			if (curr -> get_data() == old_data) {
				tmp -> set_next(curr -> get_next());
				delete curr;
				list_size--;
				return true;
			}
			tmp = curr;
		}
	}
	return false;
}


