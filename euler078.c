/*
 * =====================================================================================
 *
 *       Filename:  euler078.c
 *
 *    Description:  Just use the equation from the page: http://mathworld.wolfram.com/PartitionFunctionP.html 
 *        Formula:  P(n) = Sum((-1)^(k+1)*[P(n-k(3k-1)/2)+P(n-k(3k+1)/2)])
 *        Version:  1.0
 *        Created:  2014/02/02 22时43分50秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  FALCON (zf), fantasycheung@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#define F(x) ((x%2)==0?-1:1)
#define M 100000
int main(){
    int i,j,k,kk,s;
    int P[M];
    P[0] = 1;
    for(i = 1;i < M;i++){
        j = 1;
        k = 1;
        s = 0;
        while(j>0){
            kk = k*(3*k-1)/2;
            j = i - kk;
            if(j>=0){
                s += P[j]*F(k);
            }
            j = j - k;
            if(j>=0){
                s+=P[j]*F(k);
            }
            k++;
            s = s % 1000000;
        }
        P[i] = s;
        if(s==0){
            printf("The answer is :%d",i);
            break;
        }
    }
    return 0;
}

