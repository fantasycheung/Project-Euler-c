/*
 * =====================================================================================
 *
 *       Filename:  euler-003.cpp
 *
 *    Description:  Try to get the largest prime factor of a number
 *
 *        Version:  1.0
 *        Created:  2014/01/28 11时44分52秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  FALCON (zf), fantasycheung@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
using namespace std;
#define N 600851475143
int main()
{
		int i,largest;
		long num;
		largest = 0;
		num = N;
		for(i = 3;i*i<=num;i=i+2)
		{
				if (num%i==0)
				{
						num /=i;
						largest = i;
				}
		}
		if (num>largest)
		{
				largest = num;
		}
		cout<<"The answer to this prob is:";
		cout<<largest<<"\n";
}
