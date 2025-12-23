// Program to count frequency of characters in a string
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Input string
    string s;
    cin >> s;

    // Count array for 26 lowercase letters
    int cnt[26] = {0};

    // Count frequency of each character
    for (char c : s) {
        cnt[c - 'a']++;
    }

    // Print characters with non-zero frequency
    for (int i = 0; i < 26; i++) {
        if (cnt[i] > 0) {
            cout << char(i + 'a') << " : " << cnt[i] << endl;
        }
    }
    return 0;
}
