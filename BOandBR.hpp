#ifndef _Derivada_hpp_
#define _Derivada_hpp_

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

    BRegister():BO(){
        fields.push_back("ID");
        fieldsValues.push_back(to_string(BO::id));
    }
    BRegister(int idx):BO(idx){
        fields.push_back("ID");
        fieldsValues.push_back(to_string(BO::id));
    }

    int fieldIndex(string field);
    void addField(string newField);
    void setFieldValue(string value, string Field);
    string getFieldValue(string Field);
    string getRegister();
};
#endif;
