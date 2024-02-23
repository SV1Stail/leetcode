#include <iostream>
#include <vector>
class Solution
{
private:
    /* data */
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) ;
};

std::vector<int> Solution::twoSum(std::vector<int>& nums, int target){
    for (size_t i = 0; i < nums.size(); i++)
    {
        for (size_t j = i+1; j < nums.size(); j++)
        {
            if ((nums[j] + nums[i]) == target)
            {
                return {(int)i,(int)j};
            }
            
        }
        
    }
    return {};
}


