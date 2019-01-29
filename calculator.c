#include<stdio.h>
int addition(int, int);
void display(int);
int main(){
	int b=0,c=0;
	printf("Enter two values\n");
	scanf("%d,%d",&b,&c);
	display(addition(b,c));
	return 0;	
	}

int addition(int x, int y){
return x+y;
}
void display(int a){
printf("the result is %d\n", a);
}

