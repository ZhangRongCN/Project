#include <iostream>
#include <cstring>

using namespace std;

#define MAX_LENGTH 1000

int main(int argc, char * argv[]) {
  char a[MAX_LENGTH];
  char b[MAX_LENGTH];
  int freq1[26];
  int freq2[26];

  while (cin >> a) {
    cin >> b;

    memset(freq1, 0, sizeof(freq1));
    for (int i = 0, j = strlen(a); i < j; i++) {
      freq1[a[i] - 'a']++;
    }

    memset(freq2, 0, sizeof(freq2));
    for (int i = 0, j = strlen(b); i < j; i++) {
      freq2[b[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
      for (int j = 0, k = freq1[i] < freq2[i] ? freq1[i] : freq2[i]; j < k; ++j) {
        cout << (char) ('a' + i);
      }
    }
    cout << endl;
  }
  return 0;
}
