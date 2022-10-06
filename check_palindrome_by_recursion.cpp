#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;
typedef unsigned long int ull;

char str[100000];

bool func(int i)
{
    int n = strlen(str);
    if (i >= n / 2)
    {
        return true;
    }

    if (str[i] != str[n - 1 - i])
    {
        return false;
    }

    return func(i + 1);
}

int main()
{
    cin >> str;

    if (func(0))
        cout << "palindrome";
    else
        cout << "not palindrome";
}