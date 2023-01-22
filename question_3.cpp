//3. Write a C++ program to add two complex numbers using operator overloaded by a\
friend function.
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
    a=x;
   }
   void setB(int x)
   {
    b = x;
   }
   int getA()
   {
    return a;
   }
   int getB()
   {
    return b;
   }
   friend Complex operator+(Complex,Complex); 
};
Complex operator+(Complex s,Complex x)
{
    Complex temp;
    temp.a= s.a+x.a;
    temp.b = s.b+x.b;
    return temp;
}
int main()
{
    Complex s1,s2,s3;
    int a,b;
    cout<<"Enter first Complex number:\n";
    cin>>a>>b;
    s1.setA(a);
    s1.setB(b);
    cout<<"Enter second Complex number:\n";
    cin>>a>>b;
    s2.setA(a);
    s2.setB(b);
    s3=s1+s2;
    cout<<"Sum = "<<s3.getA()<<" + "<<s3.getB()<<"i"<<endl;
    cin.get();
    return 0;
}