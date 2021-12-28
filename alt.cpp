#include <iostream>
#include <fstream>
#include <cstdio>
#include <set>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <string>
#include <map>
#include <cstring>

using namespace std;

#define NextLine() { char c = getchar(); while (c != 10 && c != EOF) { c = getchar(); } }

string s;

void Load()
{
    cin >> s;
}

char ToLower(char c)
{
    if ((c >= 'A') && (c <= 'Z')) return (char)((int)c - 'A' + 'a');
    else return c;
}

int Vowel(char c)
{
    c = ToLower(c);
    return (c == 'a') || (c == 'o') || (c == 'i') || (c == 'y') || (c == 'u') || (c == 'e');
}

void Solve()
{
    string t = "";
    int i;
    for (i = 0; i < s.length(); i++)
    {
        if (Vowel(s[i])) continue;
        t += ".";
        t += ToLower(s[i]);
    }
    cout << t;
}

int main()
{
    Load();
    Solve();
    return 0;
}
