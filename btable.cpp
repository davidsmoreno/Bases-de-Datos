#include bot.h
public class bTable{
  public int numObjetos;
 vector <string> fields;
 vector<BRegister> registers;
}
bTable::bTable(){
 registers = vector<BRegister>();
  numObjetos = 0;
}
public void bTable::addRegister(string[] fieldValues){
  BObject nuevoObjeto(numObjetos);
  if(fieldValues.size() != fields.size()){
    cout << "Register error: fields mismatch";
  }else{
    for(int i=0;i<fieldValues.size();i++){
      nuevoObjeto.addField(fields[i]);
      nuevoObjeto.setFieldValue(fields[i],fieldValues[i]);
    }
   registers.push_back(nuevoObjeto);
   numObjetos++;
  }
  public vector<string> bTable::printTable(){
    vector<string> tableContent;
    for(int i=0;i<registers.size();i++){
      String registerContent = registers[i].getContentAsString();
      tableContent.push_back(registerContent);
    }
    return tableContent;
  }
}
