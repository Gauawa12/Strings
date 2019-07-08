
You are given a string S of lowercase characters, find the rank of the string amongst its permutations when sorted lexicographically. Return 0 if the characters are repeated in the string.
Note: Return the rank%1000000007 as answer as rank might overflow.

Input Format:
The first line of input contains an integer T denoting the number of test cases. Each test case consist of a string S in 'lowercase' only in a separate line.

Output Format:
For each testcase, in a new line, print the rank of the string amongst its lexicographically-sorted-permutations.

Your Task:
This is a function problem. You only need to complete the function findRank that takes string S as parameter and returns the rank.

Constraints:
1 ≤ T ≤ 50
1 ≤ |S| ≤ 15

Example:
Input:
3
abc
acb
caa
Output:
1
2
0
 

Explanation:
Testcase2:
Input : 'acb'
Output : 2
The lexicographically-sorted permutations with letters 'a', 'c', and 'b' : 
abc
acb
bac
bca
cab
cba
You can clearly see that acb occurs at position 2 in the permutations.


Sol:


int fact(int x)
{
    if(x==1 || x==0)
    {
        return 1;
    }
    return x*fact(x-1);
}

int findRank(string s) 
{   vector<int>v(125,0);
    for(int i=0;i<s.length();i++)
    {
        if(v[int(s[i])]==1)
        {
            return 0;
            break;
        }
        else
        {
            v[int(s[i])]=1;
        }
    }
    int c=0;
    while(next_permutation(s.begin(),s.end()))
    {
        c++;
    }
    int tp=fact(s.length());
    return (tp-c);
}

