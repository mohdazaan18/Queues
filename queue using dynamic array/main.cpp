#include <iostream>

using namespace std;
template <typename T>
class QueueDynArray {
   T *data;
   int nextindex;
   int firstindex;
   int capacity;
   int size;

    public :
   QueueDynArray(){
       nextindex = 0;
       firstindex = -1;
       capacity = 5;
       data = new T[5];
       size=0;
   }

   int sizeofqueue(){
       return size;
   }
   bool isempty(){
       return size==0;
   }

   void enqueue(T elem){
       if(size == capacity){
           T *newdata = new T[2*capacity];

           int j = 0;
           for(int i = firstindex;i<capacity;i++){
               newdata[j] = data[i];
               j++;
           }
           for(int i = 0;i<firstindex;i++){
               newdata[j] = data[i];
               j++;
           }
           delete [] data;
           data = newdata;
           firstindex = 0;
           nextindex = capacity;
           capacity = 2*capacity;
           }
           data[nextindex] = elem;
           if(firstindex == -1){
               firstindex = 0;
           }
           size++;
           nextindex = (nextindex+1)%capacity;
   }
   T dequeue(){
       if(isempty()){
           cout<<"Empty stack"<<endl;
           return 0;
       }
       T ans = data[firstindex];
       firstindex = (firstindex+1)%capacity;
       size--;
       if(size == 0){
           firstindex = -1;
           nextindex = 0;
       }
       return ans;
   }
    T front(){
        if(isempty()){
            cout<<"Empty stack"<<endl;
        }
        return data[firstindex];
    }
};
