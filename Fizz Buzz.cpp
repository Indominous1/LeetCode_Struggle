Problem Statement-
Given an integer n, return a string array answer (1-indexed) where:
 - answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
 - answer[i] == "Fizz" if i is divisible by 3.
 - answer[i] == "Buzz" if i is divisible by 5.
 - answer[i] == i (as a string) if none of the above conditions are true.
 
Example 1:
Input: n = 3

Output: ["1","2","Fizz"]

Example 2:
Input: n = 5

Output: ["1","2","Fizz","4","Buzz"]

Example 3:
Input: n = 15

Output: ["1","2","Fizz","4","Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz"]
 
Constraints:
1 <= n <= 104

Related Topics-
> Math
> String
> Simulation
  
   -----------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> v;
        for(int i=1;i<=n;i++)
        {
            if(i%3==0 && i%5==0)
            {
                string d="FizzBuzz";
                v.push_back(d);
            }
            else if(i%5==0)
            {
                string d="Buzz";
                v.push_back(d);
            }
            else if(i%3==0)
            {
                string d="Fizz";
                v.push_back(d);
            }
            else
            {
                string d=to_string(i);
                v.push_back(d);
            }
        }
    return v;}
};

