#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main() {
    int num1, num2;
    map<int, string> numbers;
    numbers[1] = "one";
    numbers[2] = "two";
    numbers[3] = "three";
    numbers[4] = "four";
    numbers[5] = "five";
    numbers[6] = "six";
    numbers[7] = "seven";
    numbers[8] = "eight";
    numbers[9] = "nine";
    
    cin>> num1;
    cin>> num2;
    
    for (int  i = num1; i <= num2; i++)
    {
        if (i >= 1 && i <= 9)
        {
            cout<< numbers[i] << endl;
        }
        else if (i % 2 == 0 && i > 9)
        {
            cout<< "even" << endl;
        }
        else if (i % 2 != 0 && i > 9)
        {
            cout<< "odd" << endl;
        }
    }
    return 0;
}