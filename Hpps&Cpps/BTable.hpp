#ifndef _BTable_hpp_
#define _BTable_hpp_

#include"BOandBR.hpp"

using namespace std;

class BTable{
public:
    int numObjects;
    vector<string> fields;
    vector<BRegister> registers;

    BTable();
    BTable(vector<string> Fields);

    void addRegister(vector<string> values);
    void printTable();
    string getField(string fld);
    vector<string> getFieldsVals(vector<string> flds);
    vector<string> getFieldsWhereEquals(vector<string> otherFields);
    vector<string> getFieldsWhereComparison(vector<string> otherFields, char relation);
    BTable crossProduct(BTable other);
    BTable NaturalJoin(BTable other);
};
#endif