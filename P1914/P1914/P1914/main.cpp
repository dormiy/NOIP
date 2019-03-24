//
//  main.cpp
//  P1914
//
//  Created by 吴平 on 3/24/19.
//  Copyright © 2019 Ping. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number;
    string input;
    
    cin>>number;
    cin >> input;
    //getline(cin, input);
    
    for (int i= 0; i < input.length(); i++) {
        if ((int(input[i]) + number) <= 122) {
            cout << char(int(input[i])+number);
        }
        else {
            cout << char(int(input[i]) + number - 26);
        }
        
    }
    
}
