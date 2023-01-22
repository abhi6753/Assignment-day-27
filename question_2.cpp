//2. Write a C++ program to overload unary operators that is increment and decrement.
#include<iostream>
using namespace std;
class Increment
{
    int a;
    public:
    void setA(int x)
    {
        a =x;
    }
    int getA()
    {
        return a;
    }
    int operator++()
    {
        a=a+1;
        return a;
    }
    int operator--()
    {
        a= a-1;
        return a;
    }
    int operator --(int)
    {
        int temp;
        temp=a;
        a=a-1;
        return temp;
    }
    int operator++(int)//Don't confuse this int doesn't indicate integer.
    {
        int temp;
        temp = a;
        a=a+1;
        return temp;
    }
};
int main()
{
    Increment A;
    int a;
    cout<<"Enter Value of a:\n";
    cin>>a;
    A.setA(a);
    cout<<"Pre Increment\n";
    a = ++A; // preIncrement
    cout<<A.getA();
    cout<<a<<endl;
    cout<<"PostIncrement\n";
    a=A++;// PostFix
    cout<<a<<endl;
    cout<<A.getA();
    cout<<"Pre Decrement"<<endl;
    a=--A;
    cout<<A.getA();
    cout<<a<<endl;
    cout<<"Post Decrement";
    a=A--;
    cout<<A.getA()<<endl;
    cout<<a<<endl;
    cin.get();
    return 0;
}