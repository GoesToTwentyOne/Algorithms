#include <bits/stdc++.h>
using namespace std;
bool palindrome(string n) {
    int l = 0;
    int r = n.size() - 1; 
    while (l < r) { 
        if (n[l] != n[r]) {
            return false;
        }
        l++;
        r--;
    }
    return true;
}
int main() {
    string n;
    cin >> n;
    if (palindrome(n) == true) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
