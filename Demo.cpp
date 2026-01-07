#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {

    int input;
    char character, choice, receipt;
    int order, quantity;
    float payment, balance;
    time_t now = time(0);
    char* dt = ctime(&now);
    const float set1 = 23.40;
    const float set2 = 30.50;
    const float set3 = 20.30;
    const float set4 = 25.20;

    string customerName; // Variable to store customer name
  

    system("cls");
    cout << "\n\n\n\t\t\t -----------Sudheer Pizza Ordering System------------" << endl;
    cout << "\t\t\t|                                             |" << endl;
    cout << "\t\t\t|  Press Y to continue and press N to exit    |" << endl;
    cout << "\t\t\t|                                             |" << endl;
    cout << "\t\t\t|                                             |" << endl;
    cout << "\t\t\t ---------------------------------------------" << endl;

    input:
    cout << "\n\t\t\tEnter Input [y/n] : ";
    cin >> character;

    switch (character) {
    case 'Y':
    case 'y':
        goto menu;
        break;
    case 'N':
    case 'n':
        system("PAUSE");
        cout << "\n\t\t\tBrought To You By Sudheer Pizza Corner...";
        exit(EXIT_SUCCESS);
        break;
    default:
        cout << "\n\t\t\tYou entered wrong input" << endl;
        goto input;
        break;

    }

    menu:
    system("cls");

    // Ask for customer name
    cout << "\n\t\t\tEnter your name: ";
    cin.ignore(); // To ignore any leftover newline character
    getline(cin, customerName);
    cout << "press 1 to call waiter ...." << endl;
    int in ;
    cin >> in ;
    cout << "Select vetor ...." << endl;
    cout << "1. Sahil Khan \n 2.Shivam Tripathi \n 3.Saurabh Giri" << endl;
    int vetor_input;
    cin >> vetor_input;
    switch (vetor_input)
    {
    case 1:
        cout << "Sahil waiter coming shortly " << endl ;
        break;
    case 2:
        cout << "Shivam waiter coming shortly " << endl ;
     break;
    case 3:
     cout << "Saurabh  waiter coming shortly " << endl ;
    break;
    default:
       cout << "incorrect vetor choice !!" << endl;
    }

    cout << "\n\t\t\t -----------------------------------------------------------" << endl;
    cout << "\t\t\t|                Sudheer Pizza Corner - Menu                     |" << endl;
    cout << "\t\t\t -----------------------------------------------------------" << endl;
    cout << "\n\t\t\t ------------Set A----------\t ------------Set B----------" << endl;
    cout << "\t\t\t| Pizza : Tropical Chicken  |\t| Pizza : Beef Pepperoni    |" << endl;
    cout << "\t\t\t| Drink : Pepsi             |\t| Drink : Coca Cola         |" << endl;
    cout << "\t\t\t| Price : RM 23.40          |\t| Price : RM 30.50          |" << endl;
    cout << "\t\t\t ---------------------------\t ---------------------------" << endl;

    cout << "\n\t\t\t ------------Set C----------\t ------------Set D----------" << endl;
    cout << "\t\t\t| Pizza : Deluxe Cheese     |\t| Pizza : Hawaiian Chicken  |" << endl;
    cout << "\t\t\t| Drink : Sprite            |\t| Drink : 7up               |" << endl;
    cout << "\t\t\t| Price : RM 20.30          |\t| Price : RM 25.20          |" << endl;
    cout << "\t\t\t ---------------------------\t ---------------------------" << endl;

    choose:
    cout << "\n\t\t\tChoose Set : ";
    cin >> choice;

    switch (choice) {
    case 'A':
    case 'a':
        cout << "\n\t\t\tQuantity   : ";
        cin >> quantity;
        system("cls");
        cout << "\n\t\t\tYou picked Set : A" << endl;
        cout << "\n\t\t\t ---------------------------" << endl;
        cout << "\t\t\t| Pizza : Tropical Chicken  |" << endl;
        cout << "\t\t\t| Drink : Pepsi             |" << endl;
        cout << "\t\t\t| Price : RM 23.40          |" << endl;
        cout << "\t\t\t ---------------------------" << endl;
        cout << fixed << showpoint << setprecision(2);
        cout << "\t\t\tQuantity  : " << quantity << endl;
        cout << "\n\t\t\tYour total cost is RM " << (set1 * quantity) << endl;
        do {
            cout << "\n\t\t\tPlease make your payment RM: ";
            cin >> payment;

            if (payment >= (set1 * quantity)) {
                balance = payment - (set1 * quantity);
                cout << fixed << showpoint << setprecision(2);
                cout << "\n\t\t\tYour balance is RM: " << balance;
            }
            else {
                cout << "\n\t\t\tPayment not enough";
            }
        } while (payment < (set1 * quantity));

        x:
        cout << "\n\n\t\t\tDo you want to print receipt? Y/N? ";
        cin >> receipt;
        if (receipt == 'Y' || receipt == 'y') {
            system("cls");
            cout << "\n\t\t\t ------------------------------------------------" << endl;
            cout << "\t\t\t|                 Sudheer Pizza Corner                   |" << endl;
            cout << "\t\t\t ------------------------------------------------" << endl;
            cout << endl;
            cout << "                      " << dt << endl;
            cout << "\t\t\t  Tel  : 03-339-31206     Fax   : 013-363-4357" << endl;
            cout << "\t\t\t  Till : R3451            Order : M35042627" << endl;
            cout << endl;
            cout << endl;
            cout << "\t\t\t  Cashier :  Yuraj Singh" << endl;
            cout << "\t\t\t  Shift   :  SHIFT-1" << endl;
            cout << endl;
            cout << "\n\t\t\t ------------------------------------------------" << endl;
            cout << "\t\t\t| Description      Qty     Price      Amount     |" << endl;
            cout << "\t\t\t ------------------------------------------------" << endl;
            cout << "\t\t\t  Set A " << "   	    " << quantity << " 	   " << set1 << "      " << set1 * quantity << "	   " << endl;
            cout << "                                                " << endl;
            cout << "\t\t\t  Total " << "                              " << set1 * quantity << endl;
            cout << "\t\t\t  Cash " << "                               " << payment << endl;
            cout << "\t\t\t  Balance " << "                            " << balance << endl;
            cout << "\t\t\t ------------------------------------------------" << endl;
        }
        else if (receipt == 'N' || receipt == 'n') {
            goto inmenu;
        }
        else {
            cout << "\n\t\t\tYou entered wrong input!!!" << endl;
            goto x;
        }

        break;
    // Similar changes can be applied to other sets (B, C, D) as well.
    
    default:
        cout << "\n\t\t\tSet not Available" << endl;
        goto choose;
        break;
    }

inmenu:
    cout << "\n";
    system("PAUSE");
    cout << "\n\n\t\t\tMenu : " << endl;
    cout << endl;
    cout << "\t\t\t1. Order again" << endl;
    cout << "\t\t\t2. Exit" << endl;

    cout << "\n\t\t\tEnter choice :";
    cin >> input;

    switch (input) {
    case 1:
        goto menu;
        break;
    case 2:
        cout << "\n\t\t\t -----------------------------" << endl;
        cout << "\t\t\t| Thank you please come again at SUDHEER PIZZA CORNER |" << endl;
        cout << "\t\t\t -----------------------------" << endl;
        system("PAUSE");
        exit(EXIT_SUCCESS);
        break;
    default:
        cout << "\n\t\t\tYou entered wrong input" << endl;
        goto inmenu;
        break;
    }

}
