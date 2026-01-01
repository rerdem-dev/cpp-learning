#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int password;
int enteredpassword;
int choice;
int checkinroom;
int checkoutroom;
string guestname;

int main()
{
    password = 1234;

    int rooms[6][4];

    rooms[0][0] = 1;
    rooms[0][1] = 2;
    rooms[0][2] = 3;
    rooms[0][3] = 4;
    rooms[1][0] = 5;
    rooms[1][1] = 6;
    rooms[1][2] = 7;
    rooms[1][3] = 8;
    rooms[2][0] = 9;
    rooms[2][1] = 10;
    rooms[2][2] = 11;
    rooms[2][3] = 12;
    rooms[3][0] = 13;
    rooms[3][1] = 14;
    rooms[3][2] = 15;
    rooms[3][3] = 16;
    rooms[4][0] = 17;
    rooms[4][1] = 18;
    rooms[4][2] = 19;
    rooms[4][3] = 20;
    rooms[5][0] = 21;
    rooms[5][1] = 22;
    rooms[5][2] = 23;
    rooms[5][3] = 24;

    bool occupied[6][4] = { false };
    string guest[6][4] = { "" };

    cout << "Enter password: ";
    cin >> enteredpassword;

    if (enteredpassword != password)
    {
        cout << "Access Denied!" << endl;
        return 0;
    }

    while (true)
    {
        system("cls");
        cout << "1. View all rooms" << endl;
        cout << "2. Make a check-in" << endl;
        cout << "3. Make a check-out" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;

        if (choice == 1)
        {
            system("cls");
            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    cout << "Room " << rooms[i][j] << " : ";
                    if (occupied[i][j])
                        cout << "Occupied by " << guest[i][j] << endl;
                    else
                        cout << "Empty" << endl;
                }
            }
            system("pause");
        }
        else if (choice == 2)
        {
            system("cls");
            cout << "Enter room number and guest name: ";
            cin >> checkinroom >> guestname;

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    if (rooms[i][j] == checkinroom)
                    {
                        if (occupied[i][j])
                        {
                            cout << "Room already occupied!" << endl;
                        }
                        else
                        {
                            occupied[i][j] = true;
                            guest[i][j] = guestname;
                            cout << "Check-in successful." << endl;
                        }
                    }
                }
            }
            system("pause");
        }
        else if (choice == 3)
        {
            system("cls");
            cout << "Enter room number: ";
            cin >> checkoutroom;

            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    if (rooms[i][j] == checkoutroom)
                    {
                        if (occupied[i][j])
                        {
                            occupied[i][j] = false;
                            guest[i][j] = "";
                            cout << "Check-out successful." << endl;
                        }
                        else
                        {
                            cout << "Room already empty." << endl;
                        }
                    }
                }
            }
            system("pause");
        }
        else if (choice == 4)
        {
            break;
        }
        else
        {
            cout << "Invalid choice!" << endl;
            system("pause");
        }
    }

    return 0;
}
