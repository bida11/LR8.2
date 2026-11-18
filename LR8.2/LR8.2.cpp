#include <iostream>
#include <string>
using namespace std;

// Find the longest group of spaces in a string.
int maxConsecutiveSpaces(const string& s)
{
    int current = 0;
    int maximum = 0;
    for (int i = 0; i < (int)s.length(); i++) {
        if (s[i] == ' ') {
            current++;
            if (current > maximum)
                maximum = current;
        }
        else {
            current = 0;
        }
    }
    return maximum;
}

#ifndef UNIT_TEST
int main()
{
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    cout << "Maximum consecutive spaces: " << maxConsecutiveSpaces(s) << '\n';
    return 0;
}
#endif
