#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include"BOandBR.hpp"
#include"BTable.hpp"

using namespace std;

void Creation(){
    vector<string> header{"ID", "Name", "Dep_Name", "Salary"};
    BTable BT(header);
    vector<string> user{"001","Sara","Science","5000"};
    BT.addRegister(user);
    BT.printTable();
}

int main(){
    vector<string> vec;
    string line;
    ifstream file;

    file.open("QUERY.txt");

    while(!file.eof()){
        getline(file, line, '\n');
        vec.push_back(line);
    }
    file.close();
    for(unsigned int i = 0; i < vec.size();i++)
        cout<<vec[i]<<'\n';
    if(vec.size()<5)
        cout<<"File Error: Not enough information"<<'\n';

    Creation();

    return 0;
}