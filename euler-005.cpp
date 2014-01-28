/*
 * =====================================================================================
 *
 *       Filename:  euler-005.cpp
 *
 *    Description: The method to calculate the gcd(a,b,c) = gcd(gcd(a,b),c) once figure out that, it's easy to solve and really quick for the mehtod gcd is log-time. 
 *
 *        Version:  1.0
 *        Created:  2014/01/28 15时06分59秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  FALCON (zf), fantasycheung@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <ctime>
using namespace std;
int gcd(int a,int b);
long lcm(long a,long b);
int main()
{
    clock_t start,finish;
    double totaltime;
    start = clock();
    long long a = 1;
    int i;
    for(i = 2;i<=20;i++)
    {
        a = lcm(a,i);
    }
    cout<<"The answer to this prob is "<<a<<"\n";
    finish = clock();
    totaltime = (double)(finish-start)/CLOCKS_PER_SEC;
    cout<<"The total time is:"<<totaltime<<" second !!!"<<"\n";
    return 0;
}
int gcd(int a,int b)
{
    while(b != 0)
    {
        int temp = a;
        a = b;
        b = temp%b;
    }
    return a;

}
long lcm(long a,long b)
{
    return a*b/gcd(a,b);
}
