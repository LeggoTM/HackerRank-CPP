#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    int noOfQueries{0};
    cin >> noOfQueries;

    set<int> queries;
    int queryType{0};
    int userInput{0};
    for (int i = 0; i < noOfQueries; i++)
    {
        cin >> queryType >> userInput;
        if (queryType == 1)
        {
            queries.insert(userInput);
        }
        else if (queryType == 2)
        {
            queries.erase(userInput);
        }
        else if (queryType == 3)
        {
            if (queries.find(userInput) != queries.end())
            {
                cout << "Yes\n";
            }
            else
                cout << "No\n";
        }
    }
    return 0;
}
