#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

void login();
void registration();
void forgot();

int main() {
    int choice;
    cout << "\t\t\t____________________________________________________\n\n\n";
    cout << "\t\t\t        Welcome to the Login Page\n\n\n";
    cout << "\t\t\t_________              MENU              _____________\n\n\n";
    cout << "                                                       \n\n";
    cout << "\t | Press 1 to LOGIN                          |" <<endl;
    cout << "\t | Press 2 to REGISTER                       |" <<endl;
    cout << "\t | Press 3 if FORGOT PASSWORD                |" <<endl;
    cout << "\t | Press 4 to QUIT                           |" <<endl;

    cout << "\n\t\t\t Please enter your choice: ";
    cin  >> choice;
    cout << endl;

    switch(choice) {
        case 1:
            login();
            break;
        case 2:
            registration();
            break;
        case 3:
            forgot();
            break;
        case 4:
            cout << "\t\t\t Thank You! \n\n\n";
            break;
        default:
            system("cls");
            cout << "\t\t\t Please Select a Valid Option\n"<<endl;
            main();
    }
}

void login() {
    int count;
    string userID, password, id, pass;
    system("cls");
    cout << "\t\t\t Please Enter the Username and Password :" << endl;
    cout << "\t\t\t USERNAME: ";
    cin >> userID;
    cout << "\t\t\t PASSWORD: ";
    cin >> password;

    ifstream input("records.txt");

    while (input>>id>>pass) {
        if (id == userID && pass == password) {
            count = 1;
            system("cls");
        }
    }
    input.close();
    if (count == 1) {
        cout << userID << "\n Login Successfull!! \n";
        main();
    }
    else {
        cout << "Invalid Login. Please check username and password.\n";
        main();
    }
}

void registration() {
    string regUserId, regPassword, regId, regPass;
    system("cls");
    cout << "\t\t\t Enter the Username: \n";
    cin >> regUserId;
    cout << "\t\t\t Enter a Password: \n";
    cin >> regPassword;

    ofstream f1("records.txt", ios::app);
    f1 << regUserId << ' ' << regPassword << endl;
    system("cls");
    cout << "\n\t\t\t Registration Successfull";
    main();
}

void forgot() {
    int option;
    system("cls");
    cout << "\t\t\t You forgot the password? No worries \n";
    cout << " Press 1 to serach your id by username \n";
    cout << " Press 2 to go back to the main menu \n";
    cout << " Enter choice: \n";
    cin >> option;
    switch (option) {
    case 1: {
        int count=0;
        string sUserID, sId, sPass;
        cout << "\n\t\t\t Enter the username: ";
        cin >> sUserID;
        
        ifstream f2("records.txt");
        while (f2>>sId>>sPass) {
            if(sId == sUserID) {
                count = 1;
            }
        }
        f2.close();
        if(count == 1) {
            cout << "\n\n Your account is found! \n";
            cout << "\n\n Your password is : " << sPass;
        }
        else {
            cout << "\n\n Sorry, account not found! \n";
        }
        break;
    }
    case 2:
        main();
    
    default:
        cout << "Please enter a valid choice. \n";
        forgot();
        break;
    }
}