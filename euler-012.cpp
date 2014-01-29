/*
 * =====================================================================================
 *
 *       Filename:  euler-012.cpp
 *
 *    Description:  Just use the method of Divisors 0f number n is that if n = p1^a1 * p2*a2 *...pn^an, so D(n) = (a1+1)*(a2+1)...*(an+1) And I think this method can also be improved.
 *        Version:  1.0
 *        Created:  2014/01/29 14时25分22秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  FALCON (zf), fantasycheung@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
int main()
{
    clock_t start,finish;
    double totaltime;
    start = clock();
    bool sieve[1000];
    memset(sieve,true,sizeof(sieve));
    sieve[0] = 0;
    sieve[1] = 0;
    for(int i = 2;i*i<1000;i++)
    {
        if(sieve[i])
        {
            for(int j = i*i;j<1000;j +=i)
            {
                sieve[j] = 0;
            }
        }
    }
    vector<int> prime;
    for(int i = 0;i<1000;i++)
    {
        if(sieve[i])prime.push_back(i);
    }
    int n = 3;
    int cnt = 0;
    while(cnt<=500){
        n = n + 1;
        int d = n*(n+1)/2;
        cnt = 1;
        for(int i = 0;i < prime.size();i++){
            if(prime[i]*prime[i]>d){
                cnt = cnt * 2;
                break;
            }
        int exp = 1;
        while(d%prime[i]==0){
            exp = exp + 1;
            d = d / prime[i];
        }
        if(exp>1)cnt = cnt * exp;
        if(d==1)break;
        }
    }
    cout<<"The answer to this prob is:"<<n*(n+1)/2<<"\n";
    finish = clock();
    totaltime = (double)(finish-start)/CLOCKS_PER_SEC;
    cout<<"The total time of this procdure is:"<<totaltime<<" seconds!!!"<<"\n";
    return 0;
}
