#include<stdio.h>

int multiply(int a, int b){
	int result=a*b;
	return result;	
}
int divide(int a, int b){
	if(a>b){
		if(a%b==0){
			int result=a/b;
			return result;
		}else{
			printf("Khong chia het");
			return 0;
		}
	}else if(a<b){
		if(b%a==0){
			int result=b/a;
			return result;
		}else{
			printf("Khong chia het");
			return 0;
		}
	}
}
int main(){
	int a,b,c;
	printf("Nhap vao 3 so nguyen: ");
	scanf("%d%d%d",&a,&b,&c);
	int accumulation1=multiply(a,b);
	printf("Tich cua %d va %d la: %d\n",a,b,accumulation1);
	int accumulation2=multiply(a,c);
	printf("Tich cua %d va %d la: %d\n",a,c,accumulation2);
	int accumulation3=multiply(b,c);
	printf("Tich cua %d va %d la: %d\n",b,c,accumulation3);
	int quotient1=divide(a,b);		
	printf("Thuong cua %d va %d la: %d\n",a,b,quotient1);
	int quotient2=divide(a,c);
	printf("Thuong cua %d va %d la: %d\n",a,c,quotient2);
	int quotient3=divide(b,c);
	printf("Thuong cua %d va %d la: %d\n",b,c,quotient3);
}
