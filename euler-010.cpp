/*
 * =====================================================================================
 *
 *       Filename:  euler-010.cpp
 *
 *    Description:  The sieve method I like most and because it's my first time to use it by C++ and I choose to run it on a IDE(Xcode) for its simple to check which step is wrong.LOL
 *
 *        Version:  1.0
 *        Created:  2014/01/29 11时50分07秒
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
int main()
{
    clock_t start,finish;
    double totaltime;
    start = clock();
    long N = 2000000;
    unsigned long sum = 0;
    bool prime[N];
    memset(prime,true,sizeof(prime));
    prime[0] = 0;
    prime[1] = 0;
    for ( int i =2;i*i<N ;i++ ) {
        if(prime[i]){            
            for (int j = i*i;j<N ;j = j + i ){
                prime[j]=0;
            }
        }
    } 
    for ( int i=2;i<N ;i++ ) {
        if(prime[i])sum+=i;
    }
    cout<<"The answer to this prob is: "<<sum<<"\n";
    finish = clock();
    totaltime = (double)(finish-start)/CLOCKS_PER_SEC;
    cout<<"The runtime of this prob is:"<<totaltime<<"\n";
    return 0;
}
