#pragma once
#include <stdio.h>
#include <tchar.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <io.h>
void AllDetail(char* Path);   //��ʾ���У� �����У�ע����
int CodeCount(char* Path);	  //�����ַ�����
void CountWordsFrequency(char* path);
int LineCount(char* Path);    //��������
void Run(char* path[100], char* command[20], char* result);
char** ScanCommand(int length, char** parameter);
int WordCount(char* Path);
char** ScanPath(int length, char** parameter);
void writeToFile(char* result);

