#include<vector>
#include<iostream>
using namespace  std;


// creating a new function 
vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();

    for(int i=0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {2,7,11,13};
    int target = 21;

    vector<int>result = pairSum(nums, target);
    cout<<result[0] << ", "<< result[1]<<endl;

    return 0;
}