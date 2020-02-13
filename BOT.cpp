#include<iostream>
#include<vector>

using namespace std;

class BOT{
private:
  BO *tuples;
  vector<string> fields;
  int num_r;

  struct BO{
    int id;


    struct BR{
      vector<string> fields
      vector<string> fieldValues;



    };

  };

public:






#include<iostream>
#include<vector>
#include<string>

using namespace std;

class BOT{
private:
  BO *tuples;
  vector<string> fields;
  int num_r;

  struct BO{
    int id;

    BO(){}
    BO(int idx){
      id = idx;
    }
    int compareTo(BO bo){
      if (this.id < bo.id)
        return 1;
      else if(this.id > bo.id)
        return -1;
      else
        return 0;
    }
    int compareTo(int idx){
      if (this.id < idx)
        return 1;
      else if(this.id > idx)
        return -1;
      else
        return 0;
    }



    struct BR{
      vector<string> fields
      vector<vector<string>> fieldValues;//será vector de vectores??

      BOR();
      BOR(int id);


      string getFieldValue(string f){//le paso un value y quiero saber en que field está
        int idx;
        for(int i = 0;i<this.fieldValues.size();i++){
          for(int j = 0;j<i.size();j++){
            if (i[j] == f){
              idx = j;
            }
          }
        }
        return this.fields[i];
      }

      vector<string> getFieldValues(string fs){//le paso el nombre del field y me retorna los values
        vector<string> v;
          for(int i = 0;i<this.fields.size();i++){
            if(this.fields[i] == fs){
              for(int j = 0; j < this.fieldValues.size();j++){
                v.push_back(this.fieldValues[j][i]);//No se si eso se pueda hacer
              }
            }
          }
      }

      bool isFieldEqualTo(string fldname, string compareTo); //se supone que se hereda algo de BO pero no se como
      int isFieldComparedTo(string fldname, string compareTo);
    };

  };

public:

};
};



