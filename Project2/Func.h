#pragma once
#include<iostream>
#include<string>
#include<ctime>
#include<conio.h>
#include<Windows.h>
using namespace std;
const int SIZE_ARR = 10;
#define CLEAR system("cls");
#define SLEEP Sleep(1500);
void FillRand(int start, int end);
void  ShowArr();
void SearchingElem(int elem);
void AvgArr();
void Multiples();
void Bubble(int order);
void Insert(int order);
void Select(int order);
void Shift(int shift, int direction);