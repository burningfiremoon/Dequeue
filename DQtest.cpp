#include "Deque.h"
#include <bits/stdc++.h>
using namespace std;



int main(){

    const int N = 8;

    Deque<int> q;
    q.display();

    for (int i = 0 ; i < N; i++){
        q.enqueue(i);
    }

    q.display();
    //test
    for (int i = 0; i < N; i++){
        cout << q.dequeue() << endl;
    }
    q.display();
    q.ddisplay();
}