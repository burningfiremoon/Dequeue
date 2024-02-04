#ifndef DEQUE_H
#define DEQUE_H

#include <iostream>
using namespace std;

template <typename Object>
class Deque 
{
  public:

    // Constructor test
    Deque()
      {  
         theCapacity = 8 ;
         objects = new Object[ theCapacity ]; 
         theSize = 0 ;
         front = 0 ; 
         back = 0 ; 
      }


      // Deconstructor
    ~Deque( )
      { delete [ ] objects; }

    bool empty( ) const  { return size( ) == 0; }
    int size( ) const { return theSize; }

    // implementing the [] operator
    Object& operator[](Object index){
      return data[index];
    }

    void clear( ){
        front = 0;
        back = 0;
        theSize = 0;

    }

    void reserve( int newCapacity )
    {
        // change the capacity to newCapacity 
        // (provided it is larger than the current size)
        if (newCapacity > theSize){
          Object * newArray = new Object [ newCapacity ];
          back = 0;
          int j = 0;
          for (int i = front; i < front + theSize; i++){
            newArray[j++] = objects[i%theCapacity];
            back++;
          }
          front = 0;
          Object * temp = objects;
          objects = newArray;
          delete [] temp;
          theCapacity = newCapacity;
        }


    }

    // Operations 

    void enqueue( const Object & x )// Insert a new object at the back 
    {
        if( theSize == theCapacity ) reserve( 2 * theCapacity + 1 );

        objects[ back ] = x ; 
        back = (back + 1) % (theCapacity);
        theSize++ ;
    }

    void jump( const Object & x )// Insert a new object at the front 
    {
        // Implement this
        if (theSize == theCapacity) reserve(2* theCapacity + 1);
        theSize++;
        if (front == 0){
          front = theCapacity - 1;
          objects[front] = x;
        } else {
          objects[--front] = x;
        }
    }

    Object dequeue( )// Remove and return the object at the front 
    {
        theSize--;
        Object temp = objects[front];
        front = (front+1) % (theCapacity);
        return temp ;
    }

    Object eject( )// Remove and return the object at the back 
    {
        // Implement this
        if (empty()){
          return(0);
        }
        if (back == 0){
          back = theCapacity - 1;
        } else {
          back--;
        }
        theSize--;
        return objects[back];

    }

    void display() const // print out the contents of the deque
    {
       // Implement this.  The output should be similar to that 
       // used in the Vector and Stack classes provided.
       cout << "size = " << theSize << endl;
       cout << "< ";
       for (int i = front; i < front + theSize; i++){
        cout << objects[i % theCapacity];
        if (i < (front + theSize) - 1){
          cout << ", ";
        }
       }
       cout << " >" << endl;
    }

    void ddisplay() const // print out the contents of the objects 
    // array, and relevant variables, for debugging or verifying 
    // correctness. 
    {
        // Implement this.  The output should be in the style used in 
        // Vector and Stack classes provided.

        cout << "capacity= " << theCapacity << ", size= " << theSize << endl;

        cout << "[ ";
        for (int i = 0; i < theCapacity; ++i){
          cout << i << " = " << objects[i];
          if (i < theCapacity - 1){
            cout << ", ";
          }
        }
        cout << " ]" << endl;
        cout << "Front= " << front << endl;
        cout << "Back = " << back << endl;
    }


  private:
    int theSize;
    int front;
    int back;
    int theCapacity;
    Object * objects;
};

#endif
