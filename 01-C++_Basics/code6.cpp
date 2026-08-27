#include <iostream>
using namespace std;
int main(){
    int a;
    cout<< "enter the number: \n";
    cin>> a;
    cout << (a%2 == 0? "Even\n" : "Odd\n");
    return 0;
}