/*1. Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
a. +
b. -
c. *
d. ==
*/
#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
    Complex()
    {
        a=b=0;
    }
    void setA(int x)
    {
        a =x;
    }
    void setB(int y)
    {
        b = y;
    }
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }
    Complex operator+(Complex C)
    {
       Complex temp;
       temp.a = a+C.a;
       temp.b= b+C.b;
       return temp;
    } 
    Complex operator-(Complex C)
    {
        Complex temp;
        temp.a = a-C.a;
        temp.b = b-C.b;
        return temp;
    }
    Complex operator*(Complex C)
    {
        Complex temp;
        temp.a = (a*C.a)-(b*C.b);
        temp.b = (b*C.a)+(a*C.b);
        return temp;
    }
    bool operator==(Complex C)
    {
        bool t1,t2;
        t1=a==C.a;
        if(t1==true)
        {  
            t2 = b==C.b;
            if(t2==true)
             return true;
        }
        else
        {
           return false;
        }
    }

};
int main()
{
    Complex s1,s2,s3;
    bool t;
    int a,b;
    cout<<"Enter first imaginary number:\n";
    cin>>a>>b;
    s1.setA(a);
    s1.setB(b);
    cout<<"Enter second imaginary number:\n";
    cin>>a>>b;
    s2.setA(a);
    s2.setB(b);
    s3 = s1+s2;// s1 ne operator+ ko call kra hai or s2 as a argument pass ho rha hai
    cout<<s3.getA()<<" + "<<s3.getB()<<"i"<<endl;
    s3= s1-s2;
    cout<<s3.getA()<<" + "<<s3.getB()<<"i"<<endl;
    s3= s1*s2;
    cout<<s3.getA()<<" + "<<s3.getB()<<"i"<<endl;
    t = s1==s2;
    cout<<t;
    cin.get();
    return 0;
}