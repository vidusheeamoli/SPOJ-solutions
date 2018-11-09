#include <iostream>
#include <stdio.h>
#include <string.h>
#include <set>
#include <string>
using namespace std;

int main()
{
	int t;
	string str1;
	scanf("%d",&t);
	getline(cin,str1);
	while(t--)
	{
		set <string> myset;
		string str;
		string mset;
		getline(cin,str);

		int pos=-1,count=0,i;
		for(i=0;i<str.size();i++)
		{
			if(str[i]==' ')
			{
				if(pos!=-1)
				{
					
					mset=str.substr(pos,count);
					//cout<<mset<<endl;
					myset.insert(mset);
					pos=-1;
					count=0;
				}
			}
			else
			{
				if(pos==-1)
				{
					pos=i;
					count=1;
					if(i==str.size()-1)
					{
						mset=str.substr(pos,count);
						//cout<<mset<<endl;
						myset.insert(mset);
					}
				}
				else
				{
					count++;
					if(i==str.size()-1)
					{
						mset=str.substr(pos,count);
						//cout<<mset<<endl;
						myset.insert(mset);
					}
				}
			}
		}

		int cnt;
		cnt=myset.size();
		printf("%d\n",cnt);
	}
	return 0;
}
