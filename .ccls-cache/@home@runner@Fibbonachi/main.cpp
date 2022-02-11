#include <iostream>
using namespace std;

//objective: show the Fibbonachi sequence using a loop

int main() {
  double n, prev1, prev2, newn;
  int i;

  cout << "enter n:" << endl;
  cin >> n;

  prev1 = 0;
  prev2 = 1;

  cout << prev1 << endl;
  cout << prev2 << endl;

  for ( i = 3; i <=n; i++) {
    newn = prev1 + prev2;
    prev1 = prev2;
    prev2 = newn;
    cout << newn << endl;
  }

  cout << "that is the Fibbonachi sequence to the " << n << "th term!" << endl;

  return 0;
}