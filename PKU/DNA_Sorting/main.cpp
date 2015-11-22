/* 
 * File:   main.cpp
 * Author: Benjamin
 *
 * Created on August 5, 2015, 10:35 AM
 */

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    int a, //the length of the strings
        b; //the number of strings
    do {
        cin>>a>>b;
    } while(a<=0||a>50||b<=0||b>100);
    string *s=new string[b];
    short *c=new short[b];
    short t=0;
    for(int i=0;i<b;i++) {
        t=0;
        cin>>s[i];
        for(int j=0;j<a-1;j++) {
            for(int k=j+1;k<a;k++) {
                if(s[i].at(j)>s[i].at(k)) t++;
            }
        }
        c[i]=t;
    }
    string st;
    for(int i=0;i<b-1;i++) {
        for(int j=i+1;j<b;j++) {
            if(c[i]>c[j]) {
                t=c[i];
                c[i]=c[j];
                c[j]=t;
                st=s[i];
                s[i]=s[j];
                s[j]=st;
            }
        }
    }
    
    for(int i=0;i<b;i++) {
        cout<<s[i]<<endl;
    }
    
    delete []c;
    delete []s;
    
    return 0;
}

