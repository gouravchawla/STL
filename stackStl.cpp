#include<iostream>
#include<list>
#include<array>
#include<stack>
#include<windows.h>
#include<ostream>
using namespace std;

int main(){
    stack<string> s;
    s.push("Gourav");
    s.push("chawla");
    s.push("Ram Ram ji");
    cout<<"First element is:"<<" "<<s.top();
    s.pop();
    cout<<endl;
    Sleep(1000);
    cout<<"After pop: "<<endl<<s.top()<<endl;
    Sleep(1000);
    cout<<"Size is: "<<endl<<s.size()<<endl;
     Sleep(1000);
    cout<<"Empty or not: "<<endl<<s.empty()<<endl;
   
   

    return 0;
}