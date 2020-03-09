//
//  twoDimArray.cpp
//  Data Structures
//
//  Created by Rahul Kamath on 3/6/20.
//  Copyright © 2020 Rahul Kamath. All rights reserved.
//

/*#include <stdio.h>
#inckude <iostream>
#include "oneDimArray.h"

template <class t>
class twoDimArray
{
    int row;
    int col;
    oneDimArray* rowPtr;
    
public:
    twoDimArray(int& r, int& c)
    {
        if(r<1 || c<1)
            OOB();
        row = r;
        col = c;
        rowPtr = new oneDimArray<t>;
        for (int i = 0; i < row; i++)
        {
            rowPtr[i].resizeEmpty(c);
        }
    }
    
    ~twoDimArray()
    {
        delete[] rowPtr;
    }
    
    twoDimArray<t>& insert(int r, int c, t& x)
    {
        if(r<1 || c<1 || r>row || c>col)
            OOB();
        rowPtr[r].insert(c, x);
        return *this;
    }
    
    twoDimArray<t>& remove(int r, int c, t& delElement)
    {
        if(r<1 || c<1 || r>row || c>col)
            OOB();
        rowPtr[r].removeInplace(c, delElement);
        return *this;
    }
    
    twoDimArray<t>& disp2d()
    {
        for (int i=0; i < row; i++)
        {
            rowPtr[i].disp1d();
        }
    }
};*/
