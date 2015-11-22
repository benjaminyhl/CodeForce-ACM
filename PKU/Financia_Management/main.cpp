/* 
 * File:   main.cpp
 * Author: admin
 *
 * Created on July 8, 2015, 12:38 PM
 */

#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    float x;
    float r=0.0f;
    float *a=new float[12];
    for(int i=0;i<12;i++) {
        do {
            cin>>x;
        } while(x<0);
        a[i]=x; 
        r+=a[i];
    }
    r/=12;
    cout<<"$"<<r;
    delete []a;
    return 0;
}

