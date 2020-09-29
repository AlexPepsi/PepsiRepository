#include "head.h"


void NewEmploy(group*& person, int& size)
{
    group* tmp = new group[size + 1];

    for (int i = 0; i < size; i++)
    {
        strcpy(tmp[i].name, person[i].name);
        strcpy(tmp[i].last_name, person[i].last_name);
        tmp[i].age = person[i].age;
    }

    size++;

    cout << "Name : ";
    cin >> tmp[size - 1].name;
    cout << "Lastname : ";
    cin >> tmp[size - 1].last_name;
    cout << "Age : ";
    cin >> tmp[size - 1].age;



    delete[] person;
    person = tmp;
}
void DeleteEmploy(group*& person, int& size)
{

    for (int i = 0; i < size; i++)
    {
        cout << "Name : " << person[i].name << endl;
        cout << "Lastname : " << person[i].last_name << endl;
        cout << "Age : " << person[i].age << endl;
        cout << "------------------------- " << endl;
    }

    group* tmp = new group[size - 1];

    int delete_unit;
    cout << "Who do you want to remove : ";
    cin >> delete_unit;
    for (int i = 0; i < size; i++)
    {
        if (i >= delete_unit)
        {
            strcpy(tmp[i - 1].name, person[i].name);
            strcpy(tmp[i - 1].last_name, person[i].last_name);
            tmp[i - 1].age = person[i].age;
        }
        else
        {
            strcpy(tmp[i].name, person[i].name);
            strcpy(tmp[i].last_name, person[i].last_name);
            tmp[i].age = person[i].age;
        }
    }

    size--;
    delete[] person;
    person = tmp;

}

void ChangeEmploy(group*& person, int& size)
{
    group* tmp = new group[size];

    int change_unit;
    int change_info;
    cout << "Who do you want to change : ";
    cin >> change_unit;
    cout << "What do you want to change - name, lastname or age : ";
    cin >> change_info;

    for (int i = 0; i < size; i++)
    {
        strcpy(tmp[i].name, person[i].name);
        strcpy(tmp[i].last_name, person[i].last_name);
        tmp[i].age = person[i].age;
    }

    if (change_info == 1)
    {
        cout << "Input your new info :";
        cin >> tmp[change_unit].name;
    }
    if (change_info == 2)
    {
        cout << "Input your new info :";
        cin >> tmp[change_unit].last_name;
    }
    if (change_info == 3)
    {
        cout << "Input your new info :";
        cin >> tmp[change_unit].age;
    }

    delete[] person;
    person = tmp;
}

void ExportInfo(group*& person, int& size)
{
    FILE* f = fopen("data.txt", "w");
    for (int i = 0; i < size; i++)
    {
        fprintf(f, "%s,%s,%d\n", person[i].name, person[i].last_name, person[i].age);
    }
    fclose(f);
}

void ImportInfo(group*& person, int& size)
{
    FILE* f = fopen("data.txt", "r");
    int i = 0;
    while (fscanf(f, "%[^,],%[^,],%d\n", person[i].name, person[i].last_name, &person[i].age) != EOF)
    {
        i++;
    }
    fclose(f);
}