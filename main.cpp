#include <iostream>
#include "unorderedLinkedList.h"


using namespace std;

int main()
{
    unorderedLinkedList<int> list1, list2;


    int num;


    cout<<"Enter numbers ending"<<"with -999"<<endl;

    cin>>num;

    while(num !=-999)
    {
        list1.insertFirst(num);
        cin>>num;
    }

    cout<<"list1";
    list1.print();
    cout<<endl;


    list2 = list1;  //test the assignment operator

    cout<<"list2";
    list2.print();
    cout<<endl;

    cout<<"Enter the number to be deleted";

    cin>>num;

    cout<<endl;

    //list2.delete(num);

    cout<<"After deteling"<<num<<"list2"<<endl;

    list2.print();
    cout <<endl;

    return 0;
}
