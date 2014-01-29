/*
 * =====================================================================================
 *
 *       Filename:  euler-012-1.cpp
 *
 *    Description:  Another way to calcuate the divisors of n*(n+1)/2 and we know if n is odd D(~) = D((n+1)/2)*D(n) if n is even D(~) = D(n/2)*D(n+1) and we already know the former one already so we just need to caculate one of them.LOL 
 *
 *        Version:  1.1
 *        Created:  2014/01/29 14时51分41秒
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
    memset(sieve, true, sizeof(sieve));
    sieve[0] = 0;
    sieve[1] = 1;
    for (int i = 2; i*i<1000; i++) {
        if (sieve[i]) {
            for (int j = i*i; j<1000; j+=i) {
                sieve[j] = 0;
            }
        }
    }
    vector<int> prime;
    for (int i = 2; i<1000; i++) {
        if(sieve[i])
            prime.push_back(i);
    }
    int n = 3;
    int Dn = 2;
    int cnt = 0;
    while (cnt<=500) {
        n = n + 1;
        int n1 = n;
        if (n1%2==0) {
            n1 = n1/2;
        }
        int Dn1 = 1;
        for (int i = 0; i < prime.size(); i++) {
            if (prime[i]*prime[i]>n1) {
                Dn1 = Dn1*2;
                break;
            }
            int exp = 1;
            while (n1%prime[i]==0) {
                exp = exp + 1;
                n1 = n1/prime[i];
            }
            if (exp>1)Dn1 = Dn1 * exp;
            if (n1 == 1)break;
        }
        cnt = Dn*Dn1;
        Dn = Dn1;
    }
    cout<<"The answer to this prob is:  "<<n*(n-1)/2<<"\n";
    finish = clock();
    totaltime = (double)(finish-start)/CLOCKS_PER_SEC;
    cout<<"The totaltime of this prob is just: "<<totaltime<<" seconds!!!"<<"\n";
    return 0;
}

