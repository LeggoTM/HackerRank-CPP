#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n{0}, q{0}, tempVal{0};
    cin >> n >> q;

    vector<vector<int>> a(n);

    int numberOfElements{0};

    for (int i = 0; i < n; i++)
    {
        cin >> numberOfElements;
        for (int j = 0; j < numberOfElements; j++)
        {
            cin >> tempVal;
            a[i].push_back(tempVal);
        }
    }

    int indexVector{0}, valueVector{0};
    for (int i = 0; i < q; i++)
    {
        cin >> indexVector >> valueVector;
        cout << a[indexVector][valueVector] << endl;
    }

    return 0;
}