#include<bits/stdc++.h>

using namespace std;

class Box
{
private:
    int l, b, h;

public:
    Box()
    {
        l = 0;
        b = 0;
        h = 0;
    }

    Box(int length, int breadth, int height)
    {
        l = length;
        b = breadth;
        h = height;
    }

    Box(Box &B)
    {
        l = B.l;
        b = B.b;
        h = B.h;
    }

    int getLength() { return l; }

    int getBreadth() { return b; }

    int getHeight() { return h; }

    long long CalculateVolume() { return (long long)l * b * h; }

    friend bool operator<(Box &a, Box &b)
    {
        if(a.l < b.l || (a.b < b.b && a.l == b.l) || (a.h < b.h && a.b == b.b && a.l == b.l)) {
            return true;
        }
        else return false;
    }

    friend ostream& operator<< (ostream& out, Box& B) {
        out << B.l << " " << B.b << " " << B.h;
        return out;
    }
};