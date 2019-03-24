//
//  main.cpp
//  P1553
//
//  Created by 吴平 on 3/24/19.
//  Copyright © 2019 Ping. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    bool zFlag = true, xFlag = false, fFlag = false, bFlag = false;
    int xLocation=0, fLocation=0, bLocation=0;
    
    bool zeroFlag = false;
    
    string input;
    cin >> input;
    
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '.') {
            xFlag = true;
            zFlag = false;
            xLocation = i;
        }
        if (input[i] == '/') {
            fFlag = true;
            zFlag = false;
            fLocation = i;
        }
        if (input[i] == '%') {
            bFlag = true;
            zFlag = false;
            bLocation = i;
        }
        
    }
    
    if(zFlag == true){
        
        bool eFlag = true;
        if (input[input.length() - 1] == '0') {
            zeroFlag = true;
        }
        for (int i = (uint32_t)input.length() - 1; i >= 0; i--) {
            if (input[i] == '0'&&zeroFlag == true) {
                continue;
            }
            else {
                zeroFlag = false;
                cout << input[i];
                eFlag = false;
            }
        }
        
        if (eFlag) { cout << "0"; }
    }
    
    if (xFlag == true) {
        
        string input1="";
        string input2="";
        bool zeroFlag1 = false, zeroFlag2 = false;
        
        for (int i = 0; i < xLocation; i++) {
            input1 += input[i];
        }
        
        for (int i = xLocation +1; i < input.length(); i++) {
            input2 += input[i];
        }
        
        
        if (input1[input1.length() - 1] == '0') {
            zeroFlag1 = true;
        }
        for (int i = (uint32_t)input1.length() - 1; i >= 0; i--) {
            if (input1[i] == '0'&&zeroFlag1 == true) {
                continue;
            }
            else {
                zeroFlag1 = false;
                cout << input1[i];
            }
        }
        if (input1 == "0") { cout << "0"; }
        
        cout << ".";
        
        string temp;
        
        if (input2[input2.length() - 1] == '0') {
            zeroFlag2 = true;
        }
        for (int i = (uint32_t)input2.length() - 1; i >= 0; i--) {
            if (input2[i] == '0'&&zeroFlag2 == true) {
                continue;
            }
            else {
                zeroFlag2 = false;
                temp+= input2[i];
            }
        }
        
        bool flag = false;
        string ttemp;
        
        if(temp.length()>0){
            if (temp[temp.length() - 1] == '0') {
                flag = true;
                for (int i = (uint32_t)temp.length() - 1; i >= 0; i--) {
                    if (temp[i] == '0'&&flag == true) {
                        continue;
                    }
                    else {
                        flag = false;
                        ttemp += temp[i];
                    }
                }
                
                
                temp = "";
                for (int i = (uint32_t)ttemp.length() - 1; i >= 0; i--)
                {
                    temp += ttemp[i];
                }}
            cout << temp;
        }
        else { cout << "0"; }
        
    }
    
    if (fFlag == true) {
        
        string input1 = "";
        string input2 = "";
        bool zeroFlag1 = false, zeroFlag2 = false;
        
        for (int i = 0; i < fLocation; i++) {
            input1 += input[i];
        }
        
        for (int i = fLocation + 1; i < input.length(); i++) {
            input2 += input[i];
        }
        
        bool eFlag = true;
        
        if (input1[input1.length() - 1] == '0') {
            zeroFlag1 = true;
        }
        for (int i = (uint32_t)input1.length() - 1; i >= 0; i--) {
            if (input1[i] == '0'&&zeroFlag1 == true) {
                continue;
            }
            else {
                zeroFlag1 = false;
                cout << input1[i];
                eFlag = false;
            }
        }
        
        if (eFlag) { cout << "0"; }
        cout << "/";
        
        string temp;
        
        if (input2[input2.length() - 1] == '0') {
            zeroFlag2 = true;
        }
        for (int i = (uint32_t)input2.length() - 1; i >= 0; i--) {
            if (input2[i] == '0'&&zeroFlag2 == true) {
                continue;
            }
            else {
                zeroFlag2 = false;
                cout << input2[i];
            }
        }
    }
    
    if (bFlag == true) {
        string input1 = "";
        
        bool zeroFlag1 = false, eFlag = true;
        
        for (int i = 0; i < bLocation; i++) {
            input1 += input[i];
        }
        
        
        if (input1[input1.length() - 1] == '0') {
            zeroFlag1 = true;
        }
        for (int i = (uint32_t)input1.length() - 1; i >= 0; i--) {
            if (input1[i] == '0'&&zeroFlag1 == true) {
                continue;
            }
            else {
                zeroFlag1 = false;
                cout << input1[i];
                eFlag = false;
            }
        }
        if (eFlag) { cout << "0"; }
        cout << "%";
        
    }
    
    
}
