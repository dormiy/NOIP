//
//  main.cpp
//  P1424
//
//  Created by 吴平 on 3/3/19.
//  Copyright © 2019 Ping. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int x;
    long int n;
    long int l=0;
    cin>>x>>n;
    
    if(x+n<7){
        l=n*250;
    }
    if(x+n>=7)
    {
        if(x>=1&&x<=5)
        {
            l=(6-x)*250;
        }
        if((n-(8-x))>1){
            l=l+((n-(8-x))/7)*250*5;
        
            if(((n-(8-x))%7)>=1&&((n-(8-x))%7)<=5)
            {
                l=l+250*((n-(8-x))%7);
            }
            if(((n-(8-x))%7)>=6&&((n-(8-x))%7)<=7)
            {
                l=l+250*5;
            }
        }
    }
    cout <<l<<endl;

    return 0;
}
