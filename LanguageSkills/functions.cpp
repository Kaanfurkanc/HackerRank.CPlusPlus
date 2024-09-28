#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int max = 0;
    
    max = a;
    if (max < b)
    {
        max = b;
    }
    if (max < c)
    {
        max = c;
    }
    if (max < d)
    {
        max = d;
    }
    return max;
}
int main() {
    int a, b, c, d;
    int max;
    
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    
    max = max_of_four(a, b, c, d);
    cout<< max;
    return 0;
}