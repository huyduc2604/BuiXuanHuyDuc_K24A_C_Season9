#include<stdio.h>
int main(){
	int array[10]={1,2,3,4,5,6,7,8,9,10};
	int addIndex,addValue,lengh=10;
	printf("moi ban nhap vi tri can thay doi gia tri: ");
	scanf("%d",&addIndex);
	printf("moi ban nhap gia tri: ");
	scanf("%d",&addValue);
	array[addIndex-1]=addValue;
	for(int i=0;i<lengh;i++){
		printf("%d ",array[i]);
	}
	return 0;
}
