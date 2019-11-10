#include <iostream>
#include <string>
using namespace std;

/*
* SNode is a struct designed as a node for singly 
* linklist 
*/
struct SNode{
        string data_;
        SNode *next; 
};
class Slinklist{
private:
    
    SNode *head;
    size_t size_;
public:
    Slinklist();
    Slinklist(string);
    ~Slinklist();
    void addNode(string);
    void deleteNode();
    size_t getSize() const;
    bool isEmpty() const;
    void displayList() const;
    string getNodeValue(size_t) const;
    int search(string) const;
    void remove(int pos);
    bool isMember(string);
    void insert(string, int);
};


