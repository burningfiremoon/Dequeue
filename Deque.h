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

    void clear( ){
        // remove all contents and reset the capacity to it's initial value 
        // 
        // Implement this...
        // complete
        Object * newArray = new Object[ theCapacity ];
        Object * temp = objects;
        objects = newArray;
        delete [] temp;

    }

    void reserve( int newCapacity )
    {
        // change the capacity to newCapacity 
        // (provided it is larger than the current size)
        // 
        // Implement this...
        // complete
        if (newCapacity > theSize){
          Object * newArray = new Object [ newCapacity ];
          for (int i = front; i < front + theSize; i++){
            newArray[i%theCapacity] = objects[i%theCapacity];
          }
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
        back = (back + 1) % (theCapacity + 1);
        theSize++ ;
    }

    void jump( const Object & x )// Insert a new object at the front 
    {
        // Implement this 
    }

    Object dequeue( )// Remove and return the object at the front 
    {
        theSize--;
        Object temp = objects[front];
        front = (front+1) % theCapacity ;
        return temp ;
    }

    Object eject( )// Remove and return the object at the back 
    {
        // Implement this 
        return(objects[back--]);
    }

    void display() const // print out the contents of the deque
    {
       // Implement this.  The output should be similar to that 
       // used in the Vector and Stack classes provided.
       cout << "size = " << theSize << endl;
       
       cout << "< ";
       for (int i = front; i < front + theSize; i++){
        cout << i << " = " << objects[i % theCapacity] << ", ";
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
          cout << i << "=" << objects[i] << ", ";
        }
        cout << "]" << endl;
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
