/*9. Consider the following class mystring
Class mystring
{
char str [100];
Public:
// methods
};
Overload operator “!” to reverse the case of each alphabet in the string
(Uppercase to Lowercase and vice versa).
*/
#include<iostream>
#include<cstring>
using namespace std;
class mystring
{
    char str[100];
    public:
    mystring()
    {
        str[0]='\0';
    }
    void set()
    {
        cin.getline(str,100);
    }
    void get()
    {
        cout<<str<<endl;
    }
    void operator!()
    {
        mystring temp;
        strcpy(temp.str,str);
        int i=0;
        while(temp.str[i]) //upperCase
        {
            if(temp.str[i]>=65&&temp.str[i]<=90)
            {
                temp.str[i] +=32;
            }
            else if(temp.str[i]>=97&&temp.str[i]<=122)
               temp.str[i] -=32;  
            i++;
        }
        temp.get();
    }
};
int main()
{
    mystring str,str2;
    cout<<"Enter string:"<<endl;
    str.set();
    str.get();
    !str;
    //str2.get();
    //str2.get();
    cin.get();
    return 0;
}