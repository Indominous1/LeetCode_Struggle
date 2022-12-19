Problem Statement-
You are given an array of unique integers salary where salary[i] is the salary of the ith employee.
Return the average salary of employees excluding the minimum and maximum salary. Answers within 10-5 of the actual answer will be accepted.

Example 1:
Input: salary = [4000,3000,1000,2000]

Output: 2500.00000

Explanation:
> Minimum salary and maximum salary are 1000 and 4000 respectively.
> Average salary excluding minimum and maximum salary is (2000+3000) / 2 = 2500

Example 2:
Input: salary = [1000,2000,3000]

Output: 2000.00000

Explanation:
> Minimum salary and maximum salary are 1000 and 3000 respectively.
> Average salary excluding minimum and maximum salary is (2000) / 1 = 2000
 
Constraints:
-> 3 <= salary.length <= 100
-> 1000 <= salary[i] <= 106
-> All the integers of salary are unique.
  
Related Topics-
> Array
> Simulation
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    double average(vector<int>& s) {
        sort(s.begin(),s.end());
        int ma=s[s.size()-1];
        int mi=s[0];
        int c=0;
        double avg=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==ma || s[i]==mi)
                c++;
            else
            {
                avg+=s[i];
            }
        }
        c=s.size()-c;
        avg=avg/c;
        return avg;
    }
};

