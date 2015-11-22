/* 
 * File:   main.cpp
 * Author: Benjamin
 * Created on August 6, 2015, 11:37 AM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    float a,//input
          t;//temp
    int c=0;//count
    int n=0;
    float *arr=new float[200];
    
    //input
    do {
        cin>>a;
        if(a!=0&&a>0.01f&&a<5.20f) {
            arr[c]=a;
            c++;
        }
    } while(a!=0&&a>0.01f&&a<5.20f);
    
    for(int i=0;i<c;i++) {
        t=0;
        n=2;
        do {
            t+=(1.0f/n);
            n++;
        } while(t<arr[i]);
        cout<<(n-2)<<" card(s)"<<endl;
    }
    
    delete []arr;
    return 0;
}

