/*
 * =====================================================================================
 *
 *       Filename:  euler-002.cpp
 *
 *    Description:  using dynamic programming to solve the fibonacci prblme because this prob only needs the current number not the whole sequence.
 *
 *        Version:  1.0
 *        Created:  2014/01/28 11时23分58秒
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
#define N 4000000
int main()
{
		long prev,current,next,sum;
		prev = 1;
		current = 1;
		sum = 0;
		while(current <= N)
		{
				next = current + prev;
				prev = current;
				current = next;
				if (next%2==0)
				{
						sum +=next;
				}
		}
		cout<<"The answer of the prob 2 is:";
		cout<<sum;
}

