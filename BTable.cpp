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

    BTable(){
        numObjects = 0;
    }

    void addRegister(vector<string> values){
        BRegister registro(numObjects);
        if(values.size() != fields.size())
            cout<<"BTable Error: There are no values to insert.";
        else{
            for(unsigned int i = 0; i<values.size();i++){
                registro.addField(fields[i]);
                registro.setFieldValue(fields[i], values[i]);
            }
        registers.push_back(registro);
        numObjects++;
        }
    }

    void printTable(){
        if(numObjects == 0)
            cout<<"BTable Error: Table is empty.";
        else{
            for(unsigned int i = 0; i< fields.size();i++){
                cout<<fields[i]<<'\t';
            }
            cout<<'\n';
            for(unsigned int j = 0;j < registers.size();j++){
                registers[j].printRegister;
                cout<<'\n';
            }
        }
    }
};
