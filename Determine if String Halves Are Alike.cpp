Problem Statement-
You are given a string s of even length. Split this string into two halves of equal lengths, and let a be the first half and b be the second half.

Two strings are alike if they have the same number of vowels ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'). Notice that s contains uppercase and lowercase letters.
Return true if a and b are alike. Otherwise, return false.

Example 1:
Input: s = "book"

Output: true

Explanation: 
> a = "bo" and b = "ok". a has 1 vowel and b has 1 vowel. Therefore, they are alike.

Example 2:
Input: s = "textbook"

Output: false

Explanation: 
> a = "text" and b = "book". a has 1 vowel whereas b has 2. Therefore, they are not alike.
Notice that the vowel o is counted twice.
 
Constraints:
-> 2 <= s.length <= 1000
-> s.length is even.
-> s consists of uppercase and lowercase letters.
  
Related Topics-
> String 
> Counting

   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size();
        int cot1=0,cot2=0;
        string s1=s.substr(0,(n/2));
        string s2=s.substr(n/2);
        for(int i=0;i<n/2;i++)
        {
            if(s1[i]=='a'|| s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u' || s1[i]=='A' || s1[i]=='E' || s1[i]=='I' || s1[i]=='O' || s1[i]== 'U')
            {
                cot1++;
            }
            if(s2[i]=='a'|| s2[i]=='e' || s2[i]=='i' || s2[i]=='o' || s2[i]=='u' || s2[i]=='A' || s2[i]=='E' || s2[i]=='I' || s2[i]=='O' || s2[i]== 'U')
            {
                cot2++;
            }
        }
        if(cot1==cot2)
            return true;
        else
            return false;
    }
};

