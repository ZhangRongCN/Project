#include <iostream>
using namespace std;
int rev(int n);
int main() {
    int n;
    int a;
    int b;
    int sum;
    cin >> n; 
    for(int i = 0; i < n; i++) {
        cin >> a;
        cin >> b;
        a = rev(a);
        b = rev(b);
        sum = a + b;
        sum = rev(sum);
        cout << sum << endl;
    }    
}

int rev (int n) {
    int a;
    int b = 0;
    a = n;
    int t;
    while(a > 0) {
        t = a % 10;
        a = a / 10;
        b = b * 10 + t;
    }
    return b;
} 
