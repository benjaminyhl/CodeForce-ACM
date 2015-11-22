//You are given a string s and should process m queries. Each query is described by two 1-based indices li, ri and integer ki. It means that you should cyclically shift the substring s[li... ri] ki times. The queries should be processed one after another in the order they are given.
//
//One operation of a cyclic shift (rotation) is equivalent to moving the last character to the position of the first character and shifting all other characters one position to the right.
//
//For example, if the string s is abacaba and the query is l1 = 3, r1 = 6, k1 = 1 then the answer is abbacaa. If after that we would process the query l2 = 1, r2 = 4, k2 = 2 then we would get the string baabcaa.
//
//Input
//The first line of the input contains the string s (1 ≤ |s| ≤ 10 000) in its initial state, where |s| stands for the length of s. It contains only lowercase English letters.
//
//Second line contains a single integer m (1 ≤ m ≤ 300) — the number of queries.
//
//The i-th of the next m lines contains three integers li, ri and ki (1 ≤ li ≤ ri ≤ |s|, 1 ≤ ki ≤ 1 000 000) — the description of the i-th query.
//
//Output
//Print the resulting string s after processing all m queries.

//Sample test(s)
//input
//abacaba
//2
//3 6 1
//1 4 2
//output
//baabcaa

/* 
 * File:   main.cpp
 * Author: admin
 *
 * Created on November 17, 2015, 6:59 PM
 */

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    string s;
//    string s="abacaba";
//    cout<<s<<endl;
//    cout<<s.substr(0,2)<<endl; // "ab"
//    cout<<s.substr(2,4)<<endl; // "acab"
//    cout<<s.substr(6,1)<<endl; // "a"
    long n;
    long a,b,c;
    string s1,s2,s3;
    while(!cin.fail()) {
         
        cin>>s;
        cin>>n;
        if(!cin.fail()) {
            for(int i=0;i<n;i++) {
                cin>>a>>b>>c;

                c=c%(b-a+1);
                //divide into 3 pieces
                s1=s.substr(0,a-1);
                s2=s.substr(a-1,b-a+1);
                s3=s.substr(b,s.length()-1);
//                cout<<"s1: "<<s1<<endl;
//                cout<<"s2: "<<s2<<endl;
//                cout<<"s3: "<<s3<<endl<<endl;
//                for(int j=0;j<c;j++) {
                //abcdefghi
                //012345678
                //ab acab a
                //01 2345 6
                //12 3456 7
                //s2="acab";
                //    0123 size=4
                //to  baca
                
                
                s2=s2.substr(s2.length()-c,c)+s2.substr(0,s2.length()-c);
//                }
                
                s=s1+s2+s3;
//                cout<<s<<endl;

    //                cout<<s<<endl;
                }

            cout<<s<<endl;
        }
        
    }
    return 0;
}

