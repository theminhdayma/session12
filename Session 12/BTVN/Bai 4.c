#include <stdio.h>
int check(int number[],int x){
	int cout=0;
    for(int i=0;i<(x/2);i++){
        if(number[i]!=number[x-i-1]){
			cout++;
        }
    }
    if(cout==0){
    	printf("number[%d] la mang hoan hao\n",x);
	}else{
		printf("number[%d] la mang khong hoan hao\n",x);
	}
}
int main(){
    int n,m;
    printf("Nhap so phan tu mang 1: ");
    scanf("%d",&n);
    printf("Nhap so phan tu mang 2: ");
    scanf("%d",&m);
    int number1[n],number2[m];
    printf("Nhap cac phan tu cua mang 1\n");
    for (int i=0;i<n;i++){
        printf("Number[%d] =",i);
        scanf("%d",&number1[i]);
    }
    printf("Nhap cac phan tu cua mang 2: \n");
    for (int i=0;i<m;i++){
        printf("Numbers[%d] =",i);
        scanf("%d",&number2[i]);
    }
    int x=n; 
    int checkArray1=check(number1,x);
    int y=m;
    int checkArray2=check(number2,y);
}
