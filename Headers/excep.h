//
//  excep.h
//  Data Structures
//
//  Created by Rahul Kamath on 3/4/20.
//  Copyright © 2020 Rahul Kamath. All rights reserved.
//



#ifndef excep_h
#define excep_h

#include <iostream>

using namespace std;

void OOB()
{
    cout << "Varibles are out of bounds\n" << "Presss return exit program\n";
    getchar();
    exit(1);
}

void badInit()
{
    cout << "Not in range\n" << "Presss return exit program\n";
    getchar();
    exit(1);
}

void noMemory()
{
    cout << "Out of space\n" << "Presss return exit program\n";
    getchar();
    exit(1);
}

#endif /* excep_h */
