#include "Deque.h"
#include <bits/stdc++.h>
using namespace std;



int main(){

    const int N = 20;

    Deque<int> q;
    q.display();

    for (int i = 0 ; i < N; i++){
        cout << "This is i= " << i << endl;
        q.enqueue(i);
    }

    q.display();
    // cout << q.dequeue() << endl;

    q.clear();
    q.display();

    // q.enqueue(99);
    // q.display();
}