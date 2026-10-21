#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct nrComplex {
    float a;
    float b;
};


float absoluteValue(float x) 
{
    return abs(x);
}


float absoluteValue(nrComplex x) 
{
    return sqrt(x.a * x.a + x.b * x.b);
}

int main()
{
    float r = 8.4f;
    float abs_r = absoluteValue(r);

    nrComplex c;
    c.a = 3.0f;
    c.b = 4.0f;
    float abs_c = absoluteValue(c);

    cout << abs_r << " " << abs_c << "\n";
    return 0;
}