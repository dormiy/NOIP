//
//  main.cpp
//  P1089
//
//  Created by 吴平 on 3/2/19.
//  Copyright © 2019 Ping. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int spending[12];
    int remaining =0, deposit=0;
    bool lack=false;
    
    for(int i=0;i<12;i++){
        cin>>spending[i];
    }
    
    for(int i=0; i<12; i++){
        remaining = remaining + 300 - spending[i];
        if (remaining<0){
            lack=true;
            cout<<-(i+1)<<endl;
            break;
        }
        if (remaining>100){
            deposit=deposit+(remaining/100)*100;
            remaining=remaining%100;
        }
    }
    if(!lack){
        cout <<deposit*1.2+remaining<<endl;
    }
    return 0;
}
