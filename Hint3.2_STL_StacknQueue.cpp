
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main(){

    priority_queue <int> test;


    queue <int> myQueue;
    myQueue.push(4);
    myQueue.push(8);
    myQueue.push(12);
    myQueue.push(16);
    myQueue.pop();
    cout << myQueue.front() << " " << myQueue.back() << " size:" << myQueue.size() << endl;


    stack <int> myStack;
    myStack.push(1);
    myStack.push(2);
    myStack.pop();








    return 0;
}
