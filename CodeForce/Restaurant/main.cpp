/* 
 * File:   main.cpp
 * Author: admin
 *
 * Created on November 20, 2015, 9:33 PM
 */

#include <iostream>
#include <set>
#include <iterator>
using namespace std;


int main(int argc, char** argv) {
    set< pair<long,long> > s;
    set< pair<long,long> >::iterator it1;
    set< pair<long,long> >::iterator it2;
//    int n;
//    long a,b;
//    while(!cin.fail()) {
//        cin>>n;
//        if(!cin.fail()) {
//            for(int i=0;i<n;i++) {
//                cin>>a>>b;
//                s.insert(make_pair(a,b));
//            }
//            
//        }
//    }
//    
//    it2=s.begin();
//    ++it2;
//    for(it1=s.begin();it2!=s.end();++it1,++it2) {
//        cout<<"hello"<<endl;
//        if((*it1).second>=(*it2).first) {
//            s.erase(it2);
//            --it1;
//            --it2;
//        }
//    }
//    cout<<s.size()<<endl;
//    
    s.insert(make_pair(0,8));
    s.insert(make_pair(0,5));
    s.insert(make_pair(3,7));
    s.insert(make_pair(6,9));
    for(it1=s.begin();it1!=s.end();++it1) {
        cout<<(*it1).first<<"  "<<(*it1).second<<endl;
    }
    it2=s.begin();
    ++it2;
    for(it1=s.begin();it2!=s.end();++it1) {
        for(it2;it2!=s.end();++it2) {
            
        }
        if((*it1).second>=(*it2).first) {
            s.erase(it2);
            --it1;
            --it2;
        }
    }
    cout<<endl<<endl;
//    for(it=s.begin();it!=s.end()--;++it) {
//        if((*it).second<=(*(++it)).first) s.erase(it);
//    }
    
    
    
    for(it1=s.begin();it1!=s.end();++it1) {
        cout<<(*it1).first<<"  "<<(*it1).second<<endl;
    } 
    
    
    return 0;
}

