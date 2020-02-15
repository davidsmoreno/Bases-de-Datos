#include<iostream>
#include<string>
#include<vector>

using namespace std;

class BO{
public:
    int id;

    BO(){id = 0;}
    BO(int idx){
      id = idx;
    }


    int compareTo(BO bo){
      if (id < bo.id)
        return 1;
      else if(id > bo.id)
        return -1;
      else
        return 0;
    }
    int compareTo(int idx){
      if (id < idx)
        return 1;
      else if(id > idx)
        return -1;
      else
        return 0;
    }
};

class BRegister : public BO{
public:
    vector<string> fields;
    vector<string> fieldsValues;



    BRegister(int idx):BO(idx){}

    int fieldIndex(string field){
        int idx = -1;
        for (unsigned int i = 0;i<fields.size();i++){
            if(fields[i] == field){
                idx = i;
            }
        }
        return idx;
    }

    void addField(string newField){
        if(fieldIndex(newField)!=-1)
            cout<<"Register Error: Field already exists";
        else{
            fields.push_back(newField);
        }
    }

    void setFieldValue(string value, string Field){
        int idx = fieldIndex(Field);
        if(idx == -1)
            cout<<"Register Error: Field doesn't exist.";
        else{
            fieldsValues[idx] = value;
        }

    }
    string getFieldValue(string Field){//en este field retorno el value
        if(fieldIndex(Field)== -1)
            return "Register error: Field not found.";
        else
        {
            return fieldsValues[fieldIndex(Field)];
        }
        
    }
    string getRegister(){
        string content = " ";
        if(fieldsValues.size() == 0)
            cout<<"Register Error: empty register.";
        else{
            for(unsigned int i = 0;i<fieldsValues.size();i++ ){
                content += fieldsValues[i] + ",";
            }
        }
        return content;
    }

};
