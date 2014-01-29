//
//  main.cpp
//  euler21
//
//  Created by Falcon on 14-1-29.
//  Copyright (c) 2014年 Falcon. All rights reserved.
//

#include <iostream>
using namespace std;
#define MAXN 10000
int main()
{

    // insert code here...
    clock_t start,finish;
    double totaltime;
    start = clock();
    int f[MAXN+1];
    for (int i =0; i<MAXN+1; i++) {
        f[i] = 1;
    }
    for (int i = 2; i<=MAXN; i++) {
        for (int j = i*2; j<=MAXN; j = j + i) {
            f[j] = f[j] + i;
        }
    }
    int sum = 0;
    for (int i = 2; i<MAXN; i++) {
        int s = f[i];
        if (s == i)continue;
        if (f[s] == i) {
            sum = sum + i;
        }
    }
    cout<<"The answer to this problem is :"<<sum<<"\n";
    finish = clock();
    totaltime = (double)(finish-start)/CLOCKS_PER_SEC;
    cout<<"The total time of this procedure is: "<<totaltime<<" seconds!!!"<<"\n";
    return 0;
}

