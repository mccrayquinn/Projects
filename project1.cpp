#include <iostream>
#include "project1.h"
int menu()
{
    int choice = 0;
    cout << "\nMenu:";
    cout << "\nChoice 1: Addition";
    cout << "\nChoice 2: Subtraction";
    cout << "\nChoice 3: Multiplication";
    cout << "\nChoice 0: Exit";
    cout << "\nEnter your choice:";
    cin >> choice;
    switch(choice)
    {
        case 0:
            cout << "\nYou have selected exit.";
            return 0;
            break;
        case 1:
            cout << "\nYou have selected add.";
            int row1;
            int column1 ;
            int row2;
            int column2;

            cout << "\nRow size for first matrix:";
            cin >> row1;
            cout << "\nColumn size for first matrix:";
            cin >> column1;
            cout << "\nRow size for second matrix:";
            cin >> row2;
            cout << "\nColumn size for second matrix:";
            cin >> column2;
            if ((column1 != column2) || (row1 != row2)){
                cout << "Error, cannot process.";
                return 0;
            }
            else if ((column1 > 10 ) || (row1 > 10)){
                cout << "Size of matrix is too big! exiting.";
                return 0;
            }
            else if ((column2 > 10) || (row2 > 10)){
                cout << "Size of matrix is too big! What are you, crazy?! Exiting...";
                return 0;

            }
            else if((column1 <= 0) || (row1 <= 0)){
                cout << "Size of matrix is too small! Exiting.";
                return 0;
            }
            else if ((column2 <= 0) || (row2 <= 0)){
                cout << "Size of matrix is too small! You know better. Exiting.";
                return 0;

            }
            else{
            add(row1, column1, row2, column2);
            }

            break;
        case 2:

            cout << "\nYou have selected subtraction.";
            cout << "\nRow size for first matrix:";
            cin >> row1;
            cout << "\nColumn size for first matrix:";
            cin >> column1;
            cout << "\nRow size for second matrix:";
            cin >> row2;
            cout << "\nColumn size for second matrix:";
            cin >> column2;
            if ((column1 != column2) || (row1 != row2)){
                cout << "Error, cannot process.";
                return 0;
            }
            else if ((column1 > 10 ) || (row1 > 10)){
                cout << "Size of matrix is too big! exiting.";
                return 0;
            }
            else if ((column2 > 10) || (row2 > 10)){
                cout << "Size of matrix is too big! What are you, crazy?! Exiting...";
                return 0;

            }
            else if((column1 <= 0) || (row1 <= 0)){
                cout << "Size of matrix is too small! Exiting.";
                return 0;
            }
            else if ((column2 <= 0) || (row2 <= 0)){
                cout << "Size of matrix is too small! You know better. Exiting.";
                return 0;

            }
            else{
            sub(row1, column1, row2, column2);
            }
            break;

        case 3:
            cout << "\nYou have selected multiplication.";
            cout << "\nRow size for first matrix:";
            cin >> row1;
            cout << "\nColumn size for first matrix:";
            cin >> column1;
            cout << "\nRow size for second matrix:";
            cin >> row2;
            cout << "\nColumn size for second matrix:";
            cin >> column2;
            if ((column1 != column2) || (row1 != row2)){
                cout << "Error, cannot process.";
                return 0;
            }
            else if ((column1 > 10 ) || (row1 > 10)){
                cout << "Size of matrix is too big! exiting.";
                return 0;
            }
            else if ((column2 > 10) || (row2 > 10)){
                cout << "Size of matrix is too big! What are you, crazy?! Exiting...";
                return 0;

            }
            else if((column1 <= 0) || (row1 <= 0)){
                cout << "Size of matrix is too small! Exiting.";
                return 0;
            }
            else if ((column2 <= 0) || (row2 <= 0)){
                cout << "Size of matrix is too small! You know better. Exiting.";
                return 0;

            }
            else{
            mul(row1, column1, row2, column2);
            }

            break;



        default:
            cout<< "\nAction not recognized, exiting.";
            return 0;
            break;

    }



    return 0;
}
