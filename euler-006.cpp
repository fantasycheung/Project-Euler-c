/*
 * =====================================================================================
 *
 *       Filename:  euler-006.cpp
 *
 *    Description: Because the number is just under 100 so there is no need to use the formula 1^2+2^2+...+n^2 = n(n+1)(2n+1)/6 That will be quick when n is big 
 *
 *        Version:  1.0
 *        Created:  2014/01/28 16时47分29秒
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
#define N 100
int main()
{
    int i,sum2;
    long sum1,diff;
    sum1 = 0;
    sum2 = 0;
    for(i = 1;i<=N;i++)
    {
        sum1 += i*i;
        sum2 += i;
    }
    diff = sum2*sum2 - sum1;
    cout<<"The answer to this is: "<<diff<<"\n";
    return 0;
}
