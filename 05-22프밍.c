#include <stdio.h>

int main() {
	
	/*char *str = "He Is My Best Friend!"; 
    int upper = 0;  

    
    while (*str) {  
        if (*str >= 'A' && *str <= 'Z') {  //아스키코드 사용 
            upper++;  
        }
        str++;  
    }

    printf("%d\n", upper);  

    return 0;*/
    
    /*int arr[5]={1,2,3,4,5};
    int i;
    
    for(i=0; i<5; i++)
    printf("%d",arr[i]);
    
    printf("\n");
    
    for(i=0; i<5; i++)
    printf("%d",*(arr+i)); //*arr==arr[0], *(arr+1)==arr[1]
    
    printf("\n");
    printf("%d",*(arr+2)); //0+2=3 arr[3]
    return 0;*/

    int ary[3];
	*ary=10;
	*(ary+1)=20;
	scanf("%d",ary+2);
	
	for(int i=0; i<3; i++){
		printf("%d",*(ary+i));
	}
	return 0;
}


  /*  #include <stdio.h>
    
    int main(void){
    	int ary[3];
    	int*pa=ary;
    	
    	*pa=10;
    	*(pa+1)=20;
    	pa[2]=pa[0]+pa[1];
    	for(int i=0; i<sizeof(ary)/sizeof(int);i++){
    		
		}
    	
}*/



