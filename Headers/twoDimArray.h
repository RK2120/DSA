//
//  twoDimArray.h
//  Data Structures
//
//  Created by Rahul Kamath on 3/6/20.
//  Copyright © 2020 Rahul Kamath. All rights reserved.
//

#ifndef twoDimArray_h
#define twoDimArray_h

#include <iostream>
#include "excep.h"
#include "oneDimArray.h"

template <class t>
class twoDimArray
{
    int row;
    int col;
    oneDimArray<t>* rowPtr;
    
public:
    twoDimArray<t>(int r, int c)
    {
        if(r<1 || c<1)
            OOB();
        row = r;
        col = c;
        rowPtr = new oneDimArray<t>[r];
        for (int i = 0; i < row; i++)
        {
            rowPtr[i].resizeEmpty(c);
            //rowPtr[i] = new oneDimArray<t>[c];
        }
    }
    
    ~twoDimArray<t>()
    {
        delete[] rowPtr;
    }
    
    twoDimArray<t>& insert(int r, int c, const t& x)
    {
        if(r<1 || c<1 || r>row || c>col)
            OOB();
        rowPtr[r-1].insertInplace(c, x);
        return *this;
    }
    
    twoDimArray<t>& remove(int r, int c, t& delElement)
    {
        if(r<1 || c<1 || r>row || c>col)
            OOB();
        rowPtr[r-1].removeInplace(c, delElement);
        return *this;
    }
    
    twoDimArray<t>& disp2d()
    {
        for (int i=0; i < row; i++)
        {
            rowPtr[i].disp1D();
        }
        return *this;
    }
};

#endif /* twoDimArray_h */
