// Add your code here
#include <iostream>
using namespace std;

int factorial (int a) {
    int i; int ans;
    ans = 1;
    for (i = 1; i <= a; i++) {
        ans = ans * i;
        //cout << "loop count is " << i << endl;
        cout << "factorial of " << i << " is " << ans << endl;
    }
}

int main() {
    int final;
    final = factorial(10);
}