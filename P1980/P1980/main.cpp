//
//  main.cpp
//  P1980
//
//  Created by 吴平 on 3/3/19.
//  Copyright © 2019 Ping. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int n,x;
    cin>>n>>x;
    int count=0;
    
    for(int i=1;i<<n;i++){
        if(i%10==x){
            count++;
        }
        //cout<<i/pow(10,1);
        for(int j=1;int(i/pow(10,j))>0;j++){
            if(i/int(pow(10,j))%10==x){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
