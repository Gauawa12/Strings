
A word is the nonempty sequence of symbols a1a2…an. A palindrome is the word a1a2…an that is read from the left to the right and from the right to the left the same way (a1a2…an = anan−1…a1). If S1 = a1a2…an and S2 = b1b2…bm, then S1S2 = a1a2…anb1b2…bm. The input contains some word S1. You are to find a nonempty word S2 of the minimal length that S1S2 is a palindrome.
Input
The first input line contains S1 (it may consist only of the Latin letters). It’s guaranteed that the length of S1 doesn’t exceed 10000 symbols.
Output
S1S2.
Samples
input	output

No

	

NoN

OnLine

	

OnLineniLnO

AbabaAab

	

AbabaAababA


Sol:

#include<bits/stdc++.h>
using namespace std;

bool ispal(string s)
{
	int l=0,h=s.size()-1;

	while(l<=h)
	{
		if(s[l]!=s[h])
		{
			return false;
			break;
		}
		l++;
		h--;
	}
	return true;
}



int main()
{
		string s;
	cin>>s;

	int n=s.length();
	int x=0;
	for(int i=1;i<n;i++)
	{
		string t=s.substr(i);
		if(ispal(t))
		{
			x=i-1;
			break;
		}
	}
	string s2="";
	for(int i=x;i>=0;i--)
	{
		s2+=s[i];
	}
	cout<<s+s2<<endl;
	


}

