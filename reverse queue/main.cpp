#include <iostream>

using namespace std;
#include<queue>

void reverseQueue(queue<int> &input){
    if(input.size() == 0 || input.size() == 1){
        return;
    }
    int frontt = input.front();
    input.pop();
    reverseQueue(input);
    input.push(frontt);
}

int main(){
    queue<int> q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.push(50);

    reverseQueue(q1);
    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }


}
