#include<iostream>
#include<cstring>
using namespace std;
void getnext(int next[],char* s)
{
	int k = -1;
	int j = 0;
	next[0] = -1;
	while ( j < strlen(s))
	{
		if (k == -1 || s[j] == s[k])
		{
			j++; k++;
			next[j] = k;
		}
		else k = next[k];
	}

}
int main()
{
	char *s = "abcaabbcabcaabdab";
	int next[20];
	getnext(next, s);
	for (int i = 1; i <=strlen(s); i++)
	{
		cout << next[i]<<" ";
	}

}
