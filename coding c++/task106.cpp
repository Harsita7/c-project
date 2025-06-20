#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int absN = abs(n);
    int i = 0;
    int ans = 0;
    while (absN != 0) {
        int bit = absN & 1;
        ans = ((bit * pow(10, i)) + ans);
        absN = absN >> 1;
        i++;
    }
}