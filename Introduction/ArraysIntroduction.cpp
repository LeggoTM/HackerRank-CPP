#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int sizeOfArray{0};
    cin >> sizeOfArray;
    int userArray[sizeOfArray]{};
    for (int i = 0; i < sizeOfArray; i++)
    {
        cin >> userArray[i];
    }
    for (int i = sizeOfArray - 1; i >= 0; i--)
    {
        cout << userArray[i] << " ";
    }

    return 0;
}
