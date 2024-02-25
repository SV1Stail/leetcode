#include <iostream>
#include <vector>
class Solution
{
private:
    /* data */
public:
        int removeElement(std::vector<int>& nums, int val) ;
        // int removeElement_impl(std::vector<int>& nums, int val, int size, int i) ;
};
int Solution::removeElement(std::vector<int>& nums, int val) {
    if (!nums.empty()){
        int k = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                nums[k++] = nums[i];
            }
            
        }
    return k;
    }
    return 0;

}
/**
 * @return кол-во элементов не равных  val
// */
// int Solution::removeElement(std::vector<int>& nums, int val) {
//     if (!nums.empty()){
//         int k = 0, size = nums.size();
//         for (int i = size -1 ; i >= 0; i--)
//         {
//             if (nums[i] != val)
//             {
//                 break;
//             }else{
//                 size-=1;
//             }
            
//         }
        
//         for (int i = 0; i < size; i++)
//         {
//             if (nums[i] == val)
//             {
//                 int x = removeElement_impl(nums, val, size, i);
//                 if (x == -1) break;
//                 int tmp = nums[i];
//                 nums[i] = nums[x];
//                 nums[x] = tmp;
//                 size -=1;
//             }
//                 ++k;
            
//         }
//         return k;
//     }
// return 0;
// }
// int Solution::removeElement_impl(std::vector<int>& nums, int val, int size, int i) {
//     for (int j = size -1; j >= 0; j--)
//     {
//         if (i == j) break;
//         if (nums[j] != val) return j;
//     }
//     return -1;
// }

int main(){
    Solution sol;
    // std::vector<int> n({0,1,2,2,3,0,4,2});
        std::vector<int> n ({1,1,1,1});

    int x = sol.removeElement(n,1);
    for (size_t i = 0; i < n.size(); i++)
    {
        std::cout << n[i] << " ";
    }
    std::cout << "\n" << x << std::endl;
    return 0;
}