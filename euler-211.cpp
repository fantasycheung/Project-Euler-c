/*
 * =====================================================================================
 *
 *       Filename:  euler-211.cpp
 *
 *    Description:  Just another sieve method and this method is very useful to divisors and totient function. However when the number becomes large the memory it needs are huge. Take that into account.
 *
 *        Version:  1.0
 *        Created:  2014/01/30 15时47分41秒
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
#include <cmath>
using namespace std;
#define MAXN 64000000
long long  a[MAXN];
bool is_square(long long x);
int main()
{
    clock_t start,finish;
    double totaltime;
    start = clock();
    for(long i = 0;i<MAXN;i++){
        a[i] = 1 + i*i;
    }
    long sum = 1;
    long count = 1;
    for(long long i = 2;i<MAXN;i++){
        for(long long j = 2 * i;j<MAXN;j=j+i){
            a[j] = a[j] + i*i;
        }
        if(is_square(a[i])){
            sum += i;
            count += 1;
        }
    }
    cout<<"The answer to this problem is: "<<sum<<"\n";
    cout<<"There are just "<<count<<" numbers satisfy."<<"\n";
    finish = clock();
    totaltime = (double)(finish-start)/CLOCKS_PER_SEC;
    cout<<"Time lasts: "<<totaltime<<" seconds!!!\n";
    return 0;
}
bool is_square(long long x)
{
    long long root;
    root = (long long)sqrt((double)x);
    return root*root == x;
}


