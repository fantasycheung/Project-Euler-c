/*
 * =====================================================================================
 *
 *       Filename:  euler-007.cpp
 *
 *    Description:  Just a simple method maybe not useful and the usual method is to use the sieve method.
 *
 *        Version:  1.0
 *        Created:  2014/01/28 20时26分50秒
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
bool isprime(int x);
int main()
{
    int i = 3;
    int count = 2;
    int N = 10001;
    while(count < N)
    {
        i += 2;
        if(isprime(i))
        {
            count += 1;
        }
    }
    cout<<"The answer to this problem is: "<<i<<"\n";
    return 0;
}

bool isprime(int x)
{
    if (x==2) return true;
    if (x%2==0) return false;
    int temp = 3;
    while (temp*temp <= x)
    {
        if(x%temp==0)return false;
        temp +=2;
    }
    return true;
}
