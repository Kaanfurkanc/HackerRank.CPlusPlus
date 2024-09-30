#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size;
    cin>> size;
    
    vector<int> vec;
    
    for (int i = 1; i <= size; i++)
    {
        int number;
        cin>>number;
        vec.push_back(number);
    }
    
    sort(vec.begin(), vec.end());
    
    for (int i = 0; i < size; i++)
    {
        cout << vec[i] << " ";
    }
     
    return 0;
}
