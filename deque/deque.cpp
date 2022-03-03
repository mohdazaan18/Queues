/*
1. constructor
You need to create the appropriate constructor. Size for the queue passed is 10.
2. insertFront -
This function takes an element as input and insert the element at the front of queue. Insert the element only if queue is not full. And if queue is full, print -1 and return.
3. insertRear -
This function takes an element as input and insert the element at the end of queue. Insert the element only if queue is not full. And if queue is full, print -1 and return.
4. deleteFront -
This function removes an element from the front of queue. Print -1 if queue is empty.
5. deleteRear -
This function removes an element from the end of queue. Print -1 if queue is empty.
6. getFront -
Returns the element which is at front of the queue. Return -1 if queue is empty.
7. getRear -
Returns the element which is at end of the queue. Return -1 if queue is empty.
*/

#include <iostream>

using namespace std;


class Deque{
  int *data;
  int front;
  int rear;
  int size;

  Deque(int ts){
      data = new int[10];
      front = -1;
      rear = 0;
      size = ts;
  }

  bool isempty(){
      return front == -1;
  }
  bool isfull(){
      return front == (rear+1)%size;
  }
    void insertFront(int elem){
        if(isfull()){
            cout<<"-1"<<endl;
            return;
        }
        if(front == -1){
            front = 0;
            rear = 0;
        }
        else {
            front = ((front-1)%size+size)%size;
        }
        data[front] = elem;
    }

    void insertRear(int elem){
        if(isfull()){
            cout<<"-1";
            return;
        }
        if(front ==-1){
            front = 0;
            rear = 0;
        }
        else {
            rear= (rear+1)%size;
        }
        data[rear] = elem;

}

void deleteFront(){
    if(isempty()){
        cout<<"-1";
        return;
    }
    if(front == rear){
        rear = -1;
        front = -1'
    }
    else {
        front = (front+1)%size;
    }



}

void deleteRear(){
    if(isempty()){
        cout<<"-1";
        return;
    }

    if(front == rear){
        front = -1;
        rear = -1;
    }
    else {
        rear = ((rear-1)%size+size)%size;
    }
}
    int getFront(){
        if(isempty()){
            return -1;
        }
        return data[front];
    }
    int getRear(){
        if(isempty() || rear<0){
            return -1;
        }
        return data[rear];
    }






};

int main()
{
   Deque d(10);
  d.insertFront(10);
  d.insertFront(20);
   d.insertFront(30);
    d.insertFront(40);
     d.insertFront(50);
     d.insertRear(999);
     d.insertRear(990);


    return 0;
}
