//
//  main.cpp
//  Data Structures
//
//  Created by Rahul Kamath on 3/4/20.
//  Copyright © 2020 Rahul Kamath. All rights reserved.
//

#include <iostream>
#include "oneDimArray.h"
#include "twoDimArray.h"
#include "excep.h"

using namespace std;

int main() {
    //Code for testing One Dimensional Array
    /*
    oneDimArray<int> obj(10);
    obj.insert(1, 1);
    obj.disp1D();
    obj.insert(2, 2);
    obj.disp1D();
    obj.insert(3, 3);
    obj.disp1D();
    obj.insert(4, 4);
    obj.disp1D();
    int y;
    obj.remove(3, y);
    cout << "Value deleted : " << y << endl;
    obj.disp1D();
    obj.insert(5, 5);
    obj.disp1D();
    obj.insert(6, 6);
    obj.disp1D();*/
    
    twoDimArray<int> obj(5,5);
    obj.insert(1, 1, 1);
    obj.disp2d();
    obj.insert(1, 2, 2);
    obj.disp2d();
    obj.insert(1, 3, 3);
    obj.disp2d();
    obj.insert(4, 3, 2);
    obj.disp2d();
    int elmnt;
    obj.remove(1, 1, elmnt);
    obj.disp2d();
    obj.insert(1, 1, 5);
    obj.disp2d();
    
    
    return 0;
}
