#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n{0};
    cin >> n;
    vector<int> Integers{};
    for (int i = 0; i < n; i++)
    {
        int userInput{0};
        cin >> userInput;
        Integers.push_back(userInput);
    }

    int remPos{0};
    cin >> remPos;
    Integers.erase(Integers.begin() + (remPos - 1));

    int remRangeStart{0};
    int remRangeEnd{0};
    cin >> remRangeStart >> remRangeEnd;

    Integers.erase(Integers.begin() + (remRangeStart - 1), Integers.begin() + (remRangeEnd - 1));

    cout << Integers.size() << endl;
    for (int i = 0; i < Integers.size(); i++)
    {
        cout << Integers.at(i) << " ";
    }

    return 0;
}
