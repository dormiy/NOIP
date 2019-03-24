//
//  main.cpp
//  P1308
//
//  Created by 吴平 on 3/24/19.
//  Copyright © 2019 Ping. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
    string s, d;
    getline(cin, s);
    getline(cin, d);
    
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(d.begin(), d.end(), d.begin(), ::tolower);
    
    string temp;
    int count = 0;
    int location=-1;
    
    for (int i = 0; i <= d.length(); i++) {
        
        if (d[i] != ' '&&int(d[i])!=0) {
            temp = temp + d[i];
        }
        else {
            if (temp == s) {
                count++;
                if (location == -1) {
                    location = i - temp.length();
                }
            }
            temp = "";
        }
    }
    
    if (count == 0) {
        cout << location;
    }
    else{
        cout << count << " " << location;
    }
    return 0;
    
}
