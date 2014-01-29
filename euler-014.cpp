/*
 * =====================================================================================
 *
 *       Filename:  euler-014.cpp
 *
 *    Description:  Just use the normal way and I find that C++ is really fast. LOL
 *
 *        Version:  1.0
 *        Created:  2014/01/29 15时21分57秒
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
    long largest = 0;
    int the_number = 0;
    int N = 1000000;
    for (int i = 2; i < N; i++)
    {
        long s = i; // take care because s may larger than the limit of int and that will be problem.
        int count = 0;
        while (s != 1){
            count = count + 1;
            if(s % 2==0){
                s = s / 2;
            }else {
                s = 3*s + 1;
            }
        }
        if (count>largest){
            largest = count;
            the_number = i;
        }
    }
    cout<<"The number has the longest chain is: "<<the_number<<"\n";
    finish = clock();
    totaltime = (double)(finish - start)/CLOCKS_PER_SEC;
    cout<<"The total time of this procedure is: "<<totaltime<<" seconds"<<"\n";
    return 0;
}

