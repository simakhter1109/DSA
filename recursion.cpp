#include <bits/stdc++.h>
using namespace std;

// PRINT NAMES N TIMES
 void printNames (int i, int n){
    if (i > n)
     return;     // BASE CONDITION

    cout << "SIM" << endl;

    printNames (i + 1, n);
 }
  
// PRINT 1 TO N
 void print1ToN(int i, int n){
    if(i > n)
    return;
    cout << i << " ";
    print1ToN(i + 1, n);
 }

// PRINT N TO 1
void printNTo1(int i, int n){
    if (i < 1)
    return ;
    cout << i << " ";
    printNTo1(i - 1, n);
}

// MAIN
 int main () {
    int n;
    cin >> n;

    // PRINT NAMES N TIMES
    // printNames (1, n);

    // PRINT 1 TO N
    // print1ToN(1, n);

    // PRINT N TO 1
    // printNTo1(n, n);
   
    return 0;
 }

