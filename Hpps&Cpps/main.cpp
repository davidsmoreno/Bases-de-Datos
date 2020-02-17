#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include"BOandBR.hpp"
#include"BTable.hpp"

using namespace std;

BTable Creation(){
    vector<string> header{"ID", "Name", "Dep_Name", "Salary"};
    BTable BT(header);

    return BT;

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

    return 0;
}