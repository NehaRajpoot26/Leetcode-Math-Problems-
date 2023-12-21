Add Digits

Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

Example 1:
Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.

Example 2:
Input: num = 0
Output: 0

Approach
Initialize num to an integer variable named n.
Check if n belongs to a range between n=0 to n=9.If yes,then return n.
Else break the n with the help of for loop.Take the sum of n
into a variable named rev.
If rev belongs to a range between rev=0 to rev=9,then return rev.Else go to a recursive function call addDigits(rev).
  
Complexity
Time complexity:0 ms
Space complexity:6.59 MB

Solution in C++
  
class Solution {
public:
    int addDigits(int num) {
        int n=num,rev=0;

        if(n>=0 && n<=9)
        return n;
        else
        {
            for(int i=n;i>0;i=i/10)
            {
                int c=i%10;
                rev=rev+c;
            }
            if(rev>=0 && rev<=9)
            return rev;
            else
            return addDigits(rev);

        }
    }
};
