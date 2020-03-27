#include<iostream>
#include "myStack.h"
using namespace std;

int main(){
    myStack s1, s2;

    s1.push(1);
    s1.push(2);
    s1.push(12);
    s1.push(23);
    s1.push(59);
    s1.push(30);
    s1.show();

    cout<<"-------------------------------------------------\n";

    s2.push(1);
    s2.push(15);
    s2.push(4);
    s2.push(3);
    s2.push(2);
    s2.show();
}
