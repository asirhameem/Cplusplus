#include<iostream>
#include "queue.h"
using namespace std;

int main(){

    myQue q1, q2;

    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.enqueue(5);
    q1.dequeue();
    q1.enqueue(6);
    q1.dequeue();
    q1.enqueue(7);
    q1.show();

    cout<<"-------------------------------------------"<<endl;

    q2.enqueue(21);
    q2.enqueue(22);
    q2.enqueue(23);
    q2.enqueue(24);
    q2.enqueue(25);
    q2.dequeue();
    q2.show();

}
