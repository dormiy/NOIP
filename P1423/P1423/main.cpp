//
//  main.cpp
//  P1423
//
//  Created by 吴平 on 3/3/19.
//  Copyright © 2019 Ping. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
    
    double input, l=0;
    cin>>input;
    int i;

    for(i=1;l<input;i++){
        l=l+2*pow(0.98,i-1);
        //cout<<l<<endl;
    }
    
    cout<<i-1<<endl;
    
    return 0;
}
