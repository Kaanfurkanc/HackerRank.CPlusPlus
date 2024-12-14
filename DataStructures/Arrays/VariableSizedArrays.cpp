#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/*
Consider an n-element array, a, where each index i in the array contains a reference 
to an array of k_i integers (where the value of k_i varies from array to array). 
See the explanation section below for a diagram.

Given a, you must answer q queries. Each query is in the format i j, where i denotes 
an index in array a and j denotes an index in the array located at a[i]. 
For each query, find and print the value of element j in the array at location a[i] 
on a new line.

Input Format:
1. The first line contains two space-separated integers denoting the respective values of:
   n (the number of variable-length arrays) and q (the number of queries).
2. Each of the n subsequent lines contains a space-separated sequence in the format:
   k a[i][0] a[i][1] ... a[i][k-1], describing the k-element array located at a[i].
3. Each of the q subsequent lines contains two space-separated integers describing the 
   respective values of:
   i (an index in array a) and j (an index in the array referenced by a[i]) for a query.
*/

vector<int*> getLists(int n)
{
    vector<int*> lists;
    
    for (int i = 0; i < n; i++)
    {
        int size;
        cin>>size;
        int* arr = new int[size];
        for (int j = 0; j < size; j ++)
        {
            cin>>arr[j];
        }
        lists.push_back(arr);
    }
    return lists;
}

vector<int*> getQueries(int q)
{
    vector<int*> queries;
    
    for (int i = 0; i < q; i++)
    {
        int* arr = new int[2];
        for (int j = 0; j < 2; j ++)
        {
            cin>>arr[j];
        }
        queries.push_back(arr);
    }
    
    return queries;
}

int main() {
    int n, q;
    
    cin>>n;
    cin>>q;
    
    vector<int*> lists = getLists(n);
    vector<int*> queries = getQueries(q);
    
    for (int i = 0; i < q; i++)
    {
        cout<<lists[queries[i][0]][queries[i][1]]<<endl;
    }
    for (int* arr : lists)
    {
        delete[] arr;
    }
    lists.clear(); 
    return 0;
}

