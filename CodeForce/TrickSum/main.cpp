/* 
 * File:   main.cpp
 * Author: Benjamin
 * Created on November 17, 2015, 9:22 AM
 */
//
//In this problem you are to calculate the sum of all integers from 1 to n, but you should take all powers of two with minus in the sum.
//
//For example, for n = 4 the sum is equal to  - 1 - 2 + 3 - 4 =  - 4, because 1, 2 and 4 are 20, 21 and 22 respectively.
//
//Calculate the answer for t values of n.
//
//Input
//The first line of the input contains a single integer t (1 ≤ t ≤ 100) — the number of values of n to be processed.
//
//Each of next t lines contains a single integer n (1 ≤ n ≤ 109).
//
//Output
//Print the requested sum for each of t integers n given in the input.

#include <iostream>
using namespace std;

//int isPowOfTwo(long long x) {
//    return ((x!=0)&&!(x&(x-1)));
//}

//int isPowOfTwo(long long x) {
//    while((x&1)==0&&x>1) x>>=1;
//    return (x==1);
//}
int isPowOfTwo (unsigned int x) {
  return ((x != 0) && ((x & (~x + 1)) == x));
}

long long sum(long long a,long long b,long long &temp) {
    temp*=2;
    if(a==b) return a;
    if(b<temp) {
        return ((a+b)*(b-a+1)/2);
    } else if(b==temp) {
        return ((a+b)*(b-a+1)/2-(2*temp));
    } else {
        return ((a+temp-1)*(temp-a)/2-temp+sum(temp+1,b,temp));
    }
    return 0;
}

int main(int argc, char** argv) {
    int t;
    unsigned long long n;
//    long long sum=0;
    long long temp=4;
    while(!cin.fail()) {
        cin>>t;
        for(int i=0;i<t;i++) {
            if(!cin.fail()) {
                cin>>n;
                if(!cin.fail()) {
                    if(n==1) cout<<(-1)<<endl;
                    else if(n==2) cout<<(-3)<<endl;
                    else if(n==3) cout<<(0)<<endl;
                    else if(n==4) cout<<(-4)<<endl;
                    else {
                        cout<<(-4+sum(5,n,temp))<<endl;
                    }
                    temp=4;
                    //                    sum=(1+n)*n/2;
//                    for(long long i=1;i<=n;i++) {
//                        if(i==temp) {
//                            sum-=(2*i);
//                            temp*=2;
//                        }
////                        else {
////                            sum+=i;
////                        }
//                    }
//                    cout<<sum<<endl;
//                    sum=0;
//                    temp=1;
                }
            }
        }
    }
    
//    int n=10;
//    for(int i=0;i<n;i++){
//        if(i&1) //odd number
//            cout<<i<<endl;
//    }
    
    return 0;
}

