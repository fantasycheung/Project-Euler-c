/*
 * =====================================================================================
 *
 *       Filename:  euler-004.cpp
 *
 *    Description: Not that hard because it only test 2 100-999 numbers 
 *
 *        Version:  1.0
 *        Created:  2014/01/28 12时51分51秒
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
bool ispalindrome(int x);
int main()
{
    int i,j;
    clock_t start,finish;
    double totaltime;
    start = clock();
    int largest = 0;
    for (i = 100;i<=999;i++)
        for(j = 100;j<=999;j++)
        {
            int s = i * j;
            if(ispalindrome(s))
            {
                if (s > largest)
                {
                    largest = s;
                }
            }
        }
    cout<<"The answer to this prob is:";
    cout<<largest<<"\n";
    finish = clock();
    totaltime = (double)(finish-start)/CLOCKS_PER_SEC;
    cout<<"The runtime is :"<<totaltime<<" second!!!"<<"\n";
    return 0;
}
bool ispalindrome(int x)
{
    int reverse = 0;
    int target = x;
    while (target != 0)
    {
        reverse = 10*reverse + target%10;
        target /= 10;
    }
    return reverse == x;
}
