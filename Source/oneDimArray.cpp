//
//  oneDimArray.cpp
//  Data Structures
//
//  Created by Rahul Kamath on 3/4/20.
//  Copyright © 2020 Rahul Kamath. All rights reserved.
//


/*
#include <iostream>

#include "excep.h"
#include "oneDimArray.h"

template <class t>
oneDimArray<t>::oneDimArray(int size)
{
    data = new t;
    max = size;
    len = 0;
    for(int i = 0; i < max; i++)
        data[i] = NULL;
};

template <class t>
oneDimArray<t>::~oneDimArray()
{
    delete [] data;
};

template <class t>
bool oneDimArray<t>::isEmpty()
{
    return(len == 0);
};

template <class t>
bool oneDimArray<t>::isFull()
{
    return(len == max);
};

template <class t>
oneDimArray<t>& oneDimArray<t>::insert(int pos, const t& x)
{
    //Exception handling block
    if(pos < 1 || pos > len)
        OOB();
    if(isFull())
        noMemory();
    for (int i = len; i >= pos; i--)
        data[i] = data[i-1];
    data[pos-1] = x;
    len++;
    return *this;
    
};

template <class t>
oneDimArray<t>& oneDimArray<t>::remove(int pos, t& x)
{
    if(pos < 1 || pos > len)
        OOB();
    if(isEmpty())
        noMemory();
    x = data[pos-1];
    for (int i = pos; i <= len; i++)
        data[i] = data[i+1];
    data[len] = NULL;
    len--;
    return *this;
};

template <class t>
oneDimArray<t>& oneDimArray<t>::disp1D()
{
    for(int i = 0; i < len; i++)
        cout << data[i] << " ";
    cout << "\n";
    return *this;
}; */
