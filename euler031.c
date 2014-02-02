/*
 * =====================================================================================
 *
 *       Filename:  euler031.c
 *
 *    Description:  Dynamic Programming and the classic coin sum problem. 
 *
 *        Version:  1.0
 *        Created:  2014/02/02 14时04分27秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  FALCON (zf), fantasycheung@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
int main(){
    int A = 200;
    int v[]={1,2,5,10,20,50,100,200};
    int w[201];
    memset(w,0,sizeof(w));
    w[0] = 1;
    for(int i = 0;i<8;i++){
        for(int j = v[i];j <= A;j++){
            w[j] = w[j]+w[j-v[i]];
         }
    }
    printf("The answer of this problem is: %d \n",w[200]);
    return 0;
}


