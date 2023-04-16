Problem Statement-
Given an array nums sorted in non-decreasing order, return the maximum between the number of positive integers and the number of negative integers.
  
In other words, if the number of positive integers in nums is pos and the number of negative integers is neg, then return the maximum of pos and neg.
Note that 0 is neither positive nor negative.

Example 1:
Input: nums = [-2,-1,-1,1,2,3]

Output: 3

Explanation:
- There are 3 positive integers and 3 negative integers. The maximum count among them is 3.

Example 2:
Input: nums = [-3,-2,-1,0,0,1,2]

Output: 3

Explanation: 
- There are 2 positive integers and 3 negative integers. The maximum count among them is 3.

Example 3:
Input: nums = [5,20,66,1314]

Output: 4

Explanation: 
- There are 4 positive integers and 0 negative integers. The maximum count among them is 4.

Constraints:
-> 1 <= nums.length <= 2000
-> -2000 <= nums[i] <= 2000
-> nums is sorted in a non-decreasing order.
  
Related Topics-
> Array
> Binary Search
> Counting
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    int maximumCount(vector<int>& n) {
       if(n[0]==n[n.size()-1] && n[0]==0)     // If all of the elements are zero
       return 0;

       int ne=0,p=0,r=n.size()-1;
       while(p<r)                          // Find First Positive Number Using Binary Search
       {
           int mid=(p+r)/2;
           if(n[mid]>0)
           r=mid;
           else
           p=mid+1;
       }
       cout<<r<<" ";
       r=n.size()-1;
       while(ne<r)                   // Find Last Negetive Number Using Binary Search
       {
           int mid=(ne+r)/2;
           if(n[mid]<0)
           ne=mid+1;
           else
           r=mid;
       }
       p=n.size()-p;
       if(ne==n.size()-1)
       ne++;
       cout<<" "<<p;
       return max(p,ne);
    }
};

