#include <iostream>
#include <math.h>

struct QuitNow: public std::exception
  {
  QuitNow() { }
  virtual ~QuitNow() throw() { }
  virtual const char* what() throw()
    {
    return "QuitNow: request normal termination of program.\n"
           "(You should not see this message. Please report it if you do.)";
    }
  };
using namespace std;

int menu();
int signIn();

int main() {
  // Declare Variables
  int selection, accountNumber;
  double accounts[10] = {1000,1000,1000,1000,1000,1000,1000,1000,1000,1000};
  bool login = false;
  cout << "+----------------------------ATM------------------------------+\n";
  cout << "+-------------------------------------------------------------+\n";
  cout << "|  1. Sign In                                                 |\n";
  cout << "|  2. Balance                                                 |\n";
  cout << "|  3. Deposit                                                 |\n";
  cout << "|  4. Withdraw                                                |\n";
  cout << "|  5. Exit                                                    |\n";
  cout << "+-------------------------------------------------------------+\n";
  while (login == false){
    cin >> selection;
    if (selection == 1) {
      accountNumber = signIn();
      login = true;
    } else if (selection == 5) {
      cout << "Thank you. Have a good day.\n";
      return 0;
    } else if (selection != 1 && selection != 5) {
      cout << "You must login before using the ATM. Thank you.\n";
      cout << "Please enter your selection again: ";
    }
  }
  cout << "The account number you entered is: " << accountNumber << endl;
  selection = menu();
  while (login == true) {
    switch(selection) {
      case 2:
        if (accounts[accountNumber-1] < 100) {
          cout << "Low Balance";
        }
        cout << "Your current balance is: $" << accounts[accountNumber-1] << endl;
        // FUTURE : Find a way to go back to the menu repetitively
        selection = menu();
        break;
      case 3:
        double depositAmount;
        cout << "Please enter the amount that you would like to deposit: $";
        cin >> depositAmount;
        if (depositAmount > 0) {
          cout << "Thank you! You have succesfully deposited: $" << depositAmount;
          accounts[accountNumber-1]+=depositAmount;
          cout << "Your new balance is: $" << accounts[accountNumber-1] << endl;
        } else if (depositAmount < 0) {
          cout << "You have entered a negative amount, please enter a new amount: $";
          cin >> depositAmount;
          if (depositAmount < 0) {
            cout << "You have entered a negative amount again. You will now be taken to the main menu\n";
            // FUTURE : Find a way to go back to the menu repetitively
          } else {
            cout << "Thank you! You have succesfully deposited: $" << depositAmount;
            accounts[accountNumber-1]+=depositAmount;
            cout << "Your new balance is: $" << accounts[accountNumber-1] << endl;
          }
        }
        selection = menu();
        break;
      case 4:
        double withdraw;
        cout << "Please enter the amount that you would like to withdraw: $";
        cin >> withdraw;
        if (withdraw > accounts[accountNumber-1]) {
          cout << "Sorry you have insufficient funds to perform that transaction, you requested: $" << withdraw << " but your current balance is: $" << accounts[accountNumber-1] << endl;
          cout << "Please try again. What amount would you like to withdraw: $";
          cin >> withdraw;
          if (withdraw > accounts[accountNumber-1]) {
            cout << "Sorry you have entered an insufficient amount once again. You will now be taken back to the main menu\n";
            // FUTURE : Menu
          } else if (withdraw < accounts[accountNumber-1]) {
            cout << "You have withdrawn: $" << withdraw << " your current balance is now: $" << accounts[accountNumber-1]-withdraw << endl;
            accounts[accountNumber-1]-=withdraw;
          }
        } else if (withdraw < accounts[accountNumber-1]) {
          cout << "You have withdrawn: $" << withdraw << " your current balance is now: $" << accounts[accountNumber-1]-withdraw << endl;
          accounts[accountNumber-1]-=withdraw;
        }
        selection = menu();
        break;
      }
    }
}

int menu() {
  int menuSelection;
  bool menu = false;
  while (menu == false) {
    cout << "+----------------------------ATM------------------------------+\n";
    cout << "+-------------------------------------------------------------+\n";
    cout << "|  1. Sign In                                                 |\n";
    cout << "|  2. Balance                                                 |\n";
    cout << "|  3. Deposit                                                 |\n";
    cout << "|  4. Withdraw                                                |\n";
    cout << "|  5. Exit                                                    |\n";
    cout << "+-------------------------------------------------------------+\n";
    cin >> menuSelection;
    if (menuSelection == 5) {
      cout << "Thank you. Have a good day.\n";
      throw QuitNow();
    } else if (menuSelection > 1 && menuSelection < 5) {
      return menuSelection;
      menu = true;
    } else if (menuSelection == 1) {
      cout << "You have already logged in, please make another selection.\n";
    } else {
      cout << "You have entered an incorrect selection.\n";
    }
  }
}

int signIn() {
  int account;
  bool login = false;
  while (login != true) {
    cout << "Please enter your account number: ";
    cin >> account;
    if (account >= 0 && account <= 10) {
      cout << endl;
      cout << endl;
      cout << "Welcome back!\n";
      login = true;
      return account;
    } else {
      cout << "Sorry that was an incorrect account number\n";
      login = false;
    }
  }
}
