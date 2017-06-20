//
//  Count Characters.cpp
//  Hw06
//
//  Created by Derek Eckman on 6/20/17.
//  Copyright © 2017 Derek Eckman. All rights reserved.
//

#include "Count Characters.hpp"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main ()

{
    ifstream input;
    input.open("Counting.txt");
    
    cout << "Counting characters: " << endl;
    
    if (input.fail())
    {
        cout << "File does not exist. " << endl;
        cout << "Exit Program. " << endl;
        return 0;
    }
    int count = 0;
    
    while (!input.eof())
    {
        input.get();
    count ++;
    }
    count--;
    input.close();

    cout << "The number of characters is: " << count << endl;
}




}
