//
//  main.cpp
//  P1008
//
//  Created by 吴平 on 3/2/19.
//  Copyright © 2019 Ping. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int s[10];
    bool flag;

    for(int a1=192;a1<333;a1++){
        
        flag=true;
        
        for(int i=1;i<10;i++){
            s[i]=0;
        }
        s[a1/100]=1;
        s[a1/10%10]=1;
        s[a1%10]=1;
        s[a1*2/100]=1;
        s[a1*2/10%10]=1;
        s[a1*2%10]=1;
        s[a1*3/100]=1;
        s[a1*3/10%10]=1;
        s[a1*3%10]=1;
        
        for(int i=1;i<10;i++){
            //cout<<s[i]<<endl;
            if(s[i]==0){
                flag =false;
            }
        }
        if(flag){
            cout<<a1<<" "<<a1*2<<" "<<a1*3<<endl;
        }
        
    }
    
    return 0;
}
