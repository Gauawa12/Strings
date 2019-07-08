
Given a string S consisting of uppercase and lowercase characters. The task is to sort uppercase and lowercase letters separately such that if the ith place in the original string had an Uppercase character then it should not have a lowercase character after being sorted and vice versa.

Input Format:
The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows. The first line of each test case contains a single integer N denoting the length of string. The second line contains a string S of length N, consisting of uppercase and lowercase characters.

Output Format:
For each testcase, in a new line, print the answer.

Your Task:
This is a function problem. You only need to complete the function caseSort that returns sorted string.

Constraints:
1 ≤ T ≤ 50
1 ≤ N ≤ 103

Example:
Input:
1
12
defRTSersUXI

Output:
deeIRSfrsTUX

Explanation:
Testcase 1: Sorted form of given string with the same case of character as that in original string.


Sol:

string caseSort(string str, int n){
    
    vector<char>lc;
    vector<char>uc;
    string s=str;
    for(int i=0;i<n;i++)
    {
        int t=int(s[i]);
        if(t>=65 && t<=90)
        {
            uc.push_back(s[i]);
        }
        else
        {
            lc.push_back(s[i]);
        }
    }
    sort(uc.begin(),uc.end());
    sort(lc.begin(),lc.end());
    int l=0,u=0;
    for(int i=0;i<n;i++)
    {
        int t=int(s[i]);
        if(t>=65 && t<=90)
        {
            s[i]=uc[u];
            u++;
        }
        else
        {
            s[i]=lc[l];
            l++;
        }
    }
    return s;
    
}
