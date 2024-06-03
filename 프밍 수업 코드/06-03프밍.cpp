#include <stdio.h>


/*int main(void){
	/*int answer=0;
	int answer1=0;
	int answer2=0; 
	
	for(int i=1; i<=2; i++){
		answer+=i;
	}
	for(int i=1; i<=5; i++){
		answer1+=i;
	}
	for(int i=1; i<=100; i++){
		answer2+=i;
	}
	printf("%d\n",answer);
	printf("%d\n",answer1);
	printf("%d",answer2);*/
	
	/*int a[10]={0,1,2,3,4,5,6,7,8,9};
	int tmp;
	
	int tmp=a[0];
	a[0]=a[3];
	a[3]=tmp;
}*/

/*int Increment(int n){
	n++;
	return n;
}
int main(void){
	int num=2;
	
	num=Increment(num);
	printf("num:%d\n",num);
	
	num=Increment(num);
	printf("num:%d\n",num);
	
	num=Increment(num);
	printf("num:%d\n",num);
	return 0;
}*/

#include<stdio.h>
char getGrade(int score){
    if(score>=90){
        return 'A';
    }else if(score>=80){
        return 'B';
    }else if(score>=70){
        return 'C';
    }else {
        return 'D';
    }
}
int getMoney(int score){
    if(score>80){
        return 100;
    }else if(score>=80){
        return 70;
    }else{
        return 50;
    }
}

int main(){
    int point = 1;
    while(point>0){
        scanf("%d",&point);
        printf("%c\n",getGrade(point));
        printf("%d\n",getMoney(point));

    }
}


