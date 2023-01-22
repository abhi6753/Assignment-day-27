/*5. Consider following class Numbers
class Numbers
{
int x,y,z;
public:
// methods
};
Overload the operator unary minus (-) to negate the numbers.*/
#include <iostream>
using namespace std;
class Numbers
{
    int x, y, z;

public:
    Numbers()
    {
        x = y = z = 0;
    }
    void setX(int a)
    {
        x = a;
    }
    void setY(int a)
    {
        y = a;
    }
    void setZ(int a)
    {
        z = a;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    int getZ()
    {
        return z;
    }
    Numbers operator-()
    {
        Numbers temp;
        temp.x = -x;
        temp.y = -y;
        temp.z = -z;
        return temp;
    }
};
int main()
{
    Numbers n1, n2;
    int x;
    cout << "Enter first number: " << endl;
    cin >> x;
    n1.setX(x);
    cout << "Enter second number: " << endl;
    cin >> x;
    n1.setY(x);
    cout << "Enter third number: " << endl;
    cin >> x;
    n1.setZ(x);
    n2 = -n1;
    cout << "n2 = " << n2.getX() << " " << n2.getY() << " " << n2.getZ() << endl;
    cin.get();
    return 0;
}