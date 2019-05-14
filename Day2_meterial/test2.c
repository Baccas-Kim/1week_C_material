/*
 * test2.c
 *
 *  Created on: 2015. 2. 9.
 *      Author: elayer
 */

#include <stdio.h>

void printBit(unsigned char);

int main()
{
	unsigned char a;
	unsigned char packed = 0;
	printf("���� �Է� (��:0, ��:1): "); 
	scanf("%d", &a);

	packed |= (a & 0x1);

	printf("������ ���� �Է� : "); 
	scanf("%d", &a);

	packed |= ((a<<1) & 0xe);

	printf("���� ���� �Է� (������:0, ����:1): ");
	scanf("%d", &a);

	packed |= ((a<<4) & 0x10);

	printBit(packed);

	return 0;
}

void printBit(unsigned char num)
{
    unsigned char mask = 0x01;
    int i=0;
    for(i=7; i>=0 ; i--)
	{
		if((mask << i) & num)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}

