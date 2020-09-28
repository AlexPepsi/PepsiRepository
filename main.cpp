#include "head.h"


int main()
{
    int InitialNumberOfPersons = 4;
    group* Person = new group[InitialNumberOfPersons];

    ImportInfo(Person, InitialNumberOfPersons);
    int choose;
    do
    {
        cout << "1. Add new employ" << endl;
        cout << "2. Change employ info" << endl;
        cout << "3. Delete employ" << endl;
        cout << "4. Display all persons" << endl;

        cout << "5. Download all data to file" << endl;
        cout << "6. Download all data from file" << endl;
        cout << "7. Exit" << endl;

        cout << "Your choose :";
        cin >> choose;
        switch (choose)
        {
        case 1:
            NewEmploy(Person, InitialNumberOfPersons);
            break;
        case 2:
            ChangeEmploy(Person, InitialNumberOfPersons);
            break;
        case 3:
            DeleteEmploy(Person, InitialNumberOfPersons);
            break;
        case 4:
            system("cls");
            for (int i = 0; i < InitialNumberOfPersons; i++)
            {
                cout << "Name : " << Person[i].name << endl;
                cout << "Lastname : " << Person[i].last_name << endl;
                cout << "Age : " << Person[i].age << endl;
                cout << "------------------------- " << endl;
            }
            break;
        case 5:
            system("cls");
            ExportInfo(Person, InitialNumberOfPersons);
            break;
        case 6:
            system("cls");
            ImportInfo(Person, InitialNumberOfPersons);
        case 7:
            system("cls");
            break;     
        }

    } while (choose != 10);

    ExportInfo(Person, InitialNumberOfPersons);

    system("pause");
}
