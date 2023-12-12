#include <bits/stdc++.h>
using namespace std;

vector<int> v;

void printVector()
{
    for (int i : v) cout << i << " ";
    cout << "\n";
    return;
}

void makePermutation(int n, int r, int depth)
{
    if (depth == r)
    {
        printVector();
        return;
    }

    for (int i = depth; i < n; i++)
    {
        swap(v[i], v[depth]);
        makePermutation(n, r, depth + 1);
        swap(v[i], v[depth]);
    }
    return;
}

int main()
{
    for (int i = 1; i <= 3; i ++) v.push_back(i);
    makePermutation(3, 3, 0);
    return 0;
}