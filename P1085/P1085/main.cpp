//
//  main.cpp
//  P1085
//
//  Created by 吴平 on 3/2/19.
//  Copyright © 2019 Ping. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int a[7],b[7];
    int sum=8;
    int day=0;
    
    for(int i=0;i<7;i++){
        cin>>a[i]>>b[i];
    }
    
    for (int i=0;i<7;i++)
    {
        if((a[i]+b[i])>sum){
            sum=a[i]+b[i];
            day=i+1;
        }
     }
    
    cout << day<<endl;
    return 0;
}
