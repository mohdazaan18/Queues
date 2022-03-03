#include <iostream>

using namespace std;
#include<queue>

int main(){
    queue<char> q;
    q.push('A');
    q.push('B');
    q.push('C');
    q.push('D');
    q.push('E');
    q.pop();
    q.push('F');
    cout<<q.empty()<<endl;
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;

}
