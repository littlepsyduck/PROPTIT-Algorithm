#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>

using namespace std;

void fast()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    fast();
    int n;
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int>::iterator it = v.begin();
    cout << *it <<endl;
}