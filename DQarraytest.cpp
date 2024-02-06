#include "Deque.h"
#include <bits/stdc++.h>

int main(){

    cout << "Start of DQarraytest" << endl;

    Deque<int> q;

    for (int i = 0; i < 8; i++){
        q.enqueue(i*10);
    }

    q.display();

    for (int i = 0; i < q.size(); i++){
        cout << q[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < q.size(); i++){
        q[i] += 10;
    }

    q.display();

    cout << "End of DQarraytest";

}