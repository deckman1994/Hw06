//
//  BabynameMAIN.cpp
//  Hw06
//
//  Created by Derek Eckman on 6/20/17.
//  Copyright © 2017 Derek Eckman. All rights reserved.
//

#include <stdio.h>
#include "string"
#include <iostream>
#include <fstream>

using namespace std;


int main()
{
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
    
    using namespace std;
    
    int main()
    {
        string year, name, theName, fileName, fileType;
        char gender = 'M', theGender = 'F';
        int numOfBabies = 0, rank = 0;
        
        cout << "Enter a year: "; //ask the user which year they want to search a name in
        cin >> year;
        
        cout << "Enter a gender (M/F): "; //ask the user which gender the name will be
        cin >> gender;
        
        cout << "Enter a first name: "; //ask the user for the name
        cin >> name;
        
        ifstream input;
        
        fileName += year;
        fileName += fileType;
        
        cout << "The file you are accessing is " << fileName << endl;
        
        input.open(fileName);
        
        bool isFound = false;
        bool isFemale = true;
        
        while (!input.eof())
        {
            input >> theName >> theGender >> numOfBabies;
            rank++;
            
            if ( theGender == 'M' && isFemale == true)
            {
                isFemale = false;                 rank = 1;
            }
            
            if (theName == name && theGender == gender)
            {
                getline(input, theName);
                
                cout << "You are ranked " <<  rank << "with the name of " << name << " and there are " << numOfBabies << " babies with this name." << endl;
                
                isFound = true;
                
                break;
            }
        }
        
        if ( isFound == false )
        {
            cout << "The name " << name << " is not ranked for this year" << endl;
        }
    }
}
