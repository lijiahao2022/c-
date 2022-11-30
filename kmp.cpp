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
	for (int i = 0; i <strlen(s); i++)
	{
		next[i]=next[i+1];
	}
		for (int i = 0; i <strlen(s); i++)
	{
		cout << next[i]<<" ";
	}

}//这里的next[j]为j对应的最长前后缀长度
//利用next数组可实现kmp算法
// int KmpSearch(char* s, char* p)
// {
// 	int i = 0;
// 	int j = 0;
// 	int sLen = strlen(s);
// 	int pLen = strlen(p);
// 	while (i < sLen && j < pLen)
// 	{
// 		//①如果j = -1，或者当前字符匹配成功（即S[i] == P[j]），都令i++，j++    
// 		if (j == -1 || s[i] == p[j])
// 		{
// 			i++;
// 			j++;
// 		}
// 		else
// 		{
// 			//②如果j != -1，且当前字符匹配失败（即S[i] != P[j]），则令 i 不变，j = next[j]    
// 			//next[j]即为j所对应的next值      
// 			j = next[j];
// 		}
// 	}
// 	if (j == pLen)
// 		return i - j;
// 	else
// 		return -1;
// }
