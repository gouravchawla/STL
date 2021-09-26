#include <iostream>
#include <queue>
#include <windows.h>
using namespace std;
int main()
{
    queue<int> Q;

    Q.push(1);
    Q.push(10);
    Q.push(100);
    Q.push(110);
    Q.push(120);
    Q.push(130);
    Q.push(140);

    int size=Q.size();
        cout<<"Size is:"<<size<<endl;
    Sleep(1000);

    cout << "First Element in Queue: " << Q.front() << endl;
    Sleep(1000);

    cout << "Last Element in Queue: " << Q.back() << endl;
    Sleep(1000);
    return 0;
}
