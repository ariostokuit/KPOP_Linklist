#include <iostream>
#include <string>
#include "DLinklist.h"

/*
* Default Constructor 
*
*
*/
Dlinklist::Dlinklist()
{
    head = nullptr;
    tail = nullptr;
    head->data_ = "";
}

Dlinklist::Dlinklist(string data)
{
    addNodeBack(data);
}

void Dlinklist::addNodeBack(string data) // insert a node at the end of the list
{
    DNode *temp;
    DNode *Position = head;
    if(head == nullptr && tail == nullptr)
    {
        temp = new DNode(); //create a temporary new node 
        temp->data_ = data; //set that temp node with a data value
        temp->next_ = nullptr; // the new node points to nothing
        temp->prev_ = nullptr;
        head = temp; // set the temp variable as the head of the node 
        tail = temp; // tail also the head since the list only have one node
        size_ = 1; // size is now 1;
    }
    else
    {
        while(Position->next_ != nullptr){
            Position = Position->next_;     
        }
        Position->next_ = new DNode();
        Position = Position->next_;
        Position->data_ = data;
        Position->next_ = nullptr;
    }
    
}

bool Dlinklist::isEmpty() {
    if(size_ == 0){
        return true; //linklist is empty 
    }
    else
        return false; 
}

size_t Dlinklist::getSize(){
    return size_;
}

void Dlinklist::displayList(){
   DNode *nodePosition = head;
    cout << "Linklist size " << getSize() << endl;
    while(nodePosition->next_ != nullptr){
         cout << nodePosition->data_ << " ";
            nodePosition = nodePosition->next_;
    }
    cout << nodePosition->data_ << endl;
    
}
