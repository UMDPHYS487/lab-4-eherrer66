// Add your code here
#include <iostream>
using namespace std;

int main() {
    int i; int ans;
    ans = 1;
    for (i = 1; i <= 10; i++) {
        ans = ans * i;
        //cout << "loop count is " << i << endl;
        cout << "factorial of " << i << " is " << ans << endl;
    }
}