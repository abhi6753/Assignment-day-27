/*7. Define a C++ class fraction
class fraction
{
long numerator;
long denominator;
Public:
fraction (long n=0, long d=0);
}
Overload the following operators as member or friend:
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >>.
*/
#include<iostream>
using namespace std;
class Fraction
{
    long numerator,denominator;
    public:
    Fraction()
    { 
        numerator=0;
        denominator =0;
    }
    Fraction operator++(int)
    {
        Fraction temp;
        temp.numerator=numerator++;
        temp.denominator=denominator++;
        return temp;
    }
    Fraction operator++()
    {
       Fraction temp;
       temp.numerator=++numerator;
       temp.denominator=++denominator;
       return temp;   
    }
    friend istream& operator>>(istream&,Fraction&);
    friend ostream& operator<<(ostream&,Fraction);
};
istream& operator>>(istream &in,Fraction &f)
{
    cout<<"Numerator    :   ";
    cin>>f.numerator;
    cout<<endl;
    cout<<"Denominator  :   ";
    cin>>f.denominator;
    cout<<endl;
    return in;
}
ostream& operator<<(ostream &out,Fraction f)
{
    cout<<f.numerator<<"/"<<f.denominator<<endl;
    return out;
}
int main()
{
    Fraction f1,f2;
    cout<<"f1\t:  "<<f1;
    cout<<"f2\t:  "<<f2<<endl<<endl;
    cout<<"Enter 1st Fraction Value"<<endl<<endl;
    cin>>f1;
    f1++;
    cout<<"f1++  :  "<<f1<<endl;
    cout<<"++f1  :  "<<++f1<<endl;
    cout<<"Enter 2nd Fraction Value"<<endl<<endl;
    cin>>f2;
    f2= ++f1;
    cout<<"f2 = ++f1"<<endl;
    cout<<"f1  :  "<<f1;
    cout<<"f2  :  "<<f2<<endl;
    f2=f1++;
    cout<<"f2 = f1++"<<endl;
    cout<<"f1  :  "<<f1;
    cout<<"f2  :  "<<f2<<endl;
}