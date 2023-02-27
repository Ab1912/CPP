#include<iostream>
#include<queue>
using namespace std;

void print(queue <string> a)
{
    while (!a.empty())

    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl;
}

int main()
{
    queue <string> q;
    q.push("C");
    q.push("C++");
    q.push("Java");
    q.push("C#");
    print(q);
    cout<<"empty or not : "<<q.empty()<<endl;
    cout<<"first element : "<<q.front()<<endl;
    q.pop();
    print(q);
    return 0;
}