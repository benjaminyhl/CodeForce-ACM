/* 
 * File:   main.cpp
 * Author: admin
 *
 * Created on November 14, 2015, 10:15 PM
 */

#include <iostream>
using namespace std;


bool isPrime(long long n,long long &res) {
    bool imPrime=true;
    long long temp=n;
    if(n<=3) {
        return true;
    } else if(n%2==0||n%3==0) {
        while(n%2==0) {
            n/=2;
            res*=2;
            if(res>=4) break;
        } 
        if(res>=4) return false;
        else imPrime=true;
        while(n%3==0) {
            n/=3;
            res*=3;
            if(res>=4) break;
        }
        if(res>=4) return false;
        else imPrime=true;
        if(res<4) {
            res=1;
            cout<<"res=1"<<endl;
        }
    } 
    for(long long i=3;i*i<=temp;i+=2) {
        if(temp%i==0) {
            cout<<"res*=i;"<<endl;
            res*=i;
            return false;
        }
        if(temp%(i+2)==0) {
            res*=(i+2);
            return false;
        }
    }
    
    return imPrime;
}

int main(int argc, char** argv) {
    long long n;
    while(!cin.fail()) {
        cin>>n;
        if(!cin.fail()) {
            
            if(n<=2||n==4||n==5||n==6) cout<<"No such base"<<endl;
            else if(n==3) cout<<(4)<<endl;
            else {
                long long temp=n-3;
                long long res=1;
                
                if(isPrime(temp,res)) {
                    cout<<temp<<endl;
                } else {
                    cout<<res<<endl;
                }
            }
        }
    }
    
    return 0;
}

