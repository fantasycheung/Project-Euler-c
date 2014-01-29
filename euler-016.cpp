/*
 * =====================================================================================
 *
 *       Filename:  euler-016.cpp
 *
 *    Description:  I think this problme is like a calculator and it's easy by using mod.
 *
 *        Version:  1.0
 *        Created:  2014/01/29 17时37分13秒
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
#define MAX 350
int f[MAX];
int main()
{
    memset(f,0,sizeof(f));
    f[0] = 2;
    int i,j;
    for(i = 2;i<=1000;i++){
        int c = 0;
        for(j = 0;j<MAX;j++){
            int s = f[j]*2 + c;
            f[j] = s % 10;
            c = s / 10;
        }
    }
    for(j = MAX-1;j>=0;j--){
        if(f[j])break;
    }
    int sum = 0;
    for(i = j;i >= 0;i--){
        sum += f[i];
    }
    cout<<"The answer to this problem is : "<<sum<<"\n";
    return 0;
}
