//
//  main.cpp
//  P1425
//
//  Created by 吴平 on 3/2/19.
//  Copyright © 2019 Ping. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout << ((c*60+d)-(a*60+b))/60<<" "<<((c*60+d)-(a*60+b))%60<<endl;
    return 0;
}
