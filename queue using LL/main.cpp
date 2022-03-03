#include <iostream>

using namespace std;
template <typename T>
class Node{
  public :
  T data;
  Node<T> *next;

  Node(T data){
      this->data = data;
      next = NULL;
  }
};

template <typename T>
class QueueusingLL {
   Node<T> *head;
   Node<T> *tail;
   int size;
   public :

   QueueusingLL(){
       head = NULL;
       tail = NULL;
       size = 0;
   }

   bool isempty(){
       return size == 0;
   }
   int sizeofqueue(){
       return size;
   }

   void enqueue(T element){
       Node<T> *newNode = new Node<T>(element);
       if(head == NULL){
           head = newNode;
           tail = newNode;
       }
       else {
           tail->next = newNode;
           tail = newNode;
       }
       size++;
   }

   T dequeue(){
       if(isempty()){
           cout<<"Empty queue"<<endl;
           return 0;
       }
       T ans = head->data;
       Node<char> *temp = head;
       head = head->next;
       delete temp;
       size--;
       return ans;


   }

   T front(){
       if(isempty()){
           cout<<"Empty queue"<<endl;
           return 0;
       }
       return head->data;
   }


};
