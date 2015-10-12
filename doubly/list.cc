#include <iostream>
#include "list.h"
using namespace std;

//YOU: Write these four functions
//Make sure you handle empty Lists cleanly!

//Deletes the oldest Node inserted, and returns its data value
//The oldest Node inserted should be tail_ptr
int List::pop() {
    if (tail_ptr == NULL){ return -999; }

    //Data
    int temp = tail_ptr->get_data();

    //set current to tail
    Node *tempNode = tail_ptr;

    //set tail to tail prev
    tail_ptr = tail_ptr->get_prev();

    delete tempNode;

    list_size--;

    return temp;
}
//Adds a new Node to the end of the list
//The newest Node will be held in head_ptr
void List::push(int new_data) {
    if (list_size  == 0) {
        tail_ptr = head_ptr = new Node(new_data, NULL, NULL);
    }
    else if (list_size == 1){
        Node *temp = new Node(new_data, NULL, head_ptr);
        head_ptr->set_prev(temp);
        head_ptr = temp;
        tail_ptr->set_prev(temp);
    }
    else
    {
        Node *temp = new Node(new_data, NULL, head_ptr);
        head_ptr->set_prev(temp);
        head_ptr = temp;
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
    Node *curr;

    if (list_size == 0) {
        //Empty list, can't remove anything
        return false;
    }
    if (list_size == 1) {
        if (head_ptr->get_data() == old_data) {
            curr = head_ptr;
            head_ptr = tail_ptr = NULL;
            delete curr;
            list_size--;
            return true;
        }
        return false;
    }

    else {
        for (curr = head_ptr; curr != NULL; curr = curr->get_next()) {
            if (curr->get_data() == old_data) {

                if (curr->get_prev() == NULL) {
                    head_ptr = curr->get_next();
                }

                else {
                    curr->get_prev()->set_next(curr->get_next());
                    curr->get_next()->set_prev(curr->get_prev());
                }

                delete curr;
                list_size--;
                return true;
            }
        }
        return false;
    }
}
/*	if (!search(old_data)) {
    return false;
    }
    if (head_ptr -> get_data() == old_data) {
    head_ptr = head_ptr -> get_next();
    delete curr;
    list_size--;
    return true;
    }
    else if (tail_ptr -> get_data() == old_data) {
    pop ();
    return true;
    }
    else {
    curr = curr -> get_next();
    Node *tmp = head_ptr;
    for (curr = curr -> get_next()) {
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

*/
