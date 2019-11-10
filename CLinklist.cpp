#include "CLinklist.h"
using namespace std;

Clinklist::Clinklist(){
    head = nullptr;
    tail = nullptr;
}

Clinklist::Clinklist(string data)
{

}

void Clinklist::insertNodeFront(string data)
{
    if(head == nullptr) 
    {
        head = new CNode(data);
        tail = head;
        return;
    }

    


}