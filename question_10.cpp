/*10.Class Matrix
{
int a[3][3];
Public:
//methods;
};
Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator overloading).
*/
#include<iostream>
using namespace std;
class Matrix
{
    int a[3][3];
    public:
    void set()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
        }
    }
    void get()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<a[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    Matrix operator+(Matrix b)
    {
        Matrix temp;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                temp.a[i][j]=a[i][j]+b.a[i][j];
            }
        }
        return temp;
    }

};
int main()
{
    Matrix a,b,c;
    cout<<"Enter Matrix Element (3 X 3) :"<<endl;
    a.set();
    cout<<"Enter Matrix Element (3 X 3) :"<<endl;
    b.set();
    cout<<"First Matrix :"<<endl;
    a.get();
    cout<<"Second Matrix :"<<endl;
    b.get();
    c= a+b;
    cout<<"Addition of Matrix :"<<endl;
    c.get();
    cin.get();
    return 0;
}