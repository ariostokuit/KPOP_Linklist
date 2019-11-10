/*
*
*  This header file include DLinklist.cpp contains
*  a  class and struct to implement the double link lists
*
*/

#include <iostream>
using namespace std;
/*
* SNode is a struct designed as a node for singly 
* linklist 
*/
struct DNode{
    string data_;
    DNode *next, *prev; 
};

class Dlinklist{
private:
    DNode *head;
    DNode *tail;
    size_t size_;
public:
    Dlinklist();
    Dlinklist(string);
    void addNodeBack(string);
    void addNodeFront(string); 
    void addNode(string, int);
    void removeNodeBack();
    void removeNodeFront();
    void removeNode(int);
    string getNodeData(int);
    int findNodeFront(string);
    int findNodeBack(string);
    void displayList();
    void RdisplayList();
    bool isEmpty();
    size_t getSize();


    
};


