#include <iostream>
using namespace std;

struct CNode
{
    string data_;
    CNode *next;

    CNode(string d, CNode *next1 = nullptr)
    {
        data_ = d;
        next = next1;
    }
};

class Clinklist
{
private:
    CNode *head;
    CNode *tail;
    size_t size_;
public:
    Clinklist();
    Clinklist(string);
    ~Clinklist();
    void insertNodeEnd(string);
    void insertNode(int);
    void insertNodeFront(string);
    void deleteNodeEnd();
    void deleteNodeFront();
    void deleteNode(int);
    void displayList();
    void swapHead();
    string getNode(size_t);
    bool searchNode(string); 
};
