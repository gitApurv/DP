#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> m;

int ways(int c, int t)
{
    if (c > t)
        return 0;
    else if (c == t)
        return 1;
    else if (m[c])
        return m[c];
    int way = ways(c + 1, t) + ways(c + 2, t);
    m[c] = way;
    return m[c];
}

int main()
{
    cout << ways(0, 5);
}