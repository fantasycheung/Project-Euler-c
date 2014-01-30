/*
 * =====================================================================================
 *
 *       Filename:  euler-025.c
 *
 *    Description:  A simple one just like the calcualtor. LOL
 *
 *        Version:  1.0
 *        Created:  2014/01/30 13时44分11秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  FALCON (zf), fantasycheung@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#define MAXN 999
int current[MAXN+1],prev[MAXN+1],next[MAXN+1];
int main()
{
    for(int i = 0;i<=MAXN;i++){
        current[i] = 0;
        prev[i] = 0;
        next[i] = 0;
    }
    current[0] = 1;
    prev[0] = 1;
    int count = 2;
    while(current[MAXN] == 0){
        count += 1;
        int c = 0;
        for(int i = 0;i<=MAXN;i++){
            int s = current[i] + prev[i] + c;
            next[i] = s % 10;
            c = s / 10;
        }
        for(int i = 0;i<=MAXN;i++){
            prev[i] = current[i];
            current[i] = next[i];
        }
    }
    printf("The answer to this problem is: %d\n",count);
    return 0;
}

