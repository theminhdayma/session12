#include<stdio.h>

int sum(int a, int b){
	int result=a+b;
	return result;	
}
int signal(int a, int b){
	if(a>b){
		int result=a-b;
		return result;
	}else if(a<b){
		int result=b-a;
		return result;
	}else{
		int result=0;
		return result;
	}
}
int main(){
	int a,b,c;
	printf("Nhap vao 3 so nguyen: ");
	scanf("%d%d%d",&a,&b,&c);
	int total1=sum(a,b);
	printf("Tong cua %d va %d la: %d\n",a,b,total1);
	int total2=sum(a,c);
	printf("Tong cua %d va %d la: %d\n",a,c,total2);
	int total3=sum(b,c);
	printf("Tong cua %d va %d la: %d\n",b,c,total3);
	int signal1=signal(a,b);
	printf("Hieu cua %d va %d la: %d\n",a,b,signal1);
	int signal2=signal(a,c);
	printf("Hieu cua %d va %d la: %d\n",a,c,signal2);
	int signal3=signal(b,c);
	printf("Hieu cua %d va %d la: %d\n",b,c,signal3);
}
