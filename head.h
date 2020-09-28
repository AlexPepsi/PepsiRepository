#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

struct group
{
    char name[10];
    char last_name[10];
    int age;
};

int main();
void NewEmploy(group*& employ, int& size);
void ChangeEmploy(group*& employ, int& size);
void DeleteEmploy(group*& employ, int& size);
void ExportInfo(group*& employ, int& size);
void ImportInfo(group*& employ, int& size);