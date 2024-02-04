#include "Deque.h"
#include <bits/stdc++.h>
using namespace std;



int main(){

    const int N = 8;

    Deque<int> q;

    for (int j = 0; j < N; j++){
        q.enqueue(j);
    }
    q.display();
    cout << q[0];
    q.dequeue();
    q.display();
    q.enqueue('z');
    q.dequeue();
    q.enqueue('k');
    q.display();
    q[0] = 'p';
    q.display();
}