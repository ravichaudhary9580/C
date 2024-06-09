#include<iostream>
using namespace std;
namespace n1
{
    int x=5;
}
using namespace n1;
int main()
{
    int a;
    cout<<"x="<<x<<endl;
    cout<<"Enter a number";
    cin>>a;
    int b=a*a;
    cout<<"Square of "<<a<<" is "<<b;
    cout<<endl;
    return 0;
}