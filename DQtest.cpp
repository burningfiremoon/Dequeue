#include "Deque.h"
#include <bits/stdc++.h>
using namespace std;



int main(){

    const int N = 8;

    // Constructor
    Deque<int> Qint;

    Qint.display(); // creates an empty queue

    if (Qint.empty()){
        cout << "Qint is empty"<< endl;
        Qint.enqueue(11111);
        Qint.display();
    }



}