#include<iostream>

using namespace std;

int f(int x)
{
    return x * x - 2;
}

int g(int x)
{
    return x * x * x - 3;
}

int main()
{
    int x,y;
    cin>>x>>y;
    cout<<x+y<<endl;
}