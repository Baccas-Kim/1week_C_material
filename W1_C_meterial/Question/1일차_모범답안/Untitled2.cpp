#include <stdio.h>

//========================================
#if 0
int main(void) 
{
	printf("\t!\n");
	printf("0\t!\n");
	printf("01\t!\n");
	printf("012\t!\n");
	printf("0123\t!\n");
	printf("01234\t!\n");
	printf("012345\t!\n");
	printf("0123456\t!\n");
	printf("01234567\t!\n");
	printf("012345678\t!\n");
	
	return 0;
}

//========================================
#include <stdio.h>
int main(void) 
{
	printf("%d \n", 12);
	printf("%d \n" , 014);
	printf("%d \n", 0xc);
	return 0;
}


//========================================
int main(void) 
{
	int age=0;
	double height = 0;
	
	printf("���̿� Ű�� �Է����ּ���");
	scanf("%d %lf",  &age, &height);
	printf("����:%d  Ű%lf", age, height);
		
	return 0;
}


//========================================
#endif
int main(void) 
{
	int age=0;
	double height = 0;
	char name[300] = {0};
	char buffer = 0;
	 
	printf("�̸��� �Է��� �ּ��� : ");
	
	//for(unsigned int i = 0 ; i < 299 ; i++ ) {
		scanf("%s", name); 
	//}
	
	
	printf("���̿� Ű�� �Է����ּ��� : ");
	scanf("%d %lf",  &age, &height);
	printf("�̸� : %s\n",name);
	printf("���� : %d\n\rŰ : %lf\n", age, height);
		
	return 0;
}

