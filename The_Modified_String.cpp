

Ishaan is playing with strings these days. He has found a new string. He wants to modify it as per the following rules :

    The string should not have three consecutive same characters (Refer example for explanation).
    He can add any number of characters anywhere in the string. Find the minimum number of characters which Ishaan must insert in the string.

Input Format: 
First line of input contains a single integer T denoting the number of test cases.
The only line of each test case contains a string S consisting of lowercase English Alphabets.

Output Format: 
For each test case, in a new line,  print the required answer in a new line.

Your Task:
This is a function problem. You only need to complete the function modified that returns the answer.

Constraints : 
1 <= T <= 200
1 <= Length of S <= 103

Example : 
Input : 
3
aabbbcc
aaaaa
abcddee
Output : 
1
2
0

Explanation : 
Case 1 : 
aabbbcc
3 b's occur consecutively, we add a 'd',
aabbdbcc

Case 2 : 
aaaaa
5 a's occur consecutively, we need to add 2 'b',
aababaa

Case 3 : 
abcddee
No character occurs 3 times, so no need to add anything.


Sol:

// Precomputation of values to be inserted 

int modified (string a){
    int n=a.length();
    n++;
    int v[n];
    memset(v,0,sizeof(v));
    for(int i=3;i<n;i++)
    {
        v[i]=1+v[i-2];
    }
    int ans=0;
    char c=a[0];
    int count=1;
    a=a+".";
    for(int i=1;i<n;i++)
    {
        if(a[i]==c)
        {
            count++;
        }
        else
        {
            if(count>=3)
            {
                ans+=v[count];
            }
            count=1;
            c=a[i];
        }
    }
    return ans;
}

