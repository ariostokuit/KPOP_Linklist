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
    addNode(data);
}

void Dlinklist::addNode(string data)
{
    DNode *temp;
    if(head == nullptr && tail == nullptr)
    {
        temp = new DNode();
        temp->data_ = data;
        temp->next_ = nullptr;
        head = temp;
        tail = temp;
        size_++;
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
