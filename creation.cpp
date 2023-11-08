//using stl
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.pop();
    s.pop();
    cout<<"printing top element : "<<s.top()<<endl;
    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"not empty"<<endl;
    }
    cout<<"size of stack : "<<s.size()<<endl;
    //push range,emplace,swap

}