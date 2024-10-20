// Bruteforce approach to find the maximum sum of  array

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 5;
    int arr[] = {1,2,3,4,5};
    int maxSum = INT32_MIN;
    for(int st = 0; st < n; st++)
    {
        int currSum = 0;
        for(int end = st; end < n; end++){
            currSum += arr[end];
            maxSum = max(currSum, maxSum); // if value of max(a,b) a is greater then change value of b....
        }
    }
    cout<<"Maximum sum of array = " <<maxSum<<endl;
}