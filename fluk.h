#include<iostream>
#include<string>
#include<fstream>
using namespace std;
bool isloggin(string user_name,string pass){
    //get parameter username and pass for check 
    // is true return true 
    string line,us,ps;
    int found;
     ifstream  userfile("data.txt",ios::in);
     //openfile datamanager
     if(userfile.is_open()){
          while(getline(userfile,line)){
              //get all line in file
             found = line.find(" "); //find /t
             us = line.substr(0,found);
             ps = line.substr(found+1,string::npos);
               if(us==user_name&&ps==pass){
                   //check username and pass is true
                   return true;
               }
          }
          userfile.close();
     }
     else{
         cout << "Fail to loggin" << endl;
     }
     return false;
}