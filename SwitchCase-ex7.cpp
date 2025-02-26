// add your code here
// write some code that uses the switch cases command where the user
// inputs a number and the code outputs the number squared if the input
// is even and less than 10, outputs the number/2 if it is odd, and outputs
// “hahaha” otherwise
#include <iostream>
using namespace std;

int main(){
    int choice; int i;
    cout << "Enter a number: ";
    cin >> choice;
    if (choice % 2 == 0 && choice < 10) {
        i = 0;
      } 
    else if (choice % 2 == 1 && choice < 10) {
        i = 1;
      } 
    else {
        i = 2;
      }

    switch (i) {
        case 0: 
            cout << choice* choice << '\n';
            break;
        case 1:
            cout << choice / 2  << '\n';
            break;
        case 2:
            cout << "hahaha\n";
            break;
    }
}
  