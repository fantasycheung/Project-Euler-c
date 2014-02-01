/*
 * =====================================================================================
 *
 *       Filename:  euler081.c
 *
 *    Description:  Dynamic Programming
 *
 *        Version:  1.0
 *        Created:  2014/02/01 20时47分43秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  FALCON (zf), fantasycheung@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#define MIN(x,y) (((x)<(y))?(x):(y))
int main()
{
    int i,j;
    int a[80][80];
    FILE *fp;
    fp = fopen("matrix.txt","r");
    for(i = 0;i < 80;i++){
        for(j = 0;j < 80;j++){
            fscanf(fp,"%d,",&a[i][j]); // take care that there is a comma and take the "%d," I forgot the , and "%d" doesn't work . take care!
        }
    }
    fclose(fp);
    for(i = 1;i < 80;i++){
        a[0][i] += a[0][i-1];
        a[i][0] += a[i-1][0];
    }
    for(i = 1; i<80 ;i++){
        for(j = 1;j<80;j++){
            a[i][j] = MIN(a[i][j-1],a[i-1][j])+a[i][j];
        }
    }
    printf("The answer of this problem is : %d\n",a[79][79]);
    return 0;
}

