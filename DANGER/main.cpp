#include <iostream>

using namespace std;

int remove_msb(int n) {
  int i = 1 ;
  while(i < n && i * 2 <= n) {
    i = i * 2;
  }
  return (n - i);
}

int read() {
  static int factor[7] = { 1, 10, 100, 1000, 10000, 100000, 1000000 };
  char s[5];
  cin >> s;
  return ((s[0] - '0') * 10 + (s[1] - '0')) * factor[(s[3] - '0')];
}

int main(int argc, char * argv[]) {
  while (int n = read()) {
    cout << (remove_msb(n) * 2 + 1) << endl;
  }
  return 0;
}
