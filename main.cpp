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
    if(Twice.isEmpty()){ cout << "Twice List is empty\n";}
    else 
        cout << "Twice list is not empty\n";
    
    Twice.addNode("ChungLi");
    Twice.addNode("David");
    Twice.displayList();

    Twice.deleteNode(); //test deleteNode
    Twice.deleteNode(); //test again
    Twice.displayList();

    Twice.remove(0); //remove the first member of the list which is Momo;
    Twice.displayList();
    Twice.remove(1); //remove the second member of the list
    Twice.displayList();
    Twice.addNode("Momo"); //return the deleted members
    Twice.addNode("Sana");
    Twice.displayList(); 
    Twice.remove(3); //testing remove function
    Twice.displayList(); 
    Twice.addNode("Tzuyu");

    cout << "Searching for Momo in the list\n\n";

    //Testing isMember function
    if(Twice.isMember("Momo")){
        cout << "Momo is a member of Twice\n";
    }

    //Demonstrate a single List with a program defined constructor
    Slinklist RedVelvet("Joy");
    RedVelvet.addNode("Irene");
    RedVelvet.addNode("Yeri");
    RedVelvet.addNode("Seulgi");
    RedVelvet.addNode("Wendy");
    RedVelvet.displayList();
    cout << "Now searching for Seulgi.....\n\n\n";
    cout << "Seulgi position of the list is: " << RedVelvet.search("Seulgi") << endl; //testing the search position function
    cout << "Now searching for Daniel Kang\n";
    cout << "Daniel Kang position is " << RedVelvet.search("Daniel Kang") << endl;

    //Demonstrate the insert position function
    RedVelvet.insert("Naomi",0);
    RedVelvet.displayList();
    RedVelvet.remove(0);
    RedVelvet.remove(2);
    RedVelvet.displayList();
    RedVelvet.insert("Yeri",2);
    RedVelvet.displayList();



    //Demonstrationg of a double Link List with a defauly constructor
    Dlinklist BTS("JHope");
    Dlinklist BTS1("Jimin");
    BTS.displayList();
    BTS1.displayList();
    return 0;
}