/* 
 * File:   main.cpp
 * Author: admin
 *
 * Created on September 18, 2015, 10:42 AM
 */

//171 ---- First problem answer
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int);
int *list(int,int &);
bool rCirPri(int *,int);

int main(int argc, char** argv) {
    int count=0;
    int uLimit=1000000;
    int dLimit=2;
    srand(static_cast<unsigned int>(time(0)));
    int *a;
    int size=0;
    for(int i=dLimit;i<uLimit;i++) {
        size=0;
        if(isPrime(i)) {
            a=list(i,size);
            if(rCirPri(a,size)) {
                count++;
            }
        }
    }
    cout<<endl<<"Count: "<<count<<endl;
    return 0;
}

bool isPrime(int n) {
    if(n<=3) {
        return true;
    } else if(n%2==0||n%3==0) {
        return false;
    } else {
        for(int i=5;i*i<=n;i+=6) {
            if(n%i==0||n%(i+2)==0) {
                return false;
            }
        }
        return true;
    }
}

int *list(int num,int &size) {
    int digit=0;
    int n=num;
    do {
        num/=10;
        digit++;
    } while(num!=0);
    size=digit-1;
    int l;
    int *a=new int[size];
    for(int i=0;i<size;i++) {
        l=n%10;//last digit
        n=n/10+l*pow(10,digit-1);//result
        a[i]=n;
    }
    return a;
}

bool rCirPri(int *list,int size) {
    for(int i=0;i<size;i++) {
        if(!isPrime(list[i]))
            return false;
    }
    return true;
}