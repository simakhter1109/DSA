#include <bits/stdc++.h>
using namespace std;

class GCD{
    public:
    int findGCD(vector <int> & nums) {

int n1 = *min_element(nums.begin(), nums.end());
int n2 = *max_element(nums.begin(), nums.end());

for(int i = n1; i >= 1; i--){
    if (n1 % i == 0 && n2 % i == 0){
        return i;
    }
}

return 1;
    }
};

int main() {
    int n;
    cin >> n;

    vector <int> nums(n);
    for(int i = 0; i < n; i ++){
        cin >> nums[i];
    }
    GCD obj;
    cout << obj.findGCD(nums);
    return 0;
}