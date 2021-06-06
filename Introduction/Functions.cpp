#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int max1{0}, max2{0}, max{0};
    (a >= b) ? max1 = a : max1 = b;
    cout << max1 << endl;
    (c >= d) ? max2 = c : max2 = d;
    (max1 >= max2) ? max = max1 : max = max2;
    return max;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);

    return 0;
}