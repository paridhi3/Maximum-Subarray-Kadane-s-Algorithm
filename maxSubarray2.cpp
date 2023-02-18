// KADANE'S ALGORITHM
#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int max_so_far = INT_MIN;
    int max_ending_here = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        max_ending_here += nums[i];
        if (max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
        }
        if (max_ending_here < 0)
        {
            max_ending_here = 0;
        }
    }
    return max_so_far;
}

int main()
{
    vector<int> vec;
    vec = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    for (int i : vec)
    {
        cout << i << "  ";
    }
    cout << endl;
    cout << maxSubArray(vec);
    return 0;
}
