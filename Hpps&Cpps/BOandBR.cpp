#include"BOandBR.hpp"

BO::BO(){
    id = 0;
}
BO::BO(int idx){
    id = idx;
}


int BO::compareTo(BO bo){
    if (id < bo.id)
        return 1;
    else if(id > bo.id)
        return -1;
    else
        return 0;
}

int BO::compareTo(int idx){
    if (id < idx)
        return 1;
    else if(id > idx)
        return -1;
    else
        return 0;
}

int BRegister::fieldIndex(string field){
    int idx = -1;
    for (unsigned int i = 0;i<fields.size();i++){
        if(fields[i] == field){
            idx = i;
        }
    }
    return idx;
}

void BRegister::addField(string newField){
    if(fieldIndex(newField)!=-1)
        cout<<"Register Error: Field already exists";
    else{
        fields.push_back(newField);
        cout<<"Field added"<<'\n';
    }
}

void BRegister::setFieldValue(string value, string Field){
    cout<<"setting field value."<<'\n';
    int idx = fieldIndex(Field);
    if(idx == -1)
        cout<<"Register Error: Field doesn't exist.";
    else{
        fieldsValues[idx] = value;
        cout<<"Value added"<<'\n';
    }
}

string BRegister::getFieldValue(string Field){//en este field retorno el value
    if(fieldIndex(Field)== -1)
        return "Register error: Field not found.";
    else{
        return fieldsValues[fieldIndex(Field)];
    } 
}

void BRegister::printRegister(){
    if(fieldsValues.size() == 0)
        cout<<"Register Error: empty register.";
    else{
        for(unsigned int i = 0;i<fieldsValues.size();i++ )
            cout<< fieldsValues[i]<<'\t';
    }
}

int BRegister::isFieldComparedTo(string fieldName,string compareTo){
    int idx = -1;
    fieldName=getFieldValue(fieldName);
    compareTo=getFieldValue(compareTo);
    if(fieldName.size()==compareTo.size()){
        for(unsigned int i=0;i<fieldName.size();i++){
            if(fieldName[i]==compareTo[i])
                idx =  0;
            idx = 1;
        }
    }
    return idx;
}

bool BRegister::isFieldEqualTo(string fieldName,string compareTo){
    bool res = false;
    string fieldvalue = getFieldValue(fieldName);
    string comparevalue = getFieldValue(compareTo);
    if(fieldvalue.size() == comparevalue.size()){
        for(unsigned int i = 0; i<fieldvalue.size();i++){
            if(fieldvalue[i] == comparevalue[i])
                res = true;            
        }
    }
    return res;
    
}