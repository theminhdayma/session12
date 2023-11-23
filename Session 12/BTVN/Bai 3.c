#include<stdio.h>
#include<math.h>
int isPrime(int number){
    if(number<2){
        return 0;
    }
    for(int i=2;i<=sqrt(number);i++){
        if(number%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int m,n;
    int arr1[m],arr2[n];
    printf("Nhap so luong phan tu mang thu nhat: ");
    scanf("%d",&m);
    printf("Nhap cac phan tu cua mang thu nhat:\n");
    for(int i=0;i<m;i++){
    	printf("arr1[%d]= ",i);
        scanf("%d",&arr1[i]);
    }   
    printf("Nhap so luong phan tu mang thu hai: ");
    scanf("%d",&n);
    printf("Nhap cac phan tu cua mang thu hai:\n");
    for(int i=0;i<n;i++){
    	printf("arr2[%d]= ",i);
        scanf("%d",&arr2[i]);
    }
    printf("Cac so nguyen to trong mang thu nhat:\n");
    int count1=0;
    for(int i=0;i<m;i++){
        if(isPrime(arr1[i])){
            printf("\t%d",arr1[i]);
            count1++;
        }
    }
    printf("\nTong so nguyen to trong mang thu nhat: %d\n", count1);   
    printf("\nCac so nguyen to trong mang thu hai:\n");
    int count2=0;
    for (int i=0;i<n;i++){
        if(isPrime(arr2[i])){
            printf("\t%d",arr2[i]);
            count2++;
        }
    }
    printf("\nTong so nguyen to trong mang thu hai: %d\n",count2);
    if (count1>count2){
        printf("\nMang thu nhat co nhieu so nguyen to hon.");
    }else if(count2>count1){
        printf("\nMang thu hai co nhieu so nguyen to hon.");
    }else{
        printf("\nCa hai mang co so luong so nguyen to bang nhau.");
    }   
    return 0;
}
