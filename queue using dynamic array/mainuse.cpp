
#include <iostream>

using namespace std;
#include"main.cpp"

int main(){
    QueueDynArray<char> q;
    q.enqueue('A');
    q.enqueue('B');
    q.enqueue('C');
    q.enqueue('D');
    q.enqueue('E');
    cout<<q.dequeue()<<endl;
    q.enqueue('F');
    cout<<q.isempty()<<endl;
    cout<<q.front()<<endl;

}
