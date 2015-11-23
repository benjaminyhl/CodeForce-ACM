//Duff is in love with lovely numbers! A positive integer x is called lovely if and only if there is no such positive integer a > 1 such that a2 is a divisor of x.
//Malek has a number store! In his store, he has only divisors of positive integer n (and he has all of them). As a birthday present, Malek wants to give her a lovely number from his store. He wants this number to be as big as possible.
//
//Malek always had issues in math, so he asked for your help. Please tell him what is the biggest lovely number in his store.
//
//Input
//The first and only line of input contains one integer, n (1 ≤ n ≤ 1012).
//
//Output
//Print the answer in one line.
//
//Sample test(s)
//input
//10
//output
//10
//input
//12
//output
//6
//Note
//In first sample case, there are numbers 1, 2, 5 and 10 in the shop. 10 isn't divisible by any perfect square, so 10 is lovely.
//
//In second sample case, there are numbers 1, 2, 3, 4, 6 and 12 in the shop. 12 is divisible by 4 = 22, so 12 is not lovely, while 6 is indeed lovely.

/* 
 * File:   main.cpp
 * Author: Benjamin
 * Created on November 22, 2015, 1:09 PM
 */

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long n) {
    if(n<=3) return true;
    else if(n%2==0||n%3==0) return false;
    else {
        for(int i=5;i*i<n;i+=6) {
            if(n%i==0||n%(i+2)==0) return false;
        }
        return true;
    }
}

int isPowOf2(long long x) {
    return ( (x!=0) && ((x&(~x+1))==x) );
}

int main(int argc, char** argv) {
    //Fail when n is 9 digit
//    long long n;
//    while(!cin.fail()) {
////    for(long long n=10000000000;n<10000000001;n++) {
////        cout<<"n = "<<n<<" --- ";
//        cin>>n;
//        if(!cin.fail()) {
//            long long num=0;
//            if(isPowOf2(n)) {
//                num=2;
//            }       
//            bool itis=false;
//            for(long long i=n;i>=1;i--) {
//                if((n%i)!=0) continue;
//                if(isPrime(n)) {
//                    num=n;
//                    break;
//                }
//                
//                
//                for(long long j=2;j<=sqrt(i);j++) {
//                    if(i%(j*j)==0) {
//                        n/=j;
//                        itis=false;
//                        break;
//                    }
//                    itis=true;
//                    num=i;
//                }
//                if(itis) {
//                    break;
//                }
//
//            }
//                
//                cout<<num<<endl;
//        }
//            
//            
//        
//    }
    
    //给一个数n  然你找到最大的一个数x    
    // x满足两个条件:
    // 1.是n的因子 
    // 2.x不能整除 任何正整数的平方
    typedef long long ll;
    ll n;
    while(!cin.fail()) {
        cin>>n;
        if(!cin.fail()) {
            for(ll i=2;i*i<=n;i++) {
                while(n%(i*i)==0) 
                    n/=i;
            }
        }
    }
    
    
    cout<<n<<endl;
    return 0;
}

