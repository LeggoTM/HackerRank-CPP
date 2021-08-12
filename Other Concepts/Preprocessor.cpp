/* Enter your macros here */
#define INF 10000000
#define toStr(resultString) #resultString
#define io(userInput) cin >> userInput
#define FUNCTION(operation, op)   \
    void operation(int &a, int b) \
    {                             \
        if (b op a)               \
            a = b;                \
    }
#define foreach(vector, i) for (int i = 0; i < vector.size(); i++)

#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    foreach (v, i)
    {
        io(v)[i];
    }
    int mn = INF;
    int mx = -INF;
    foreach (v, i)
    {
        minimum(mn, v[i]);
        maximum(mx, v[i]);
    }
    int ans = mx - mn;
    cout << toStr(Result =) << ' ' << ans;
    return 0;
}