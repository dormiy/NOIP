//
//  main.cpp
//  P1422
//
//  Created by 吴平 on 3/2/19.
//  Copyright © 2019 Ping. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    int input;
    cin>>input;
    float result=0;
    
    if(input<=150&&input>=0){
        result=input*0.4463;
    }
    if(input<=400&&input>=151){
        result=150*0.4463+(input-150)*0.4663;
    }
    if(input<=10000&&input>=401){
        result=150*0.4463+250*0.4663+(input-400)*0.5663;
    }
    cout <<fixed<<setprecision(1)<<result<<endl;
    return 0;
}
