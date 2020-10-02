#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class UI{
    //created by weradet nopsombun 62160110 2/10/63
    public:
       void PrintCustomer(){
           //print customer menu
            cout << "xxx" << endl;  
       }//printcustomer menu
       void PrintAdmin(){
           //print employee menu
           //print interface
           cout << "*****Electic Train*****" << endl;
           cout << "1. Find cycle Time" << endl; 
           cout << "2. Buy Train Ticket" << endl;
           cout << "3. Register Member" << endl;
           cout << "4. Renew Member Card" << endl;
           cout << "5. Add Station" << endl;
           cout << "6. Manage Station" << endl;
       }
       void PrintRenewMenu(){
        //print interface ewnew card menu
        cout << "****Renew Card****" << endl;              
       } //print renew card
};
int main(){
     //mainmenu
     UI obj_ui;
 
     
     return 0;
}//main