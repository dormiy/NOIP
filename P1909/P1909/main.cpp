//
//  main.cpp
//  P1909
//
//  Created by 吴平 on 3/2/19.
//  Copyright © 2019 Ping. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int qty, set, spending;
    int pencil[3][2];
    
    cin>>qty;
    
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cin>>pencil[i][j];
        }
    }
    
    if(qty%pencil[0][0]==0){
        set =qty/pencil[0][0];
    }
    else{
        set =qty/pencil[0][0]+1;
    }
    
    spending = set*pencil[0][1];
    
    for(int i=1; i<3;i++){
        if(qty%pencil[i][0]==0){
            set =qty/pencil[i][0];
        }
        else{
            set =qty/pencil[i][0]+1;
        }
        if(set*pencil[i][1]<spending){
            spending=set*pencil[i][1];
        }
    }
    
    cout << spending<<endl;
    return 0;
}
