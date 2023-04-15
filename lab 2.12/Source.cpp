#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "FunctionForTornArray.h"

/*������ ����������� ������������. ���������� �����
������������ ����� �����������. ���������� ��������� ������
������������ ������������ ��������.*/


int main() {
	system("chcp 1251");
	const char storage_for_txt[50] = "storage.txt";
	const char storage_for_bin[50] = "binary_storage.bin";
	RaggedArray mas;
	RaggedArray mas_2;
	int limiter = 99999;

	int flag_1;
	do {
		printf("������ ������ ��� ������� ������?\n1 - ������ ������\n2 - ������� �� ���������� �����\n3 - ������� �� ��������� �����\n"); scanf_s("%d", &flag_1);
	} while (flag_1 > 3 or flag_1 < 1);
	if (flag_1 == 1) {
		do {
			printf("rows = "); scanf_s("%d", &mas.rows);
		} while (mas.rows < 1);
		array_allocate_1(mas);


		task(mas, limiter);
	}

	if (flag_1 == 2) {
		print_txt_file(mas, storage_for_txt, limiter);
		exit(1);
	}
	if (flag_1 == 3) {
		print_bin_file(mas, storage_for_bin, limiter);
		exit(1);
	}

	int flag = 0;
	do {
		printf("������ ��������� ������ � ����?\n0 - ���\n1 - ��\n"); scanf_s("%d", &flag);
	} while (flag > 1 or flag < 0);
	if (flag == 1) {
		int switcher;
		do {
			printf("���� ��������� ������?\n1 - ��������� ����\n2 - �������� ����\n"); scanf_s("%d", &switcher);
		} while (switcher > 2 or switcher < 1);
		switch (switcher) {
		case 1:
			save_in_txt_file(mas, storage_for_txt, limiter);
			break;
		case 2:
			save_in_bin_file(mas, storage_for_bin, limiter);
			break;
		}
	}

	//������ �� ��������
	int workStrings;
	printf("\n������ �� �������\n0 - �����\n1 - ���������� � ������\n2 - �������� � ������\
	\n3 - ����� �����\n� - ���������\n");
	scanf_s("%d", &workStrings);
	int counter;
	if (workStrings == 1) {
		addPLine(mas, mas_2, limiter);
	}
	if (workStrings == 2) {
		deletePLine(mas, limiter);
	}
	if (workStrings == 3) {
		shiftLine(mas, mas_2, limiter);
	}
	return 0;
}