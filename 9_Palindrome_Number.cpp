#include <iostream>
#include <string>

class Solution
{
public:
    bool isPalindrome(int x) {
        if ( x < 0 ) return 0;
        std::string str = std::to_string(x);
        int  sz = str.size();
        for (int i = 0; i < sz; i++)
        {
            if (str[i] != str[sz -1 - i])
            {
                return 0;
            }
            
        }
        


        for (size_t i = 0; i < str.size(); i++)
        {
            std::cout << str[i];
        }
        std::cout << std::endl;
     return 1;   
    }
};

int main(){
    Solution sol;
    
    std::cout << sol.isPalindrome(100) << std::endl;
    std::cout << sol.isPalindrome(121) << std::endl;
    std::cout << sol.isPalindrome(-121) << std::endl;
    std::cout << sol.isPalindrome(100) << std::endl;
    std::cout << sol.isPalindrome(1001) << std::endl;



    return 0;
}
