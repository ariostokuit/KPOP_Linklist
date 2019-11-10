/*
* Ariosto KUit
* 10/28/2019
* This program demonstrates my understanding of a link list.
* This program will use my own version of link list both single and double
*/

#include <iostream>
#include <string>
#include "SLinklist.cpp"
#include "DLinklist.cpp"
using namespace std;

int main(){

    Slinklist Twice; //start with empty list of KPOP group Twice
  
    //Testing Single Linklist by adding all the members of Twice
    Twice.addNode("Momo");
    Twice.addNode("Chaeyoung");
    Twice.addNode("Sana");
    Twice.addNode("Jeongyoung");
    Twice.addNode("Mina");
    Twice.addNode("Tzuyu");
    Twice.addNode("DaHyun");
    Twice.addNode("Nayeon");
    Twice.deleteNode();
    Twice.deleteNode();
    Twice.addNode("DaHyun");
    Twice.addNode("Nayeon");

    //Now Display all of the members of Twice;
    Twice.displayList();

    //Now testing getNodeValue(size_t index = 2)
    cout << endl << "Position 2 of Twice List is " << Twice.getNodeValue(2) << endl << endl; 
   
    //Testing isMember() function
    cout << "Testing isMember() function with Mina\n";
    if(Twice.isMember("Mina"))
    {
        cout << "Yes, Mina is a member of Twice\n\n";
    } 
    
    //Testing remove(0) which should be momo
    cout << "Removing MOMO from Twice....\n\n"; 
    Twice.remove(0);
    Twice.displayList();
    cout << "Removing Mina from Twice\n\n";
    Twice.remove(4);
    Twice.displayList();
    Twice.addNode("Momo");
    Twice.displayList();

    //Testing insert() function 
    Twice.insert("Momo",3);
    Twice.displayList();



    /**********************************DOUBLE LINKLIST***************************/
    Dlinklist Got7;

    //Testing adding Node at the head and at the tail of the list
    Got7.addNodeBack("Jackson Wang");
    Got7.addNodeBack("JB");
    Got7.addNodeBack("Mark Tuan");
    Got7.addNodeFront("Bam Bam");
    Got7.addNodeFront("Park Jin Young");
    Got7.addNodeFront("Kim Yugyeom");
    Got7.addNodeFront("Choi Yungjae");
    Got7.displayList();

    //Testing getNodeData() 
    cout << "Position 2 of the list is " << Got7.getNodeData(2) << endl; 
    cout << "Position 3 of the list is " << Got7.getNodeData(3) << endl;
    
    
    cout << "Printing out the Got 7 list backwards.....\n\n";
    Got7.RdisplayList();
    cout << Got7.findNodeBack("Park Jin Young");
    cout << Got7.findNodeFront("Jackson Wang");
    Got7.removeNodeBack();
    Got7.displayList();
    Got7.addNodeBack("Mark Tuan");
    Got7.removeNodeFront();
    Got7.displayList();
    Got7.addNodeFront("Choi Yungjae");


    

    return 0;
}