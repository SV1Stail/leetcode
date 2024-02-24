#include <iostream>
#include <vector>



class Solution
{

public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) ;
        void MergeSortImpl(std::vector<int>& values, std::vector<int>& buffer, int l, int r) ;
void MergeSort(std::vector<int>& values) ;
    
};

void Solution::merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n){
    if (! nums2.empty())
    {
    size_t counter1 = 0,counter2 = 0, now_m = m+ counter1;
    std::vector<int> tmp_vec(nums1);
    for (size_t i = m, j = 0; i < n+m; i++)
    {
        nums1[i] = nums2[j++];
    }
        MergeSort(nums1);
    }
}
void Solution::MergeSortImpl(std::vector<int>& values, std::vector<int>& buffer, int l, int r) {
  if (l < r) {
    int m = (l + r) / 2;
    MergeSortImpl(values, buffer, l, m);
    MergeSortImpl(values, buffer, m + 1, r);

    int k = l;
    for (int i = l, j = m + 1; i <= m || j <= r; ) {
      if (j > r || (i <= m && values[i] < values[j])) {
        buffer[k] = values[i];
        ++i;
      } else {
        buffer[k] = values[j];
        ++j;
      }
      ++k;
    }
    for (int i = l; i <= r; ++i) {
      values[i] = buffer[i];
    }
  }
}

void Solution::MergeSort(std::vector<int>& values) {
  if (!values.empty()) {
    std::vector<int> buffer(values.size());
    MergeSortImpl(values, buffer, 0, values.size() - 1);
  }
}

int main(){
    Solution sol;
    std::vector<int> n({1,2,3,0,0,0});
        std::vector<int> n2 ({2,5,6});

    std::vector<int> n3({2,0});
        std::vector<int> n4 ({1});
    sol.merge(n3,1,n4,1);
    for (size_t i = 0; i < n3.size(); i++)
    {
        std::cout << n3[i] << " ";
    }
    
    return 0;
}






































