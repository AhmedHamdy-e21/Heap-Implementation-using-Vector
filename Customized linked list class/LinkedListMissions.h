//
// Created by raspberry on 2021-01-09.
//

#ifndef CUSTOMIZED_LINKED_LIST_CLASS_LINKEDLISTMISSIONS_H
#define CUSTOMIZED_LINKED_LIST_CLASS_LINKEDLISTMISSIONS_H
#include "NodeMission.h"
#include "Mission related/Mission.h"
template <typename T>
class LinkedListMissions {
private:
    NodeMission<T> *Head;	//Pointer to the head of the list
    //You can add tail pointer too (depending on your problem)
    int count;	//Number of nodes in the list



public:
    LinkedListMissions()
    {
        count = 0;
        Head = nullptr;
    }

    void InsertBeg(const T &data)
    {
        NodeMission<T> *R = new NodeMission<T>(data);
        R->setNext(Head);
        setHead(R);
        count++;
    }


    void InsertEnd(const T &data){

        if(Head == nullptr){
            InsertBeg(data);
            return;
        }
        else{
            NodeMission<T> *p = Head;
            while(p->getNext()){
                p = p->getNext();
            }
            NodeMission<T> *R = new NodeMission<T>(data);
            p->setNext(R);
            count++;
            return;

        }

    }


    void DeleteAll()
    {
        NodeMission<T> *P = Head;
        while (Head)
        {
            P = Head->getNext();
            delete Head;
            Head = P;
        }
        count = 0;
    }

    void setHead(NodeMission<T>* newHead) {
        this->Head = newHead;
        this->Head = newHead;
    }

    NodeMission<T>* getHead() const{
        return Head;
    }
    int getCount() const
    {
        return count;
    }

    void setCount(int newCount) {
        count = newCount;
    }



    void PrintList() const
    {
        cout<<"\nList has "<<getCount()<<" nodes";
        cout<<"\nprinting list contents:\n\n";
        NodeMission<T> *p = getHead();

        while(p)
        {
            cout << "[ " ;
            p->getItem()->PrintMission();
            cout<< " ]";
            cout << "--->";
            p = p->getNext();
        }
        cout << "*\n";
    }

    bool DeleteNode(const T &value)
    {
        cout<<"\nDeleting the element ";
        value.PrintMission();
        cout<<endl;
        if(Head == nullptr){
            return false;
        }

        if(Head->getItem().getID()== value.getID()){
            DeleteFirst();
            return true;
        }
        NodeMission<T> *p = Head;
        NodeMission<T> *q = p->getNext();

        while(q){
            if(q->getItem().getID()== value.getID()){
                p->setNext(q->getNext());
                delete q;
                count--;
                return true;
            }
            p = q;
            q = p->getNext();
        }
        return false;
    }



    bool DeleteNodes(const T &value){
        cout<<"\nDeleting all the elements of value ";
        value.PrintMission();
        cout<<endl;


        if(Head == nullptr){return false;}
        bool flag = false;
        while(Head &&Head->getItem().getID()== value.getID()){
            DeleteFirst();
            flag = true;
        }
        NodeMission<T>* p = Head;
        while(p && p->getNext()){
            if((p->getNext())->getItem().getID() == value.getID()){
                NodeMission<T>* R = (p->getNext())->getNext();
                delete p->getNext();
                p->setNext(R);
                flag= true;
                count--;

            }
            else{
                p = p->getNext();
            }
        }
        return flag;
    }

    void DeleteLast(){
        cout<<"\nDeleting the last element"<<endl;
        if(Head == nullptr){
            return;
        }
        else if(Head->getNext() == nullptr){
            DeleteFirst();
            return;
        }
        else{
            NodeMission<T> *p = Head;
            NodeMission<T> *q = p->getNext();
            while(q->getNext()){
                p = q;
                q = p->getNext();
            }
            delete q;
            p->setNext(nullptr);
            count--;
            return;

        }
    }

    bool Find(T &Key){
        NodeMission<T> *p = Head;
        while(p){
            if(p->getItem().getID() == Key.getID()){
                cout<<"Found the element ";
                Key.PrintMission();
                cout<<endl;
                return true;
            }
            p = p->getNext();
        }
        cout<<"\nElement ";
        Key.PrintMission();
        cout<<" not found"<<endl;
        return false;
    }

    void DeleteFirst(){
        cout<<"\nDeleting the first element"<<endl;
        if(Head){
            NodeMission<T> *p = Head->getNext();
            delete Head;
            Head = p;
            count--;
        }
        return;
    }





    ~LinkedListMissions()
    {
        DeleteAll();
    }

};


#endif //CUSTOMIZED_LINKED_LIST_CLASS_LINKEDLISTMISSIONS_H
