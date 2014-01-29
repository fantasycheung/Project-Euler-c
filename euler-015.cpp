/*
 * =====================================================================================
 *
 *       Filename:  euler-015.cpp
 *
 *    Description:  That's another Dynamic Programming problem and so easy. The whole time used is O(n^2). Just to go through the first line and second and on.
 *
 *        Version:  1.0
 *        Created:  2014/01/29 16时17分21秒
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
#define MAXN 20
int main()
{
    clock_t start,finish;
    double totaltime;
    start = clock();
    long a[MAXN+1][MAXN+1];
    for(int i = 0;i<=MAXN ;i++){
        a[i][0] = 1;
        a[0][i] = 1;
    }
    for(int i=1;i<=MAXN;i++){
        for(int j=1;j<=MAXN;j++){
            a[i][j] = a[i-1][j] + a[i][j-1];
        }
    }
    cout<<"The answer to this problem is :"<<a[20][20]<<"\n";
    finish = clock();
    totaltime = (double)(finish-start)/CLOCKS_PER_SEC;
    cout<<"The total time of this is just :"<<totaltime<<" seconds!!!"<<"\n";
    return 0;
}
