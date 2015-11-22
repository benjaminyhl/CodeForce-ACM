/* 
 * File:   main.cpp
 * Author: admin
 *
 * Created on May 29, 2015, 9:40 AM
 */

#include <iostream>
#include <cmath>
#include <string>
using namespace std;


string isHy(int);
bool isPrime(int);

int main(int argc, char** argv) {
    long arr[] ={5,6,7,45,2147483647,2147483645,2147483642,2147483627,1927738275,1927738291};
    for(int i=0;i<10;i++) {
        cout<<arr[i]<<" "<<isHy(arr[i])<<endl;
    }
    return 0;
}


string isHy(int n) {
    if(n<5) return "no";
    
    else if(n<25) {
        for(int i=2;i<=n;i++) {
            if(n%i==0) {
                if(isPrime(i)){
                    if((i-1)%4==0) return "yes";
                }
            }
        }
        return "no";
        
    } else {
        for(int i=2;i<=sqrt(n);i++) {
            if(n%i==0) {
                if(isPrime(i)) {
                    if((i-1)%4==0) return "yes";
                }
            }
        }
        if((n-1)%4==0) return "yes";
        return "no";
    }
}

bool isPrime(int n) {
    if(n<2) return false;
    for(int i=2;i<n;i++) {
        if(n%i==0) return false;
    }
    return true;
}