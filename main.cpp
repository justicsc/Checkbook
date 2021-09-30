#include <iostream>
#include <string>

using namespace std;

class Check{
public:
    Check():CheckNum(0), CheckMemo(),checkAmount(0){};
    int getNum(){return CheckNum;}
    string getMemo(){return CheckMemo;}
    int getAmount(){return checkAmount;}
    int setNum(int cNum){cNum=CheckNum;}  // set cNum to CheckNum
    int setAmount(int amo){amo=checkAmount;} // set amo to checkAmount
    string setMemo(string cMemo){cMemo=CheckMemo;}
   // static int AllChecks(){return AllChecks;}
   // static int number(){return number;}

private:
        int CheckNum;
        string CheckMemo;
        int checkAmount;
       // static int AllChecks;
       // static int number;


    };


const int N =5;

class CheckBook{
public:
    CheckBook():balance(0),numOfChecks(0){};
    CheckBook(int b1):balance(b1), numOfChecks(0){};
    Check checks[N];
    int lastDeposit();
    int checkLimit();
    float getBalance(){return balance;}
    int getNumOfChecks(){return numOfChecks;}
    void deposit(float amount);
    void displayChecks();
    bool writeCheck( float amount );
    static int getallChecks(){return allChecks;}

private:
    static int allChecks;
    float balance;
    int numOfChecks;
};






int main() {
    CheckBook cb1(1000), cb2(500);
    for(int i=0; i<10;i++)
    {
        cb1.writeCheck(150);
        cb2.writeCheck(130);
    }
    cout<<"cb1 check details"<<endl;
    cb1.displayChecks();
    cout<<"cb2 check details"<<endl;
    cb2.displayChecks();
    cout<<cb1.getallChecks()<<endl;
    cout<<cb2.getallChecks()<<endl;
    return 0;


};

bool CheckBook::writeCheck( float amount ){
     if(numOfChecks< N && allChecks < 10 && balance > 0 ){
         return true;
     }else{
         return false;
     }

};

void CheckBook::displayChecks(){

    cout<<numOfChecks<<endl; //displays numofchels

};