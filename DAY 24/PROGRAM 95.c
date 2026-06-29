#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longest(vector<string>& arr) {
    string longestStr = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i].length() > longestStr.length()) {
            longestStr = arr[i];
        }
    }
    return longestStr;
}

int main() {
    vector<string> arr = {"Geek", "Geeks", "Geeksfor", "GeeksforGeek", "GeeksforGeeks"};
    cout << longest(arr);
    return 0;
}
