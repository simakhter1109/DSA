#include<iostream>
#include<string>
using namespace std;
int main() {
  int marks[6];
  for(int i = 0; i < 6; i++)
  {
    cout << "Enter the marks of " << i << "th student" << endl;
    cin >> marks[i];
  }
  for (int i = 0; i <6; i ++)
  {
    cout << "Marks of " << i << "th student " << marks[i] << endl;
  }



int arr2d[2][3] = {
    {1,2,3},
    {3,5,7}
};
for (int i = 0; i<2; i++)
{
    for(int j= 0; j<3; j++)
    {
        cout << "The value at "<< i <<", " << j << " is " << arr2d[i][j] << endl;    }
}


// String
string name = "Sim Akhter";
cout << "The name is " << name << endl;
cout << "The length of name is " << name.length() << endl;
cout << "The name is " << name.substr(0,5) << endl;

  return 0;
}