#include "Deque.h"
#include <bits/stdc++.h>
using namespace std;

void border();

int main(){

    const int N = 8;

    // Constructor
    Deque<int> Qint;

    Qint.display(); // creates an empty queue

    // testing empty()
    cout << "Start of empty() test" << endl;
    border();
    if (Qint.empty()){
        cout << "Qint is empty"<< endl;
        Qint.display();
        Qint.enqueue(11111);
        Qint.display();
    }

    if (Qint.empty()){
        cout << "Qint is empty" << endl;
    } else if (!Qint.empty()){
        cout << "Qint isn't empty" << endl;
    }
    border();
    cout << "End of empty() test" << endl << endl;

    //testing size()
    cout << "Start of size() test" << endl;
    border();
    cout << "This is the size of Qint = "<< Qint.size() << endl;
    cout << "Increasing size by 2" << endl;
    Qint.enqueue(22222);
    Qint.enqueue(33333);
    Qint.display();
    cout << "This is the new size of Qint = " << Qint.size() << endl;
    border();
    cout << "End of size() test" << endl << endl;

    //testing clear()
    cout << "Start of clear() test" << endl;
    border();
    Qint.enqueue(44444);
    Qint.enqueue(55555);
    Qint.enqueue(66666);
    Qint.enqueue(77777);
    Qint.display();
    Qint.clear();
    Qint.display();
    border();
    cout << "End of clear() test" << endl << endl;

    //testing reserve()
    cout << "Start of reserve() test" << endl;
    border();
    Qint.ddisplay();
    cout << "The capacity shows 8, now changing capacity to 12" << endl;
    Qint.reserve(12);
    Qint.ddisplay();
    cout << "The capacity of the queue is now 12" << endl;
    border();
    cout << "End of reserve() test" << endl << endl;

    //testing enqueue()
    cout << "Start of enqueue() test" << endl;
    border();
    Deque<int> temp1;
    temp1.display();
    temp1.enqueue(10);
    temp1.display();
    temp1.enqueue(20);
    temp1.display();
    for (int i = 3; i <= N; i++){
        temp1.enqueue(i*10);
    }
    temp1.ddisplay();
    cout << "Queue is at full capacity" << endl;
    temp1.enqueue(90);
    temp1.ddisplay();
    cout << "When Queue is full additional space is allocated to the queue" << endl;
    border();
    cout << "End of enqueue() test" << endl << endl;

    //testing jump()
    cout << "Start of jump() test" << endl;
    border();
    Deque<int> temp2;
    temp2.display();
    temp2.jump(10);
    temp2.display();
    temp2.jump(20);
    temp2.display();
    for (int i = 3; i <= N; i++){
        temp2.jump(i*10);
    }
    temp2.display();
    cout << "Queue is at full capacity" << endl;
    temp2.jump(90);
    temp2.ddisplay();
    cout << "When Queue is full additional space is allocated to the queue" << endl;
    border();
    cout << "End of jump() test" << endl << endl;

    //testing dequeue()
    cout << "Start of dequeue() test" << endl;
    border();
    temp1.display();
    while (!temp1.empty()) {
        cout << temp1.dequeue() << " ";
    }
    cout << endl;
    temp1.display();
    border();
    cout << "end of dequeue() test" << endl << endl;

    //testing eject()
    cout << "Start of eject() test" << endl;
    border();
    temp2.display();
    while (!temp2.empty()) {
        cout << temp2.eject() << " ";
    }
    cout << endl;
    temp2.display();
    border();
    cout << "end of eject() test" << endl << endl;

    //testing display()
    cout << "Start of display() test" << endl;
    border();
    Deque<int> temp3;
    temp3.display();
    for (int i = 0; i < N; i++){
        temp3.enqueue(i*10);
    }
    temp3.display();
    border();
    cout << "End of display() test" << endl << endl;
    //testing ddisplay()
    cout << "Start of ddisplay() test" << endl;
    border();
    Deque<int> temp4;
    temp4.ddisplay();
    for (int i = 0; i < N; i++){
        temp4.enqueue(i*10);
    }
    temp4.ddisplay();
    border();
    cout << "End of ddisplay() test" << endl << endl;

    //testing circular array()
    cout << "Start of circular array demonstration" << endl;
    border();
    Deque<int> CAtest;
    for (int i = 0; i < N; i++){
        CAtest.enqueue(i*10);
    }
    cout << "showing a full array" << endl;
    CAtest.display();
    CAtest.ddisplay();
    cout << "dequeuing first 2 elements then enqueuing 2 elements" << endl;
    cout << CAtest.dequeue() << " " << CAtest.dequeue() << endl;
    CAtest.display();
    CAtest.enqueue(111);
    CAtest.enqueue(222);
    CAtest.display();
    CAtest.ddisplay();
    CAtest.eject();
    CAtest.eject();
    CAtest.jump(10);
    CAtest.jump(0);
    cout << "In the queue the new values are added to the back, but in our array it's at the front" << endl;
    cout << "Ejecting last 2 elements in queue then jumping 2 values to the front" << endl;
    CAtest.display();
    cout << CAtest.eject() << " " << CAtest.eject() << endl;
    CAtest.display();
    CAtest.jump(333);
    CAtest.jump(444);
    CAtest.display();
    CAtest.ddisplay();
    cout << "In the queue the new values are added to the front, but in our array it's at the back" << endl;
    border();
    cout << "End of circular array demonstration" << endl << endl;

    // Queue holds many data types
    cout << "Start of template demonstration" << endl;
    border();
    Deque<char> Qchar;
    for (int i = 0; i< N; i++){
        Qchar.enqueue('c');
    }
    Qchar.display();
    Deque<bool> Qbool;
    for (int i = 0; i< N; i++){
        Qbool.enqueue(i % 2);
    }
    Qbool.display();
    Deque<float> Qfloat;
    for (int i = 0; i< N; i++){
        Qfloat.enqueue(i + 0.11);
    }
    Qfloat.display();
    border();
    cout << "End of template demonstration" << endl << endl;
}

void border(){
    cout << "=======================================" << endl;
}