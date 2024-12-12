#include<stdio.h>
int main(){
	int num[5];
	int total,i;
		for(i=0;i<5;i++){
			printf("moi ban nhap so thu %d la: ",i+1);
			scanf("%d",&num[i]);
		}
		for(i=0;i<5;i++){
			if(num[i]%2!=0){
				total+=num[i];
			}
		}
		printf("tong cac so le ban da nhap la: %d",total);
	}
