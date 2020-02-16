#ifndef _BTable_hpp_
#define _BTable_hpp_

#include<iostream>
#include<string>
#include<vector>
#include"BOandBR.hpp"

using namespace std;

class BTable{
public:
    int numObjects;
    vector<string> fields;
    vector<BRegister> registers;

    BTable();
    BTable(vector<string> fields);

    void addRegister(vector<string> values);
    void printTable();
};
#endif
