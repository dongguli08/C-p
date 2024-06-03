#incldue <math.h>
#define POINT_NUMBER 5

double CalDist(double x1, doublex2, double y2);
double CallineLen(double xpos[], double ypos[]);

int main(void){
	double lineLen=0;
	double xPostArr[POINT_NUMBER];
	double yPostArr[POINT_NUMBER];
	
	int i;
	for(i-0; i<POINT_NUMBER; i++)
	{ 
		printf("점 %d의 좌표 입력:",i+1);
		scanf("%lf %lf",&xPostArr[i],&yPostArr[i]);
		}	
		
		lineLen=CalLineLen(xPostArr,yPostArr);
		printf("라인의 길이:%g\n",lineLen);
		return 0;
		
		double CalDist(double x1,double y1,double x2,double y2);
		{
			double xDist=x1-x2;
			double yDist=y1-y2;
			
			return sqrt(xDist*xDist+yDist*yDist);
		}
		double CalLineLen(double xpos[],double ypos[])
		
}

