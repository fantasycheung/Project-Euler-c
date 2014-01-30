/*
 * =====================================================================================
 *
 *       Filename:  euler-072.cpp
 *
 *    Description:  The sieve method to get the totient function and I heard of its runtime is O(logloglogN).But I'm not that sure. Just feel it really is fast.
 *
 *        Version:  1.0
 *        Created:  2014/01/30 16时51分33秒
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
#define MAXN 1000000
long a[MAXN];
int main()
{
    clock_t start;
    start = clock();
    double totaltime;
    for(int i = 0;i<=MAXN;i++){
        a[i] = i;
    }
    a[1] = 0;
    for(int i = 2;i<=MAXN;i++){
        if(a[i] == i){
            for(int j = i;j<=MAXN;j=j+i){
                a[j] = a[j] - a[j]/i;
            }
        }
    }
    long sum = 0;
    for(int i = 1;i<=MAXN;i++){
        sum += a[i];
    }
    cout<<"The answer to this problem is: "<<sum<<"\n";
    totaltime = (double)(clock()-start)/CLOCKS_PER_SEC;
    cout<<"The procedure lasts: "<<totaltime<<" seconds!!!\n";
    return 0;
}
