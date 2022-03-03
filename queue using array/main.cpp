#include <iostream>

using namespace std;
template <typename T>
class QueueArray {
    T *data;
    int nextindex;
    int firstindex ;
    int size;
    int capacity;
     public :
     QueueArray(int s){
         nextindex = 0;
         firstindex = -1;
         capacity = s;
         data = new T[s];
         size = 0;
        }

    int sizeofqueue(){
        return size;
    }
    bool isempty(){
        return size==0;
    }

    void enqueue(T elem){
        if(size == capacity){
            cout<<"Queue Full"<<endl;
            return;
        }
        if(firstindex == -1){
            firstindex = 0;
        }
        data[nextindex] = elem;
        nextindex = (nextindex + 1)%capacity;
        size++;

    }

    T dequeue(){
        if(isempty()){
            cout<<"Queue Empty";
            return 0;
        }
        T ans = data[firstindex];
        firstindex = (firstindex+1)%capacity;
        size--;
        if(size == 0){
            nextindex = 0;
            firstindex = -1;
        }
        return ans;

    }

    T front(){
        if(isempty()){
            cout<<"Empty Queue"<<endl;
            return 0;
        }
        return data[firstindex];
    }







};
