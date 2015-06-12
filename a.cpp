/********************************************************************
*   created:	12:6:2015   9:55
*   file path:	C:\Users\hallokael\hallo\Project6\Project6
*   file base:	first_topcoder
*   URL:         
*   can't get:  H J K L $
*********************************************************************/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<cmath>
#include<map>
#include<algorithm>
#include"A.h"
#include<queue>
#include<stack>
#include<vector>

#define ll long long
using namespace std;
char s2[55] ;
char s1[30] ;
int sum , last ;

int main()
{
	scanf( "%s" , s1 ) ;
	scanf( "%s" , s2 ) ;
	for( int j = 0 ; s1[j] ; j ++ )
	{
		if( s2[0] == s1[j] )
		{
			last = j ;
		}
	}
	for( int i = 1 ; s2[i] ; i ++ )
	{
		for( int j = 0 ; s1[j] ; j ++ )
		{
			if( s2[i] == s1[j] )
			{
				sum += abs( last - j ) ;
				last = j ;
			}
		}
	}
	printf( "%d" , sum );
	system("pause");
	return 0;
}
/*
AC:
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<cmath>
#include<map>
#include<algorithm>
#include<queue>
#include<stack>
#include<vector>
using namespace std;
class TypingDistance{           //类名，跟C的struct差不多，最好有点C++基础
public:                                     //把函数定义成public
	int minDistance(string s1,string s2);                                   //函数声明
};
int TypingDistance::minDistance( string s1 ,string s2 ){   
	int sum=0 , last ;
	for( int j = 0 ; s1[j] ; j ++ )
	{
		if( s2[0] == s1[j] )
		{
			last = j ;
		}
	}
	for( int i = 1 ; s2[i] ; i ++ )
	{
		for( int j = 0 ; s1[j] ; j ++ )
		{
			if( s2[i] == s1[j] )
			{
				sum += abs( last - j ) ;
				last = j ;
				continue;
			}
		}
	}
	return sum ;
}     
*/
/********************************************************************
	end:	12:6:2015   10:32
	file path:	C:\Users\hallokael\hallo\Project6\Project6
	file base:	first_topcoder2
	file ext:	cpp
*********************************************************************/
