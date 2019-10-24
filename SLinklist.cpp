#include <iostream>
#include <string>
#include "SLinklist.h"
using namespace std;


//constructor
Slinklist::Slinklist(){ //empty linklist
    head = nullptr;
    size_ = 0;
}

//constructor that creates a linklist with one node 
Slinklist::Slinklist(string data){ addNode(data);}

/*
* Slinklist::addNode(double value) will add a new node to the linklist
*
*/
void Slinklist::addNode(string data){
   //if the list is empty create one node and set it as head of list
    if(head == nullptr){ 
        head = new SNode; //head points to the only first node
        head->next = nullptr; //since there is only one node, next points to nothing 
        head->data_ = data; //set the value of the node
        size_ = 1;
    }
    else{
        SNode *nodePosition = head; //start the position at the head of the list
        //tranverse through the list until we reach to the end
        while(nodePosition->next != nullptr){ 
            nodePosition = nodePosition->next; 
        }
        nodePosition->next = new SNode; //add another node
        nodePosition->next->data_ = data; //new node is set with a parameter value
        nodePosition->next->next = nullptr; //new node next pointer points to nothing
        ++size_; //size of link list increased by 1
    }
}
/*
* bool isEmpty() test whether or not if the linklist
* is empty or not 
*/
bool Slinklist::isEmpty() const{
    if(size_ == 0){
        return true; //linklist is empty 
    }
    else
        return false; 
}

size_t Slinklist::getSize() const{
    return size_;
}

string Slinklist::getNodeValue(size_t inputted_index) const{
    size_t index = 0;
    string result;
    if(isEmpty())
    {
        cout << "Error: cannot get desired node with an empty link list\n";
        cout << "Returning NULL.....\n";
        return NULL;
    } //return NULL if list is empty
    if(index > getSize())
    {
        cout << "Error: desired linklist index goes past the current size of link list\n";
        cout << "Returning NULL......\n";
        return NULL;
    }
    SNode *nodePosition = head; //start at the head of the list

    while(nodePosition->next != nullptr){
        if(index == (inputted_index - 1))
        {
            result = nodePosition->data_; 
            break;
        }
        else
        {   
            nodePosition = nodePosition->next;
            ++index;            
        }
    }
    return result;
}


/*
* displayList() displays the entire list of data
* in the linklist
*
*/
void Slinklist::displayList() const{
    SNode *nodePosition = head;
    int index = 0;

    if(isEmpty()){
        cout << "Linklist size" << getSize() << endl;
        cout << "Linklist is empty\n";
    }
    else{
        cout << "Linklist size " << getSize() << endl;
        while(nodePosition->next != nullptr )
        {
            cout << nodePosition->data_ << " ";
            nodePosition = nodePosition->next;
        }
        cout << nodePosition->data_ << endl; //print the last node 
    }
}


/*
* deleteNode() will delete the last node of the
* linklist 
*/
void Slinklist::deleteNode(){

    //return if the link list is empty 
    if(isEmpty())
    {
        cout << "Unable to delete Node since link list is empty\n";
        return;
    } 
    else
    {
        SNode *nodePosition = head; //start at the beginning of the list
        SNode *previousNode;
        if(getSize() == 1)
        {
            delete nodePosition;
            --size_;
        }
        while(nodePosition->next != nullptr)
        {
            previousNode = nodePosition;
            nodePosition = nodePosition->next;
        }   
        previousNode->next = nodePosition->next;
        delete nodePosition;
        --size_;
    }
}