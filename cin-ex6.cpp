// your code here
#include <iostream>
using namespace std;

int y;
int *x;

int main() {
    y = 15;
    x = &y;
    cout << *x << "\n";
    y = 20;
    cout << *x << "\n";
}