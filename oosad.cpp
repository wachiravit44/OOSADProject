#include"fluk.h"
using namespace std;
 //created by weradet nopsombun 62160110 2/10/63
class Member{
    //class member 
      private:
        string name,lastname,Tel,IdCard;
        /*data is name of member lastname 
        Telephone number 
        Thai Id Card */ 
      public: 
      string name;
};
class MemberCard{
       private:
         double Money;
         string DayExpire;  
};
class RenewControler{
    //Contro Usecase Renew Card
private:
    Member user_member;  
public:
    void PrintRenewMenu(){
        //print interface ewnew card menu
        cout << "****Renew Card****" << endl;
        cout << "1.Renew Card" << endl;
        cout << "2. Back " << endl;
    }//print renewcard
    void PrintInfo(){
        
    }
};
class UI{
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
       } // print Admin
       void PrintFirstMenu(){
        //print the first menu
        cout << "1.Customer" << endl;
        cout << "2.Admin" << endl;
        cout << "3.Out" << endl;
        cout << "Please choose one choice : ";
        }//print FirstMenu
        void CheckMenu(){

        }
};
int main(){
     //mainmenu
     UI obj_ui;
     int Menu;
     string str_error = "404 Not found! Your Input Incorrect ! Please Try Again";
    do{
        // loop for all Program
      try{ 
       obj_ui.PrintFirstMenu(); cin >> Menu;
          if(!cin){
              throw str_error; // Throw Error
            } // if Not Input
          if(Menu==2){
              //Menu Admin 
            string str_user_name;  // username
            string str_password; //pass
               cout << "User name : "; cin >> str_user_name;
               cout << "Password : ";  cin >> str_password;
               if(isloggin(str_user_name,str_password)){
                   obj_ui.PrintAdmin();  
               }  //if Correct loggin
               else{
                   cout << "Cannot Loggin" << endl;
               }// Fail
          } // if Menu =2 
         } // Try Exception  
      catch(string str){
          cout << str << endl;  
          cin.clear(); 
          cin.ignore(100, '\n'); 
      }  // catch Error   
    }while(Menu!=3);
     return 0;
}//main