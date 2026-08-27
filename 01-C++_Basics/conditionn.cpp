#include <iostream>
using namespace std;
int main() {
    int marks;
    cout << "Enter the marks: ";
    cin >> marks;

    if(marks >= 90){
        cout << "A\n";
    }else if(marks >= 75 && marks < 90){
        cout << "B\n";
    }else if (marks >= 60 && marks < 75){
        cout << "C\n";
    }else {
        cout << "Failed";
    }
    return 0;
}
