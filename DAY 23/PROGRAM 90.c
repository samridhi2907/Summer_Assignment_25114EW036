#include <bits/stdc++.h>
using namespace std;

string firstRepChar(string& s)
{
    // Get the size of the input string
    int n = s.size();

    // Iterate through each character in the string
    for (int i = 0; i < n; i++) {

        // Check if the current character is a repeating
        // character
        for (int j = 0; j < i; j++) {
            if (s[i] == s[j]) {

                // Create a string to hold the repeating
                // character
                string result = "";
                result += s[i];
                return result;
            }
        }
    }

    // If no repeating character is found, return "-1"
    return "-1";
}

// Driver code
int main()
{
    string s = "geeksforgeeks";
    cout << firstRepChar(s);
    return 0;
}
