#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b; //Instance member Variables
                //static member variables 
    public:
        void setData(int x,int y) //local variables
        {
            a=x;
            b=y;
        }
        void showData();
        
};
void Complex::showData()
{
    cout<<"a="<<a<<" b="<<b<<endl;
}
void f1()
{
    Complex c1,c2;
    c1.setData(3,4);
    c1.showData();
    c2.setData(5,6);
    c2.showData();
    


}
int main()
{
    f1();
    return 0;
}