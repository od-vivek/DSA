#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long long n = 0;
        int sign = x >= 0 ? 1 : -1;

        x = abs(x);

        while(x > 0){
            int digit = x % 10;
            n = n*10 + digit;

            x = x / 10;
        }
        if(n > INT_MAX || n < INT_MIN) return 0;
        return n*sign;
    }
};

int main() {
    Solution sol;
    int x;
    cout << "Enter an integer: ";
    cin >> x;
    cout << "Reversed integer: " << sol.reverse(x) << endl;
    return 0;
}
