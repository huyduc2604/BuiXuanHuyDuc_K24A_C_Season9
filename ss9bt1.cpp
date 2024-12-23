#include<stdio.h>
int main(){
    int array[100];
	int sophantu,phantu,vitri,dodaiphantu=0;
	printf("moi ban nhap so phan tu la: ");
	scanf("%d",&sophantu);
	while(sophantu>100){
		printf("moi ban nhap lai so phan tu tu be hon 100 la: ");
		scanf("%d",&sophantu);
	}
	dodaiphantu=sophantu;
	for(int i=0;i<sophantu;i++){
		printf("moi ban nhap phan tu thu %d la: ",i+1);
		scanf("%d",array+i);
	}
	printf("moi ban nhap gia tri: ");
	scanf("%d",&phantu);
	printf("moi ban nhap vi tri muon them phan tu: ");
	scanf("%d",&vitri);
	while(vitri<0||vitri>sophantu){
		printf("vi tri khong hop le. nhap lai: ");
		scanf("%d",&vitri);
	}
	if(vitri>=sophantu){
		array[vitri]=phantu;
		sophantu=vitri+1;
	}else{
		for(int i=sophantu;i>vitri;i--){
			array[i]=array[i-1];
		}
		array[vitri]=phantu;
		sophantu++;
	}
	for(int i=0;i<sophantu;i++){
		printf("%d ",array[i]);
	}
	return 0;
}
