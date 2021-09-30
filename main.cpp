#include <iostream>
#include <string>

using namespace std;

struct Check{
    int CheckNum;
    string Checkmemo;
    int CheckAmount;

};
const int N =5;

class CheckBook{
public:
    CheckBook():balance(0),numOfChecks(0){};
    CheckBook(int b1):balance(b1), numOfChecks(0){};
    Check check[N];
    int lastDeposit();
    int checkLimit();
    float getBalance(){return balance;}
    int getNumOfChecks(){return numOfChecks;}
    void deposit(float amount);
    void displayChecks();
    bool writeCheck( float amount );
private:
    float balance;
    int numOfChecks;
};


int main() {
    CheckBook c1;
    c1.deposit(100);
    c1.getBalance();
    c1.displayChecks();
    c1.lastDeposit();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}

int CheckBook::lastDeposit(){
      return balance;
                         //is supposed to show the last deposit in here

};
void CheckBook::displayChecks(){

    cout<<numOfChecks<<endl; //displays numofchels

};


void CheckBook::deposit(float amount){
      balance+=amount; //adds the amount

};



bool CheckBook::writeCheck( float amount ){
    if(amount <= balance) {
        balance++;
        check[N];
        numOfChecks++;
        return true;
    }else {
        return false;

    }



};

int CheckBook::checkLimit() {
    if(N < 0)
      cout<<"Array is empty  "<<endl;
    else
       return N;

}