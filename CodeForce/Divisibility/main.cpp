/* 
 * File:   main.cpp
 * Author: admin
 *
 * Created on November 18, 2015, 1:29 PM
 */

//Find the number of k-divisible numbers on the segment [a, b]. In other words you need to find the number of such integer values x that a ≤ x ≤ b and x is divisible by k.
//
//Input
//The only line contains three space-separated integers k, a and b (1 ≤ k ≤ 1018; - 1018 ≤ a ≤ b ≤ 1018).
//
//Output
//Print the required number.

//Sample test(s)
//input
//1 1 10
//output
//10
//input
//2 -4 4
//output
//5

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    long long n,a,b;
    long long res=0;
    while(!cin.fail()) {
        cin>>n>>a>>b;
        if(!cin.fail()) {
            if(a<=0&&b<=0) {
                long long temp=a;
                a=b;
                b=temp;
                a=-a;
                b=-b;
            }
            if(a<=0&&b>=0) {
                res=b/n-a/n+1;
                
            } else {
                res=b/n-(a-1)/n;
            }
            cout<<res<<endl;
            
                    
        }   
    }
    return 0;
}

