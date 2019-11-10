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
}

/*
* Program defined Constructor
*/
Dlinklist::Dlinklist(string data){addNodeBack(data);}

void Dlinklist::addNodeBack(string data) // insert a node at the end of the list
{
    DNode *temp;
    DNode *Position = tail; //quicker method by starting at the tail of the list

    if(head == nullptr && tail == nullptr)
    {
        temp = new DNode(); //create a temporary new node 
        temp->data_ = data; //set that temp node with a data value
        temp->next = nullptr; // the new node points to nothing
        temp->prev = nullptr;
        head = temp; // set the temp variable as the head of the node 
        tail = temp; // tail also the head since the list only have one node
        size_ = 1; // size is now 1;
    }
    else
    {
        temp = new DNode(); //create a new node
        temp->data_ = data; //initialize data into the new node
        temp->next = nullptr;// new node points to nothing
        Position->next = temp; //Position-> next points to new node
        temp->prev = Position;  //new node points to the prevNode
        Position = Position->next;
        tail = Position; 
        size_++; //increase size
    }
    
}

void Dlinklist::addNodeFront(string data)
{
    DNode *temp;
    DNode *Position = head;

    if(head == nullptr && tail == nullptr)
    {
        temp = new DNode; //create a temporary new node 
        temp->data_ = data; //set that temp node with a data value
        temp->next = nullptr; // the new node points to nothing
        temp->prev = nullptr;
        head = temp; // set the temp variable as the head of the node 
        tail = temp; // tail also the head since the list only have one node
        size_ = 1; // size is now 1;
    }
    else
    {
        temp = new DNode;   
        temp->data_= data;
        temp->prev = nullptr;
        Position->prev = temp;
        temp->next = Position;
        Position = Position->prev;
        head = Position;
        size_++;//increment size of list by 1
    }
}

void Dlinklist::addNode(string, int)
{
    
}


bool Dlinklist::isEmpty() {
    if(size_ == 0){
        return true; //linklist is empty 
    }
    else
        return false; 
}

/*
* size_t getSize() returns the size of the doubly link list
*/
size_t Dlinklist::getSize(){return size_;}

/*******************************************************
*void displayList() will print out the list of members *
********************************************************/
void Dlinklist::displayList(){

    if(isEmpty()){
        cout << "Error empty double linklist\n";
        return;
    }

   DNode *nodePosition = head;
    cout << "Double Linklist size " << getSize() << endl;
    while(nodePosition->next != nullptr)
    {
        cout << nodePosition->data_ << ", ";
        nodePosition = nodePosition->next;
    }   
    cout << nodePosition->data_ << endl;
}

void Dlinklist::RdisplayList()
{
     if(isEmpty()){
        cout << "Error empty double linklist\n";
        return;
    }

    DNode *nodePosition = tail;
    cout << "Double Linklist size " << getSize() << endl;
    while(nodePosition->prev != nullptr)
    {
        cout << nodePosition->data_ << ", ";
        nodePosition = nodePosition->prev;
    }
    cout << nodePosition->data_ << endl;

}

string Dlinklist::getNodeData(int pos)
{
    DNode *Position = head;
    string result = "";

    if(isEmpty()){
        cout << "Error: Empty double Linklist\n";
        return result;
    }
    else if(pos > getSize())
    {
        cout << "Error: cannot retrieve position that is above size of list\n";
        cout << "Returning the last member of the list";
        return tail->data_;
    }
    else if(pos >= getSize()/2)
    {
        Position = tail;       
    }

    if(Position == tail)
    {
        pos = getSize() - pos;
        while(pos--)
        {
            if(pos == 0){result = Position->data_;}
            else
                Position = Position->prev;
        }
    }
    else
    {
        while(pos--)
        {
            if(pos == 0){result = Position->data_;}
            else
                Position = Position->next;
        }
        
    }
    return result;
}

/*
*size_t findNodeBack() find first occurence of the node 
* from the tail of list
*/
int Dlinklist::findNodeBack(string input)
{
    if(isEmpty())
    {
        cout << "Error: Doubly linklist is empty\n";
        return -1;
    }


    DNode *nodePos = tail;
    size_t position = getSize() - 1;
    while(nodePos != nullptr)
    {
        if(nodePos->data_ == input)
        {
            return position;
        }
        position--;
        nodePos = nodePos->prev;
    }

    cout << "Desired input does not exist in this double link list\n";
    return -1; //return -1 if desire result does not exist

}

/*
* int findNodeFront(string input) will return the first occurence
* of the user inpit
*/
int Dlinklist::findNodeFront(string input)
{ 
    if(isEmpty())
    {
        cout << "Error: Doubly linklist is empty\n";
        return -1;
    }

    DNode *nodePos = head;
    size_t position = 0;
    while(nodePos != nullptr)
    {
        if(nodePos->data_ == input)
        {
            return position;
        }
        position++;
        nodePos = nodePos->next;
    }

    cout << "Desired input does not exist in this double linklist\n";
    return -1;

}

void Dlinklist::removeNodeBack()
{
    DNode *nodePos = tail;
    DNode *prevNode = tail->prev;

    if(isEmpty())
    {
        cout << "Error, this list is empty\n";
        return;
    }
    prevNode->next = nullptr;
    tail = prevNode;
    delete nodePos;
    size_--;
    return;
    
}

void Dlinklist::removeNodeFront()
{
    DNode *nodePos = head;
    DNode *nextNode = head->next;

 if(isEmpty())
    {
        cout << "Error, this list is empty\n";
        return;
    }
    nextNode->prev = nullptr;
    head = nextNode;
    delete nodePos;
    size_--;
    return;

}

void Dlinklist::removeNode(int pos)
{
    DNode *nodePosition;
    if(pos < 0){ 
        nodePosition = tail;
    }
    else
    {
         
    }
    

}