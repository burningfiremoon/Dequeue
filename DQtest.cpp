#include "Deque.h"
#include <bits/stdc++.h>
using namespace std;



int main(){

    const int N = 8;

    Deque<char> q;

    for (int j = 0; j < N; j++){
        q.enqueue('j');
    }
    q.display();

    cout << q[0];

}