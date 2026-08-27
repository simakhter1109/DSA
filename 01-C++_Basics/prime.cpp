#include <bits/stdc++.h>
using namespace std;
class Prime{
    public:
    bool isPrime (int n){
        int count = 0;
        for(int i = 1; i <= sqrt(n); i ++){
            if(n % i == 0){
                count ++;

                if((n/i) != i ){
                    count ++;
                }
            }
        }
        return count == 2;
    }
};

int main() {
    int n;
    cin >> n;

    if(Prime().isPrime(n)){
        cout << "Prime";
    }
    else{
        cout << "Not Prime";
    }
    return 0;
}