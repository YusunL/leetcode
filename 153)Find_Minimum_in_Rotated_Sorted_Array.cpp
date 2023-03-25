/*
23/03/24
*/

class Solution {
public:
    int findMin(vector<int>& nums) {
        int front, back, mid;
        front = 0;
        back = nums.size() - 1;

        if (nums[front] < nums[back]) return nums[front]; //if rotation not happened

        while (back> front+1) {// we have found the starting point if back and front are neighbors
            mid = (front + back) / 2;
            if (nums[mid] < nums[front]) back = mid;
            else if (nums[mid] > nums[back]) front = mid;
        }

        return nums[back];
    }
};
