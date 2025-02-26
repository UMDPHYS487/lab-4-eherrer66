// Add your code here
#include <iostream>
using namespace std;

int factorial (int a) {
  int i; int ans;
  ans = 1;
  for (i = 1; i <= a; i++) {
      ans = ans * i;
      //cout << "loop count is " << i << endl;
      //cout << "factorial of " << i << " is " << ans << endl;
  }
  return ans;
}

int main() {
      // Variable to store data given by cin
    int inputs; int answers;
    // Take input using cin
    cout << "Please enter an integer value: \n";
    cin >> inputs; 
    
    answers = factorial(inputs);
    cout << "The value you entered is " << inputs << " and its factorial is " << answers << "!" << endl;
    return 0;
}
