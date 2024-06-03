#include <stdio.h>

/*int add(int n1,int n2){
	int result = n1+n2;
	return result;
}
int Min(int n1, int n2)
{
	return n1-n2;
}
int main(void){
	int addResult;
	addResult = add(3,5);
	printf("µ¡¼À °á°ú:%d\n",addResult);
	printf("»¬¼À °á°ú:%d \n",Min(5,2));
	return 0;
}*/



/*void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 10;
    int num2 = 20;

   
    swap(&num1, &num2);

    
    printf("%d %d", num1, num2);

    return 0;
}*/

/*void callbyval(int num)
{
	num++;
}
void callbyref(int * ptr)
{
	(*ptr)++;
}
int main(void){
	int val=10;
	callbyval(val);
	printf("callbyval:%d\n",val);
	callbyref(&val);
	printf("callbyref:%d\n",val);
	return 0;
}*/
/*void swapVal(void* ptr1, void* ptr2, int type) {
   if (type == 2) {
      int tmp;
      tmp = *(int *)ptr1;
      *(int*)ptr1 = *(int*)ptr2;
      *(int*)ptr2 = tmp;
   }
   else if (type == 1) {
      char tmp;
      tmp = *(char*)ptr1;
      *(char*)ptr1 = *(char*)ptr2;
      *(char*)ptr2 = *(char*)ptr1;
   }
   else
   {
      double tmp;
      tmp = *(double*)ptr1;
      *(double*)ptr1 = *(double*)ptr2;
      *(double*)ptr2 = tmp;
   }
}
int main(void){
char ch1= 'a', ch2='b';
int int1=10;, int2=20;
double d1=5.1, d2=10.1;

swapval(&ch1,&ch2,1);
swapval(&int1,&int2,1);
swapval(&d1,&d2,1);
}*/

	/*int print_arr(int arr[10],int n){
		int i;
		for(i=0; i<n; i++){
			printf("%d",arr[i]);
		}
	}
int main(void){
	int arr[10]= {1,2,3,4,5,6,7,8,9,10};
	
	print_arr(arr,sizeof(arr)/sizeof(int));
}

void hello(char *name)
{
	printf("Hello,%s\n",name);
}
int main()
{
	char name[10];
	scanf("%s",name);
	
	hello(name);
	return 0;
}*/
/*void print_arr(int (*arr)[5],int col, int row){
int i,j;
for(i=0; i<row; i++){
	for(j=0; j<col; j++){
		printf("%d",arr[i][j]);
	}
	printf("\n");
 }
}*/

/*int my_strlen(char str[]) {
   int i;
   for(i=0; str[i] !='\0';i++);
    return i; 
}

int main() {
    int len;
    char str[100];

    scanf("%s", str);

    len = my_strlen(str); 
    printf("%d\n", len); 

    return 0;
}*/
int sub_sum(int);
int main(){
	int i,n,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=sub_sum(i);
	}
	printf("%d",sum);
}
int sub_sum(int n){
	int i,sum=0;
	for(int i=0; i<=n;i++) sum+=i;
	return sum;
}

