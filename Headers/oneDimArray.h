//
//  oneDimArray.h
//  Data Structures
//
//  Created by Rahul Kamath on 3/4/20.
//  Copyright © 2020 Rahul Kamath. All rights reserved.
//

#ifndef array1D_h
#define array1D_h

#include <iostream>
#include "excep.h"

template <class t>
class oneDimArray
{
    t *data;
    int len; //Current length of array
    int max; //Total size of array
        
        
public:
    oneDimArray(int=1);
    ~oneDimArray();
    bool isEmpty();
    bool isFull();
    oneDimArray<t>& insert(int ,const t& );
    oneDimArray<t>& remove(int ,t& );
    oneDimArray<t>& disp1D();
    oneDimArray<t>& resizeEmpty(int sz);
    oneDimArray<t>& removeInplace(int pos, t& x);
    oneDimArray<t>& insertInplace(int pos, const t& x);
};

template <class t>
oneDimArray<t>::oneDimArray(int size)
{
    data = new t;
    max = size;
    len = 1;
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
oneDimArray<t>& oneDimArray<t>::insertInplace(int pos, const t& x)
{
    //Exception handling block
    if(pos < 1 || pos > max-1)
        OOB();
    //if(isFull())
    //    noMemory();
    data[pos-1] = x;
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
    for (int i = pos - 1; i <= len; i++)
        data[i] = data[i+1];
    data[len] = NULL;
    len--;
    return *this;
};

template <class t>
oneDimArray<t>& oneDimArray<t>::disp1D()
{
    for(int i = 0; i < len-1; i++)
        cout << data[i] << " ";
    cout << "\n";
    return *this;
};

template <class t>
oneDimArray<t>& oneDimArray<t>::resizeEmpty(int sz)
{
    for (int i = 0; i < sz; i++)
    {
        data[i] = NULL;
    }
    max = sz;
    len = sz;
    return *this;
};

template <class t>
oneDimArray<t>& oneDimArray<t>::removeInplace(int pos, t& x)
{
    if(pos < 1 || pos > max-1)
        OOB();
    //if(isEmpty())
    //    noMemory();
    x = data[pos-1];
    data[pos-1] = NULL;
    cout << "Value removed is : " << x << "\n";
    return *this;
};


#endif /* array1D_h */
