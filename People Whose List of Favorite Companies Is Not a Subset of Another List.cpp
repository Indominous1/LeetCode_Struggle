Problem Statement-
Given the array favoriteCompanies where favoriteCompanies[i] is the list of favorites companies for the ith person (indexed from 0).
Return the indices of people whose list of favorite companies is not a subset of any other list of favorites companies. You must return the indices in increasing order.

Example 1:
Input: favoriteCompanies = [["leetcode","google","facebook"],["google","microsoft"],["google","facebook"],["google"],["amazon"]]

Output: [0,1,4] 

Explanation: 
- Person with index=2 has favoriteCompanies[2] = ["google","facebook"] which is a subset of favoriteCompanies[0] = ["leetcode","google","facebook"] corresponding to the person 
  with index 0. 
- Person with index=3 has favoriteCompanie[3] = ["google"] which is a subset of favoriteCompanies[0] = ["leetcode","google","facebook"] and 
  favoriteCompanies[1] = ["google","microsoft"]. 
- Other lists of favorite companies are not a subset of another list, therefore, the answer is [0,1,4].

Example 2:
Input: favoriteCompanies = [["leetcode","google","facebook"],["leetcode","amazon"],["facebook","google"]]

Output: [0,1] 

Explanation:
- In this case favoriteCompanies[2] = ["facebook","google"] is a subset of favoriteCompanies[0] = ["leetcode","google","facebook"], therefore, the answer is [0,1].
 
Example 3:
Input: favoriteCompanies = [["leetcode"],["google"],["facebook"],["amazon"]]

Output: [0,1,2,3]

Constraints:
-> 1 <= favoriteCompanies.length <= 100
-> 1 <= favoriteCompanies[i].length <= 500
-> 1 <= favoriteCompanies[i][j].length <= 20
-> All strings in favoriteCompanies[i] are distinct.
-> All lists of favorite companies are distinct, that is, If we sort alphabetically each list then favoriteCompanies[i] != favoriteCompanies[j].
-> All strings consist of lowercase English letters only.
  
Related Topics-
> Array
> Hash Table
> String
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    vector<int> getCommon(vector<int>&vec1,vector<int>&vec2,int tt)
    {
        vector<int> res;
        int i=0,j=0;
        while(i<vec1.size() && j<vec2.size())
        {
            if(vec1[i] == vec2[j])
            {
                if(vec1[i] != tt)
                    res.push_back(vec1[i]);
                i++;
                j++;
            }
            else if(vec1[i] < vec2[j])
            {
                i++;
            }
            else
                j++;
        }
        return res;
    }
    
    bool get(map<string,vector<int>>& hash, vector<string>&strs,int target )
    {
        vector<int> res;
        for(auto&obj:hash[strs[0]])
        {
            if(obj!= target)
                res.push_back(obj);
        }
        
        for(int i=1;i<strs.size();i++)
        {
            res = getCommon(res,hash[strs[i]],target);
            if(res.empty())
                return false;
        }
        return !res.empty();
    }
    
    vector<int> peopleIndexes(vector<vector<string>>& favoriteCompanies) {
        map<string,vector<int>>hash;
        for(int i=0;i<favoriteCompanies.size();i++)
        {
            for(auto&obj:favoriteCompanies[i])
            {
                if(hash.find(obj) == hash.end())
                {
                    vector<int> vec;
                    vec.push_back(i);
                    hash[obj] = vec;
                }
                else
                    hash[obj].push_back(i);
            }
        }
        
        vector<int>res;
        for(int i=0;i<favoriteCompanies.size();i++)
        {
            if(!get(hash,favoriteCompanies[i],i))
                res.push_back(i);
        }
        return res;
    }
};
  

  
