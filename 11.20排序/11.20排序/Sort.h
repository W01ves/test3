#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//��ӡ
void ArrPrint(int* a, int n);

// ֱ�Ӳ�������
void InsertSort(int* a, int n);
// ϣ������
void ShellSort(int* a, int n);


// ѡ������
void SelectSort(int* a, int n);
// ������
void AdjustDwon(int* a, int n, int root);
void HeapSort(int* a, int n);