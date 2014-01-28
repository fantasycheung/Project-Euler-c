/*
 * =====================================================================================
 *
 *       Filename:  euler-009.cpp
 *
 *    Description:  I don't like the brute force and I try to solve it in a better way.
 *
 *        Version:  1.0
 *        Created:  2014/01/28 21时28分55秒
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
int main()
{
    int a,b,c;
    for (a = 1;a<333;a++)
        for(b = a;b<666;b++)
        {
            c = 1000 - a - b;
            if (a*a + b*b == c*c)
            {
                cout<<"The (a,b,c) is: ("<<a<<","<<b<<","<<c<<")"<<"\n";
                int product;
                product = a * b * c;
                cout<<"The product of a,b,c is: "<<product<<"\n";
                break;
            }
        } 
    return 0;
}

