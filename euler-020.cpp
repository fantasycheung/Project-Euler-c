/*
 * =====================================================================================
 *
 *       Filename:  euler-020.cpp
 *
 *    Description:  Same as euler-016 easy one
 *
 *        Version:  1.0
 *        Created:  2014/01/29 17时51分57秒
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
#define MAX 180
int f[MAX];
int main()
{

    int i,j;
    memset(f, 0, sizeof(f));
    f[0] = 1;
    for (i = 2; i<=100; i++) {
        int c = 0;
        for (j = 0; j<MAX; j++) {
            int s = f[j]*i + c;
            f[j] = s % 10;
            c = s/10;
        }
    }
    for (j = MAX-1; j>=0; j--) {
        if (f[j]) {
            break;
        }
    }
    int sum = 0;
    for (i = j; i>=0; i--) {
        sum += f[i];
    }
    cout<<"The answer to this problem is :"<<sum<<endl;
    return 0;
}
