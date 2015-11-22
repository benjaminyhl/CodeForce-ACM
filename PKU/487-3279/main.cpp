/* 
 * File:   main.cpp
 * Author: admin
 *
 * Created on July 8, 2015, 1:07 PM
 */

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(int argc, char** argv) {
    int n;//number of input
    do {
        cin>>n;
    } while(n<=0);
    
    string *s=new string[n];
    char *a=new char[n];
    for(int i=0;i<n;i++)
        a[i]=1;
    //get the strings
    for(short i=0;i<n;i++) {
        //check input
        cin>>s[i];
        char c=0;
        string r="";
        for(short k=0;k<s[i].length();k++) {
            if(s[i].at(k)!='-') {
                if(s[i].at(k)>='0'&&s[i].at(k)<='9') {
                    r+=s[i].at(k);
                } else if(s[i].at(k)>='A'&&s[i].at(k)<'Q') {
                    r+=static_cast<char>(((static_cast<int>(s[i].at(k))-59)/3+48));
                } else if(s[i].at(k)>'Q'&&s[i].at(k)<'Z') {
                    r+=static_cast<char>(((static_cast<int>(s[i].at(k))-60)/3+48));
                }
                c++;
                if(c==3) r+='-';
            }
        }
        s[i]=r;
            
    }
    //change here
    for(short i=0;i<n-1;i++) {
        if(s[i]!="b") {     
            for(short j=i+1;j<n;j++) {
                if(s[j]!="") {
                    if(s[i]==s[j]) {
                        a[i]++;
                        s[j]="b"; 
                    }
                }
            }
        }
    }
    
    string t;
    char te;
    
    for(short i=0;i<n-1;i++) {
        for(short j=i+1;j<n;j++) {
            if(s[i]>s[j]) {
                t=s[i];
                s[i]=s[j];
                s[j]=t;
                te=a[i];
                a[i]=a[j];
                a[j]=te;
            }
        }
    }
    
    bool nodup=true;//no duplicates
    //output test
    for(short i=0;i<n;i++) {
        if(s[i]!="b"&&a[i]!=1) {
            cout<<s[i]<<" "<<static_cast<int>(a[i])<<endl;
            nodup=false;
        }
        
    }
    if(nodup) cout<<"No duplicates."<<endl;
    delete []a;
    delete []s;
    return 0;
}
