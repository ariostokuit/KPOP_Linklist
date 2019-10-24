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

    Slinklist Twice; //start with empty list

    
    //Testing Single Linklist by adding all the members of Twice
    Twice.addNode("Momo");
    Twice.addNode("Chaeyoung");
    Twice.addNode("Sana");
    Twice.addNode("Jeongyoung");
    Twice.addNode("Mina");
    Twice.addNode("Tzuyu");
    Twice.addNode("DaHyun");
    Twice.addNode("Nayeon");
   
    cout << "Here are the members of Twice: ";
    Twice.displayList(); //Display the entire group in order

    //testing isEmpty() function , desired result is false
    if(Twice.isEmpty()){
        cout << "Twice List is empty\n";
    }
    else
    {
        cout << "Twice list is not empty\n";
    }
    
    Twice.addNode("ChungLi");
    Twice.addNode("David");
    Twice.displayList();
    Twice.deleteNode(); //test deleteNode
    Twice.deleteNode(); //test again
    Twice.displayList();


    //Demonstrate a single List with a program defined constructor
    Slinklist RedVelvet("Joy");
    RedVelvet.addNode("Irene");
    RedVelvet.addNode("Yeri");
    RedVelvet.addNode("Seulgi");
    RedVelvet.addNode("Wendy");
    RedVelvet.displayList();


    //Demonstrationg of a double Link List with a defauly constructor
    Dlinklist BTS("JHope");
    Dlinklist BTS1("Jimin");
    BTS.displayList();
    BTS1.displayList();
    return 0;
}