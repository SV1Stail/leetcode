#include <iostream>
#include <vector>
 // удалить повторяющиеся элементы из сортированного массива
// должен быть отсортирован
class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        if (!nums.empty()){
        int sz = nums.size();
            if (sz == 1) return 1;
        int tmp = nums[0], k = 1;
        for (int i = 1; i < sz; i++)
        {
            if (nums[i] != tmp)
            {
                tmp = nums[i];
                nums[k++] = tmp;
                
            }
        }
        return k;
        } 
        return 0;
    }
};

int main(){
    Solution sol;
    // std::vector<int> n({0,1,2,2,3,0,4,2});
        std::vector<int> n ({1,1,2,2,2,3,3,4});

    int x = sol.removeDuplicates(n);
    for (size_t i = 0; i < x; i++)
    {
        std::cout << n[i] << " ";
    }

    std::cout << "\n" << x << std::endl;
    return 0;
}
