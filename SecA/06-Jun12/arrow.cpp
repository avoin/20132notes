#include <iostream>
using namespace std;

typedef struct{
  double balance;
  char name[41];
} Account;

Account* Add1000(Account* ac){
  ac->balance += 1000.0;
  return ac;
}



int main(){
  Account A;
  A.balance = 2000;
  strcpy(Add1000(&A)->name, "checking");
  cout<<A.name<<"    "<<A.balance<<endl;
  return 0;
}