#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>


// ���� �޴��� ����ϰ� ���õ� �޴� ��ȣ�� �����ϴ� �Լ�

int menu_disp();                                   


// ������ �ζǹ�ȣ�� �Է��ϰ� Ȯ���ϴ� �Լ�

void auto_mynum_input(int (*mynum)[7]);            // �ڵ� �ζǹ�ȣ �Է�
void keyin_mynum_input(int (*mynum)[7]);           // ���� �ζǹ�ȣ �Է�
void file_mynum_input(int (*mynum)[7]);            // ���� �ζǹ�ȣ �Է�
void mynum_display(int (*mynum)[7]);               // �Է��� �ζǹ�ȣ ȭ�����


// ��÷�� �ζǹ�ȣ�� ���ݾ��� �Է��ϰ� Ȯ���ϴ� �Լ�

void keyin_lotdata_input(int (*lotnum)[8], double (*lotmoney)[6]);
void file_lotdata_input(int (*lotnum)[8], double (*lotmoney)[6]);
void lotdata_display(int (*lotnum)[8], double (*lotmoney)[6]);


// ��÷����� ����ϴ� �Լ�

void winning_display(int (*mynum)[7], int (*lotnum)[8], double (*lotmoney)[6]);  // ��÷�ݾ� ���


// �߰��� �ʿ��� �Լ� 

void num_generator(int *nums, int cnt);            // nums�迭�� cnt���� ���� ����
int is_here(int *nums, int val, int cnt);          // nums�迭�� val�� ���� �ִ��� cnt���� �迭��� �˻�
int num_counter(int *mynum, int *lotnum);          // mynum�� lotnum�迭�� ��ġ�ϴ� ��ȣ�� ���� ����
int get_index(int num, int (*lotnum)[8]);          // lotnum�迭���� num�� �� ��° �࿡ �ִ��� index���� 