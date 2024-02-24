#include <iostream>
#include <vector>



class Solution
{

public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) ;
        
    
};

void Solution::merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n){
    if (! nums2.empty())
    {
    size_t counter1 = 0,counter2 = 0, now_m = m+ counter1;
    std::vector<int> tmp_vec(nums1);
    
    for (int i = 0; i < m+n; i++)
    {
        if (nums1[counter1] > nums2[counter2] || counter1 == m){
            tmp_vec[i] = nums2[counter2];
            ++counter2;
        }else if (nums1[counter1] < nums2[counter2])
        {
            tmp_vec[i] = nums1[counter1];
            ++counter1;
        }else{
            tmp_vec[i] = nums2[counter2];
            ++counter2;
            tmp_vec[++i] = nums1[counter1];
            ++counter1;
        }
    }
    
    nums1 = tmp_vec;
    }
}

int main(){
    Solution sol;
    std::vector<int> n({1,2,3,0,0,0});
        std::vector<int> n2 ({2,5,6});

    std::vector<int> n3({1});
        std::vector<int> n4 ({});
    sol.merge(n3,1,n4,0);
    for (size_t i = 0; i < n3.size(); i++)
    {
        std::cout << n3[i] << " ";
    }
    
    return 0;
}






































