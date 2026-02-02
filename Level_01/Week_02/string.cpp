#include <bits/stdc++.h>
using namespace std;

int main() {
    // string a = "Hello ";
    // string b = "World ";
    // cout << a+b << '\n';
    // cout << (a==b) << '\n';
    // string c = a+b;
    // string d = "HelloW";
    // cout << c.compare(d) << '\n';
    // cout << c.substr(0,5);
    string s = "Hello World";

    // length
    size_t len = s.length();

    // concatenation
    string a = "Hello ", b = "World";
    string res = a + b; // "Hello World"

    // Equality
    a = "Test", b = "Test";
    bool equalres = (a == b); // true
    int cmp = a.compare(b); // = 0 if equal, < 0 is a is smaller, > 0 if a is larger

    // Substring extraction
    string sub = s.substr(1, 4); //ello, first argument is starting index and second is length

    // Substring search
    size_t pos = s.find("orl"); // First index where "orl" is present in string. If not found returns string::npos

    // Replacing substring
    s.replace(0, 3, "Hi"); // Replaces 3 characters from index 0 with "Hi"

    // Inserting substring
    s.insert(6, "new "); // Hello new World, Inserts the substring at index 6

    // Iterators
    // s.begin() and s.end();

    // Erase
    s.erase(2, 3); // Erases 3 characters starting from index 2
    s.erase(s.begin() + 1, s.begin() + 5); // Erases all characters in between indices [1, 5)
}
