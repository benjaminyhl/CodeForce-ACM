/* 
 * File:   main.cpp
 * Author: admin
 *
 * Created on May 29, 2015, 1:00 PM
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
    int N=4; //number of bulbs
    int t=2;//second
    int b=1;//which bulb
    int on=-1;//on is 1, off is -1
    t=t%(N+1);
    for(int i=1;i<=t;i++) {
        if(b%i==0) on*=-1;
    }
    cout<<on;
    return 0;
}

