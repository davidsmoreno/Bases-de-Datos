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
    }
}

void BRegister::setFieldValue(string value, string Field){
    int idx = fieldIndex(Field);
    if(idx == -1)
        cout<<"Register Error: Field doesn't exist.";
    else{
        fieldsValues[idx] = value;
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