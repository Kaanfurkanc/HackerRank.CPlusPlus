#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    vector<int> vec;
    int size;
    
    cin>>size;
    for (int i = 1; i <= size; i++)
    {
        int number;
        cin>>number;
        vec.push_back(number);
    }
    
    //Query1
    int x;
    cin>> x;
    vec.erase(vec.begin() + x -1);
    
    //Query2
    int a, b;
    cin>>a;
    cin>>b;
    vec.erase(vec.begin() + a - 1, vec.begin() + b - 1);
    
    cout<< vec.size()<< endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout<< vec[i] << " ";
    }
    return 0;
}
