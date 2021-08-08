#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
   int noOfQueries{0};
    cin >> noOfQueries;

    int queryType{0};
    string queryString{"Default"};
    int queryInput{0};
    map<string, int>marks;
    for (int i = 0; i < noOfQueries; i++) {
        cin >> queryType;
        cin >> queryString;
        if (queryType == 1) { 
            cin >> queryInput;
            marks[queryString] += queryInput;
        }
        else if (queryType == 2) {
            marks.erase(queryString);
        }
        else if (queryType == 3) {
            if(marks.find(queryString) != marks.end()) {
                cout << marks[queryString] << "\n";
            }
            else
                cout << 0 << "\n";
        }
                
    }   
    return 0;
}



