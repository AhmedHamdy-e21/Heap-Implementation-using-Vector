#include <iostream>
#include "Mission related/Mission.h"
#include "Mission related/EmergencyMission.h"
#include "Max Heap/MaxHeap.cpp"
//#include "Max Heap/MaxHeap.cpp"

int main() {


//    MaxHeap<int>* M=new MaxHeap<int>();
//    M->insertItem(5);
//    M->printHeap();



    EmergencyMission* M5=new EmergencyMission(1,36,6,32,2);
    EmergencyMission* M457=new EmergencyMission(1,567,6,32,200);
//    Mission M6(1,25,6,32,25);
    Mission* M7=new Mission(1,140,6,32,140);
    Mission* M3=new Mission(1,1,6,32,1);;
    Mission* M4=new Mission(1,7,6,32,7);
    Mission M8(1,180,6,32,180);

//    MaxHeap<Mission*> M=new MaxHeap<Mission*>();
    MaxHeap<Mission*> M;
//    M->setSize(24);
    M.insertItem(M5);
    M.insertItem(M457);
    M.insertItem(M3);
    M.insertItem(M7);
    M.insertItem(M4);
//    M->insertItem(M8);
//    M->getVect()[4].PrintMission();

//    M->getMax().PrintMission();
//    M->extractMax();
//    M->extractMax();
//    M.extractMax();
//    M.extractMax();
//    M->extractMax();
    M.printHeap();

//    M.extractMax();
    cout<<endl;
//    M->printHeap();
    M.getVect()[2]->setID(2000);
//    M5->setSignificance(234324);
//    M6.setID(234324);
//
//    cout<<"\n"<<M->getVect()[2].getSignificance()<<endl;
//    cout<<"\n"<<M6.getSignificance()<<endl;


    M.printHeap();


    return 0;
}
