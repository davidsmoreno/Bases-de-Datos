  
#ifndef _BOandBR_hpp_
#define _BOandBR_hpp_

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class BO{


public:

    int id;

    BO();
    BO(int idx);

    int compareTo(BO bo);
    int compareTo(int idx);
};


class BRegister : public BO{
public:
    vector<string> fields;
    vector<string> fieldsValues;

    BRegister():BO(){}
    BRegister(int idx):BO(idx){}

    int fieldIndex(string field);
    void addField(string newField);
    void setFieldValue(string value, string Field);
    string getFieldValue(string Field);
    void printRegister();
    bool isFieldEqualTo(string fieldName,string compareTo);
    int isFieldComparedTo(string fieldName,string compareTo);
};
#endif