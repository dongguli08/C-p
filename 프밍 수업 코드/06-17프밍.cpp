#include <stdio.h>
#include <string.h>
//
//typedef struct _person
//{
//	char name[30];
//	char ID[15];
//	unsigned int age;
//}person;
//
//int main(void){
//	int i;
//	person personArr[3]={
//	{"한종수","900218-1012589",20},
//	{"이성은","900218-1012589",19},
//	{"윤석열","900218-1012589",17}
//	}:	
//	
//	return 0; 
//}

//#define ARRY_LEN 3
//#define NAME_LEN 30
//#define PID_LEN 15
//
//typedef struct _person
//{
//	char name[NAME_LEN];
//	char ID[PID_LEN];
//	unsigned int age;
//}person;
//
//void ShowPersonData(person * ptr);
//
//int main(void)
//{
//	int i;
//	person personArr[ARRY_LEN]={
//	{"한종수","900218-1012589",20},
//	{"이성은","900218-1012589",19},
//	{"윤석열","900218-1012589",17}
//	};
//	for(i=0; i<ARRY_LEN;i++)
//	ShowPersonData(&personArr[i]);
//return 0; 
//}

//struct _person
//{
//	char name[30];
//	char ID[15];
//	unsigned int age;
//};
//typedef struct _person person;
//
//void ShowPersonData(person*ptr){
//	printf("이름:%s\n",(*ptr).name);
//	printf("주민등록번호:%s\n",(*ptr).ID);
//	printf("나이:%u\n",ptr->age);
//}
//
//int main(void)
//{
//	person jongsoo;
//	person copyman;
//	person * personPtr;
//	strcpy(jongsoo.name,"한종수");
//	strcpy(jongsoo.ID,"900218-1012589");
//	jongsoo.age=20;
//	
//	copyman=jongsoo;
//	personPtr=&copyman;
//	ShowPersonData(personPtr);
//	return 0; 
//}

//#define PI 3.14
//typedef struct _point
//{
//	double xpos;
//	double ypos;
//}point;
//
//typedef struct _circle
//{
//	point center;
//	double rad;
//}circle;
//
//void ShowCircleInfo(const circle * ptr)
//{
//	printf("원의 중심:[%g,%g]\n",(ptr->center).xpos,(ptr->center).ypos);
//	printf("원의넓이:%g\n",(ptr->rad)*(ptr->rad)*PI);
//}
//int main(void)
//{
//	circle c1={
//	{1.1,2.2},
//	2.5
//	};
//	ShowCircleInfo(&c1);
//	return 0;
//}

//typedef struct box
//{
//	int data;
//	struct box * boxRef;
//}box;
//int main(void)
//{
//	int i;
//	box * bxptr;
//	
//	box b1={1,NULL};
//	box b2={11,NULL};
//	
//	b2.boxRef=&b2;
//	b2.boxRef=&b1;
//}

typedef struct box
{
	int data;
	struct box * boxRef;
}box;

int main(void)
{
	int i;
	box *bxPtr;
	
	box b1={1,NULL};
	box b2={2,NULL};
	
	b1.boxRef=&b2;
	b2.boxRef=&b1;
	
	bxPtr=&b1;
	for(i=1; i<=10; i++)
	{
		printf("%3d",bxPtr->data);
		(bxPtr->data)++;
		bxPtr=bxPtr->boxRef;
		if(!(i%2))
		printf("\t");
	}
	return 0;
}
