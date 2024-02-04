#include "Deque.h"
#include <bits/stdc++.h>
using namespace std;



int main(){

    const int N = 8;

    Deque<int> q;

    for (int j = 0; j < N; j++){
        q.enqueue(j);
    }
    q.reserve(9);
    for (int i = 0; i < 8; i++){
        q.dequeue();
    }
    q.ddisplay();
    cout << q.dequeue() << endl;
    q.ddisplay();
}