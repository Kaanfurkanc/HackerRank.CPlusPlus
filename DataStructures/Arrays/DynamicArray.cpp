#include <bits/stdc++.h>

using namespace std;

// I completed following function
vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<vector<int>> arr(n, vector<int>());
    int lastAnswer = 0;
    vector<int> answers;
    
    for (int i = 0; i < queries.size(); i++)
    {
        int x = queries[i][1];
        int y = queries[i][2];
        int index = ((x ^ lastAnswer) % n);
        
        if (queries[i][0] == 1)
        {
            arr[index].push_back(y);
        }
        else if (queries[i][0] == 2)
        {
            lastAnswer = arr[index][y % size(arr[index])];
            answers.push_back(lastAnswer);
        }
    }
    return answers;
}

int main()
{
    int n, q;
    cin >> n >> q;
    vector<vector<int>> queries(q, vector<int>(3));
    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> queries[i][j];
        }
    }
    vector<int> result = dynamicArray(n, queries);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}