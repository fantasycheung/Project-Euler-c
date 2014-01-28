/*
 * =====================================================================================
 *
 *       Filename:  euler-001.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014/01/28 11时07分48秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  FALCON (zf), fantasycheung@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>

#include <iostream>
using namespace std;
int main()
{
		int i,s;
		s = 0;
		for(i = 1;i<1000;i++)
		{
				if (i%3 == 0||i%5==0)
						s = s + i;
		}
		cout<<"The answer of the first question is:";
		cout<<s;
}
