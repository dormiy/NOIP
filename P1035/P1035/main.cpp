//
//  main.cpp
//  P1035
//
//  Created by 吴平 on 3/2/19.
//  Copyright © 2019 Ping. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    double sum=0;
    int i,input;
    
    cin>>input;
    
    for(i=1;sum<=input;i++)
    {
        double temp=i;
        sum=sum+1/temp;
    }
    
    cout<<i-1<<endl;
    return 0;
}
