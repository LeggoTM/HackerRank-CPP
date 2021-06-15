#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int noOfIntegers{0};
    cin >> noOfIntegers;
    vector<int> Integers{};

    for (int i = 0; i < noOfIntegers; i++)
    {
        int IntegerValue{0};
        cin >> IntegerValue;
        Integers.push_back(IntegerValue);
    }

    sort(Integers.begin(), Integers.end());

    for (int i = 0; i < Integers.size(); i++)
    {
        cout << Integers[i] << " ";
    }

    return 0;
}
