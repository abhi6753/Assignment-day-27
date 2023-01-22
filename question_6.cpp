/*6. Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings.
b) == to compare 2 strings.*/
#include <iostream>
#include <cstring>
using namespace std;
class CString
{
  char str[100];

public:
  CString()
  {
    str[0] = '\0';
  }
  void setStr(char Str[])
  {
    strcpy(str, Str);
  }
  void displayStr()
  {
    cout << str;
  }
  CString operator+(char *s) // string + string literals
  {
    CString temp;
    strcpy(temp.str, str);
    int len = strlen(temp.str);
    int i = len, j = 0;
    while (1)
    {
      if (s[j] == '\0')
      {
        temp.str[i] = '\0';
        break;
      }
      else
      {
        temp.str[i] = s[j];
      }
      i++, j++;
    }
    return temp;
  }

  CString operator+(CString c2) // string + string
  {
    CString temp;
    int len;
    strcpy(temp.str, str);
    len = strlen(temp.str);
    int i = len;
    int j = 0;
    while (1)
    {
      if (str[j] == '\0')
      {
        temp.str[i] = '\0';
        break;
      }
      temp.str[i] = str[j];
      i++, j++;
    }
    return temp;
  }
  bool operator==(CString c2)
  {
    bool t;
    t = strcmp(str, c2.str);
    return !t;
  }

  friend CString operator+(char *, CString);
};

CString operator+(char *s, CString c2) // string literals + string
{
  CString temp;
  int i = 0;
  while (s[i])
  {
    temp.str[i] = s[i];
    i++;
  }
  int len;
  len = strlen(temp.str);
  i = len;
  int j = 0;
  while (1)
  {
    if (c2.str[j] == '\0')
    {
      temp.str[i] = '\0';
      break;
    }
    temp.str[i] = c2.str[j];
    i++, j++;
  }
  return temp;
}
int main()
{
  CString str1, str2, str3;
  char str[100];
  cout << "Enter first string:" << endl;
  cin.getline(str, 100);
  str1.setStr(str);
  cout << "Enter second string:" << endl;
  cin.getline(str, 100);
  str2.setStr(str);
  str3 = str1 + str2; //  string + string
  str3.displayStr();
  str3 = str1 + "Abhi"; // string + string literals
  str3.displayStr();
  str3 = "Abhi" + str1; // string literals+string
  str3.displayStr();
  if (str1 == str2)
  {
    cout << "Both string are same" << endl;
  }
  else
  {
    cout << "Both string are not same" << endl;
  }
  cin.get();
  return 0;
}