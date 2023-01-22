/*8. Consider a class Matrix
Class Matrix
{
int a[3][3];
Public:
//methods;
};
Overload the - (Unary) should negate the numbers stored in the object.
*/
#include <iostream>
using namespace std;
class Matrix
{
    int a[3][3];

public:
    Matrix()
    {
        a[0][0]=0;
    }
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
    Matrix operator-()
    {
        Matrix temp;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
               temp.a[i][j]=-a[i][j];
            }
        }
        return temp;
    }
};
int main()
{
    Matrix arr,arr2;
    cout<<"Enter Matrix Element (3 x 3):"<<endl;
    arr.set();
    cout<<"Matrix is :"<<endl;
    arr.get();
    arr2=-arr;
    cout<<"Matrix is :"<<endl;
    arr2.get();
    cin.get();
    return 0;
}