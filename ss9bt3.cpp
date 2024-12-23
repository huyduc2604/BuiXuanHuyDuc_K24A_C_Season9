#include<stdio.h>
int main(){
	int array[100];
	int numValue,numValueStart,deleIndex,length;
	printf("moi ban nhap so phan tu: ");
	scanf("%d",&numValueStart);
	while(numValue>100){
		printf("moi ban nhap so tu 1-100 la: ");
		scanf("%d",&numValueStart);
	}
	length=numValueStart;
	for(int i=0;i<numValueStart;i++){
		printf("moi ban nhap phan tu thu %d la",i+1);
		scanf("%d",&array[i]);
	}
	printf("moi ban nhap vi tri xoa phan tu la: ");
	scanf("%d",&deleIndex);
	int numValueend=numValueStart;
	if(deleIndex>=numValueStart){
		numValueend-=1;
	}else{
		for(int i=deleIndex-1;i<numValueStart;i++){
			array[i]=array[i+1];
		}
		numValueend-=1;
	}
	for(int i=0;i<numValueend;i++){
		printf("%d",array[i]);
	}
	return 0;
}
