#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> m;

int fib(int n)
{
    if (n <= 1)
        return n;
    else if (m[n])
        return m[n];
    int num = fib(n - 1) + fib(n - 2);
    m[n] = num;
    return m[n];
}

int main()
{
    cout << fib(3);
}