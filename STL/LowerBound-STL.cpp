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

    vector<int> sortedIntegers{};
    for (int i = 0; i < noOfIntegers; i++)
    {
        int userInput{0};
        cin >> userInput;
        sortedIntegers.push_back(userInput);
    }

    int noOfQueries{0}, value{0};
    cin >> noOfQueries;

    for (int i = 0; i < noOfQueries; i++)
    {
        cin >> value;
        vector<int>::iterator low = lower_bound(sortedIntegers.begin(), sortedIntegers.end(), value);
    }

    return 0;
}
