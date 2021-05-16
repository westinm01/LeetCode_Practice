/*Description: Given the array of integers nums, you will choose two different indices i and j of that array. Return the maximum value of (nums[i]-1)*(nums[j]-1).
*/

//runtime: 4ms (faster than 90% of submissions)
class Solution {
public:
    
    int maxProduct(vector<int>& nums) {
        unsigned long max=0;
        unsigned long secondMax=0;
        for(unsigned long i=0; i<nums.size();i++){
            unsigned long content=nums.at(i);
            if(content>max){
                secondMax=max;
                max=content;
            }
            else if(content>secondMax){
                secondMax=content;
            }
        }
        return (max-1)*(secondMax-1);
    }
};