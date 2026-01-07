class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] != val){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;

        // int size = nums.size();
        // if(size == 0) return 0;
        // int j = -1;
        // for(int i = 0; i < size; i++)
        //     if(nums[i] == val){
        //         j = i;
        //         break;
        //     } 

        // if(j == -1) return size;

        // for(int i = j+1; i < size; i++){
        //     if(nums[i] != val){
        //         swap(nums[i], nums[j]);
        //         j++;
        //     }
        // }
        // return j;
    }
};