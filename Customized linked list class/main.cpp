#include <iostream>
#include "LinkedListMissions.h"
#include "Mission related/Mission.h"
#include "Mission related/EmergencyMission.h"
int main() {
//    Mission M2=new Mission(1,1,6,32,5);
    Mission*M3=new Mission(1,2,6,32,5);
    Mission* M4=new Mission(1,3,6,32,5);
    EmergencyMission* M5=new EmergencyMission(1,36,6,32,5);
    Mission M6(1,32,6,32,5);
    LinkedListMissions<Mission*>* L=new LinkedListMissions<Mission*>();	//create an object of class LinkedList
    int val;
//	L.InsertBeg(M);
    L->InsertBeg(M4);
    L->InsertBeg(M3);
//	L.DeleteLast();
    L->InsertBeg(M5);
//    L->InsertBeg(M6);
//    L->InsertBeg(M4);
    L->PrintList();
//    L->DeleteAll();


//    L->DeleteAll();
//    L->DeleteAll();
    L->PrintList();
    return 0;
}
