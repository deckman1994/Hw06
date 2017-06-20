//
//  circle.cpp
//  Hw06
//
//  Created by Derek Eckman on 6/19/17.
//  Copyright © 2017 Derek Eckman. All rights reserved.
//

#include "string"
#include <iostream>
#include <fstream>
using namespace std;


//int main()
//{
//    ifstream input;
//    int year;
//    int rank;
//    int gscore;
//    char ch;
//    string filename;
//    string bname;
//    string gname;
//    string name;
//    
//    
//    cout << "Enter the year. " << endl;
//    cin >> year;
//    
//    switch (year)
//    {
//        case 2001:
//            filename = "Babynames2001.txt";
//            break;
//        case 2002:
//            filename = "Babyname2002.txt";
//            break;
//        case 2003:
//            filename = "Babyname2003";
//            break;
//        case 2004:
//            filename = "Babyname2004";
//            break;
//        case 2005:
//            filename = "Babyname2005";
//            break;
//        case 2006:
//            filename = "Babynames2006";
//            break;
//        case 2007:
//            filename = "Babynames2007";
//            break;
//        case 2008:
//            filename = "Babyname2008";
//            break;
//        case 2009:
//            filename = "Babynames2009";
//            break;
//        case 2010:
//            filename = "Babynames2010";
//            break;
//        default:
//            cout << "Wrong entry year. ";
//            return 0;
//    }
//    
//    cout << "Enter your gender. " << endl;
//    cin >> ch;
//    cout << "Enter your name. " << endl;
//    cin >> name;
//    
//    ifstream input(filename.c_str());
//    
//    if (input.fail())
//    {
//        cout << filename << "doesn't exist. " << endl;
//        return 0;
//    }
//    if (!input.eof())
//    {
//        while (!input.eof())
//            input >> rank >> bname >> gname >> gscore ;
//        if (ch == 'm' || ch == 'M')
//        {
//            if (name == bname)
//                cout << name << "is ranked # " << rank << "in year " << year << endl;
//            return 0;
//        }
//    else if(ch == 'f' || ch == 'F')
//    {
//        if (name == gname)
//        {
//            cout << name << "is ranked # " << rank << "in year " << year << endl;
//            return 0;
//        }
//    }
//    input.close();
//    return 0;
//}
//
//}
//

//#include "circle.hpp"
//
//
//
//
//
//class circle{
//private:
//    double radius;
//    int numberofobjects;
//    
//public:
//    circle()
//    {
//        radius = 0;
//        numberofobjects++;
//    }
//    
//    circle(double r)
//    {
//        radius = r;
//        numberofobjects++;
//    }
//    
//    double getarea()
//    {
//        return (3.1415*radius*radius);
//    }
//    
//    double getradius()
//    {
//        return radius;
//    }
//    
//    void setradius(double r)
//    {
//        radius = r;
//    }
//    
//    int getnumberofobjects()
//    {
//        return numberofobjects;
//    }
//    
//    bool operator <(circle one)
//    {
//      if(radius < one.radius)
//          return true;
//        else
//            return false;
//    }
//    
//    bool operator <=(circle one)
//    {
//        if (radius <= one.radius)
//            return true;
//        else
//            return false;
//    }
//    
//    bool operator ==(circle one)
//    {
//     if (radius == one.radius)
//         return true;
//        else
//            return false;
//    }
//    bool operator !=(circle one)
//    {
//        if (radius != one.radius)
//            return true;
//        else
//            return false;
//    };
//    bool operator >(circle one)
//    {
//        if (radius > one.radius)
//            return true;
//        else
//            return false;
//        
//    }
//    bool operator >=(circle one)
//    {
//        if (radius >= one.radius)
//            return true;
//        else
//            return false;
//    }
//};
//
//
//class complex
//{
//public:
//    double real;
//    double imagine;
//    complex()
//    {
//        real = 0;
//        imagine = 0;
//    }
//    complex(double one, double two)
//    {
//        real = one;
//        imagine = two;
//    }
//    void add (complex one, complex two)
//    {
//        real = one.real+ two.real;
//        imagine = one.imagine + one.imagine;
//        cout << "The sum of the two complex is two numbers = " << real << " + " << imagine << "i" << endl;
//    }
//    void subtract(complex one, complex two)
//    {
//        real = one.real-two.real;
//        imagine = one.imagine - two.imagine;
//        cout << "The difference of the complex of " << real << " + " << imagine << "i" << endl;
//    }
//    void multi (complex one, complex two)
//    {
//        real = one.real*two.real-one.imagine*two.imagine;
//        imagine = one.real*two.imagine-two.real*one.imagine;
//        cout << "The product of the two complex numbers is " << real << " + " << imagine << "i" << endl;
//    }
//    void divi(complex one, complex two)
//    {
//        real = (one.real*two.real-one.imagine*two.imagine)/ (two.real*two.real + two.imagine*two.imagine);
//        imagine = (one.imagine*two.real - one.imagine*two.imagine)/ (two.real * two.real + two.imagine* two.imagine);
//        cout << "The answer of the two complex numbers is " << real << " + " << imagine << "i" <<endl;
//    }
//    
//};
//int main ()
//{
//    complex one, second, result;
//    
//    
//    cout << "Enter first complex: " << endl;
//    cin >> one.real >> one.imagine;
//    
//    cout << "Enter second complex: " << endl;
//    cin >> second.real >> second.imagine;
//    
//    result.add(one, second);
//    result.subtract(one, second);
//    result.multi( one, second);
//    result.divi(one, second);
//
//}
