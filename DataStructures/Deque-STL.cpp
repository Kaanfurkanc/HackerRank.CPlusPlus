#include <iostream>
#include <deque>
#include <iterator>
#include <algorithm>

using namespace std;


void printKMax(int arr[], int n, int k){
    
    deque<int> tempList;
    deque<int> maxNumbers;
    int maxValue, i = 0;
    
    maxValue = arr[0];
    i = 0;
    while (i < k)
    {
        if (maxValue < arr[i]){
            maxValue = arr[i];
        }
        tempList.push_back(arr[i]);
        i++;
    }
    
    maxNumbers.push_front(maxValue);
    i = k;
    while (i < n)
    {
        tempList.pop_front();
        tempList.push_back(arr[i]);
        if (maxValue == arr[i - k]){
            maxValue = *max_element(tempList.begin(), tempList.end());
        }
        else {
            maxValue = max(maxValue, arr[i]);
        }
        maxNumbers.push_back(maxValue);
        i++;
    }
    copy(maxNumbers.begin(), maxNumbers.end(), ostream_iterator<int>(cout, " ")); cout << endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}

/*
Description: 
    challange link: https://www.hackerrank.com/challenges/deque-stl/problem

    In this problem, you are given an array of N integers. You need to find the maximum element for each and every contiguous subarray of size K.

    Given a set of arrays of size N and an integer K , you have to find the maximum integer for each and every contiguous subarray of size K for each of the given arrays.

*/