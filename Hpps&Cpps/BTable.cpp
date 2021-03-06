#include"BTable.hpp"

BTable::BTable(){numObjects = 0;}
BTable::BTable(vector<string> Fields){
    numObjects = 0;
    for(unsigned int i = 0; i<Fields.size();i++){
        fields.push_back(Fields[i]);
    }
}
void BTable::addRegister(vector<string> values){
    BRegister registro(numObjects);
    if(values.size() != fields.size())
        cout<<"BTable Error: There are no values to insert.";
    else{
        for(unsigned int i = 0; i<values.size();i++){
            registro.addField(fields[i]);
        }
        for(unsigned int j = 0;j<values.size();j++){
            registro.setFieldValue(values[j], fields[j]);
        }
    registers.push_back(registro);
    numObjects++;
    }
}

void BTable::printTable(){
    if(numObjects == 0)
        cout<<"BTable Error: Table is empty.";
    else{
        for(unsigned int i = 0; i< fields.size();i++){
            cout<<fields[i]<<'\t';
        }
        cout<<'\n';
        for(unsigned int j = 0;j < registers.size();j++){
            registers[j].printRegister();
            cout<<'\n';
        }
    }
}

string BTable::getField(string fld){
    string vals = " ";
    for (unsigned int i = 0; i < registers.size();i++){
        vals+=registers[i].getFieldValue(fld);
        vals+=",";
    }
    return vals;
}

vector<string> BTable::getFieldsVals(vector<string> flds){
    vector<string> values;

    for(unsigned int i = 0;i<flds.size();i++){
        values.push_back(getField(flds[i]));
    }
    return values;
}