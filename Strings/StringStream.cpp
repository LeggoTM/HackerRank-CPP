#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
    stringstream ss{str};
    vector<int> sepIntegers;
    char comma{','};
    int tempVal{0};
    while (ss >> tempVal)
    {
        sepIntegers.push_back(tempVal);
        ss >> comma;
    }
    return sepIntegers;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}