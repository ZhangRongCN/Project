#include <iostream>
using namespace std;

int main(int argc, char * argv[]) {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a;
    int b;
    int c = 0;

    cin >> a;
    cin >> b;

    if(a == b) {
      if (a % 2 != 1) {
        c = a + b;
        cout << c << endl;

      } else {
        c = a + b - 1;
        cout << c << endl;
      }

    } else if (b == (a - 2) && a > 1) {
      if (a % 2 != 1) {
        c = a + b;
        cout << c << endl;

      } else {
        c = a + b - 1;
        cout << c << endl;
      }

    } else {
      cout << "No Number"  << endl;
    }
  }
  return 0;
}
