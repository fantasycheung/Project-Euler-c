/*
 * =====================================================================================
 *
 *       Filename:  euler067.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014/02/01 17时57分30秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  FALCON (zf), fantasycheung@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#define MAX(x,y) (((x)>(y))?(x):(y))
int main()
{
    int i,j;
    int a[100][100];
    FILE *fp=fopen("triangle.txt","r");
    for(i = 0;i<100;i++){
        for(j=0;j<100;j++){
            a[i][j] = 0;
        }
        for(j=0;j<i;j++){
            fscanf(fp,"%d",&a[i][j]);
        }
        fscanf(fp,"%d\n",&a[i][j]);
    }
    fclose(fp);
    for(int i = 98;i>=0;i--){
        for(int j = 0;j<=i;j++){
            a[i][j] += MAX(a[i+1][j],a[i+1][j+1]);
        }
    }
    printf("The answer is: %d\n",a[0][0]);
    return 0;
}
