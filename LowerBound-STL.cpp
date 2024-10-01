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
    
    for (int i = 0; i < size; i++)
    {
        int number;
        cin>>number;
        vec.push_back(number);
    }
    
    int queryNumber;
    cin>>queryNumber;
    
    while (queryNumber > 0) {
        
        int query;
        cin>>query;
        
        auto iter = lower_bound(vec.begin(), vec.end(), query);
        int index = distance(vec.begin(), iter) + 1;
        
        if (*iter == query) {
            
            cout<< "Yes "<< index << endl;
        }
        else {
            cout<< "No " << index << endl;
        }
        queryNumber--;
    }
    
    return 0;
}
