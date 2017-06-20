//
//  Create text file.cpp
//  Hw06
//
//  Created by Derek Eckman on 6/19/17.
//  Copyright © 2017 Derek Eckman. All rights reserved.
//

#include "Text.txt"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(){
    
    ifstream inputfile;
    inputfile.open("Text.txt");
    

    if (inputfile.fail())
    {
    cout << "No file exists. ";
    cout << "Done" << endl;
    }
    else
    {
        rand(time(NULL));
        int i = rand() % 100;
        for (int i = 0; i < 100; i++) {
            cin >> i;
            inputfile << i << endl;
            cout << i << endl;
        }
    }
    return 0;
}

