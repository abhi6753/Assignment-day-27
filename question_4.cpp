/*4. Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
1. = = : To check whether two Times are the same or not.
2. >> : To accept the time.
3. << : To display the time.
*/
#include <iostream>
using namespace std;
class Time
{
  int h, m, s;

public:
  void normalise()
  {
    m=m+s/60;
    s=s%60;
    h=h+m/60;
    m=m%60;
  }
  Time()
  {
    h = m = s = 0;
  }
  friend istream& operator>>(istream &c, Time &t);
  friend ostream& operator<<(ostream &os , Time t);
  bool operator==(Time t)
  {
    /*if(h==t.h)
    {
       if(m==t.m)
       {
         if(s==t.s)
         {
          return true;
         }
       }
    }
    return false;
    */
  return h==t.h?(m==t.m?(s==t.s?true:false):false):false;
  }
};

istream& operator>>(istream &c, Time &t)
{
  cout<<"Enter Hours    :   ";
  cin>>t.h;
  cout<<"Enter Minutes  :   ";
  cin>>t.m;
  cout<<"Enter Seconds  :   ";
  cin>>t.s;
  cout<<endl;
  return c;
}
ostream& operator<<(ostream &os,Time t)
{
  t.normalise();
  cout<<"Hours    :   ";
  cout<<t.h<<endl;
  cout<<"Minutes  :   ";
  cout <<t.m<<endl;
  cout<<"Seconds  :   ";
  cout<<t.s<<endl<<endl;
  return os;
}
int main()
{
  Time t1, t2;
  cout << "Enter First Time" << endl;
  cout << "-----------------" << endl;
  cin>>t1;
  cout<<"First Time"<<endl;
  cout<<t1;
  cout << "Enter Second Time" << endl;
  cout << "-----------------" << endl;
  cin>>t2;
  cout<<"Second Time"<<endl;
  cout<<t2;
  if(t1==t2)
    cout<<"Time are same"<<endl;
  else
    cout<<"Time are not same"<<endl;
  cin.get();
  return 0;
}