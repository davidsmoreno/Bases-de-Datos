



using namespace std;

class BOT{
private:
  BO *tuples;
  vector<string> fields;
  int num_r;

  struct BO{
    int id;

    BO(){id = 0;}
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



    struct BRegister public of BO{
      vector<string> fields
      vector<string> fieldValues;//será vector de vectores??

      public BRegister(){
        fields = vector<string>();
        fieldValues = vector<string>();
      }
      public BRegister(int index){
        super(index);
        fields = vector<string>();
        fieldValues = vector<string>();
      }
      void addField(String fieldName){
        int index = fieldIndex(fieldName);
        if(index != -1){
          cout << "field already in register";
        }else{
          fields.push_back(fieldName);
        }
      }
      void setFieldValue(string fieldName,string fieldValue){
        int index = fieldIndex(fieldName);
        if(index == -1){
          cout << "Register Error: field not found";
        }else{
          fieldValues[index] = fieldValue;
        }
      }
      public string getContentAsString(){
        string content = "";
        for(int i=0;i<fieldValues.size();i++){
          content += fieldValues[i];
          if(i<fieldValues.size()-1)
            content += ",";
        }
        return content;
      }
      int fieldIndex(string nomField){
        int index = -1;
        for(int i=0;i<fields.size();i++){
          if(fields[i] == nomField){
            index = i;
          }
        }
        return index;
      }
      String getFieldValue2(String fieldName){
        int index = fieldIndex(fieldName);
        if(index == -1){
          return "Registry Error: field not found";
        }else{
          return fieldsValues[index];
        }
      }
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
