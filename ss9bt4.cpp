#include<stdio.h>
int main(){
	int chose,value,length,allow=1,addValue=0,addIndex=0,changeValue=0,changeIndex=0,deleIndex=0,array[value];
	do{
	printf("     Menu\n");
	printf("1. Nhap vao mang\n");
	printf("2. Hien thi mang\n");
	printf("3. Them phan tu\n");
	printf("4. Sua phan tu\n");
	printf("5. xoa phan tu\n");
	printf("6. thoat\n");
	printf("Lua chon cua ban la: ");
	scanf("%d",&chose);
	switch(chose){
		case 1:
			printf("moi ban nhap so phan tu :");
			scanf("%d",&value);
			for(int i=0;i<value;i++){
				printf("moi ban nhap phan tu thu %d la: ",i+1);
				scanf("%d",&array[i]);
			}
			allow=0;
			break;
		case 2:
			if(allow){
				printf("moi ban nhap vao mang\n");
			}else{
				printf("phan tu cua ban la:\n");
				for(int i =0;i<value;i++){
					printf("%d ",array[i]);
				}
				printf("\n");
			}
			break;
		case 3:
			if(allow){
				printf("moi ban nhap vao mang\n");
			}else{
				array[value+1];
				printf("moi ban nhap phan tu muon them: ");
				scanf("%d",&addValue);
				printf("moi ban nhap vi tri muon them");
				scanf("%d",&addIndex);
				if(addIndex>=value){
					array[addIndex]=addValue;
					value+=1;
				}else{
				for(int i=value;i+1>addIndex;i--){
					array[i]=array[i-1];
				}
				array[addIndex-1]=addValue;
				value++;
			}
			
			for(int i=0;i<value;i++){
				printf("%d ",array[i]);
			}
			printf("\n");
		}
			break;
		case 4:
			if(allow){
				printf("moi ban nhap vao mang\n");
			}else{
				printf("moi ban nhap vi tri la: ");
				scanf("%d",&changeIndex);
				printf("moi ban nhap phan tu la: ");
				scanf("%d",&changeValue);
				array[changeIndex-1]=changeValue;
			
			for(int i=0;i<value;i++){
				printf("%d ",array[i]);
			}
			printf("\n");
			}
			break;
		case 5:
			if(allow){
				printf("moi ban nhap vao mang\n");
			}else{
				printf("moi ban nhap vi tri can xoa: ");
				scanf("%d",&deleIndex);
				if(deleIndex>=value){
					length-=1;
				}else{
					for(int i=(deleIndex-1);i<value;i++){
						array[i]=array[i+1];
					}
					value-=1;
				}
			
				for(int i=0;i<value;i++){
				printf("%d ",array[i]);
			}
			printf("\n");
		}
			break;
		case 6:
			printf("tam biet va hen gap lai ban nhe <3");
			break;	
	}
    }while(chose!=6);
    return 0;
}
