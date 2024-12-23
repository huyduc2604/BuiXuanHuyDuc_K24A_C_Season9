#include<stdio.h>
int main(){
	int chose=0,value,allow,even,total=0,min,max,sum=0,count=0,checkValue;
	int array[1000];
	do{
	printf("     Menu\n");
	printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
	printf("2. In ra gia tri cac phan tu dang quan ly\n");
	printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
	printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
	printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
	printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
	printf("7. Them mot phan tu vao vi tri chi dinh\n");
	printf("8. Thoat\n");
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
			for(int i=0;i<value;i++){
				if(array[i]%2==0){
					total+=array[i];
				printf("%d ",array[i]);
			}
		}
		printf("tong cac so chan la: %d",total);
			printf("\n");
		}
			break;
		case 4:
			if(allow){
				printf("moi ban nhap vao mang\n");
			}else{
				min=array[0];
				max=array[0];
				for(int i=0;i<value;i++){
					if(array[i]>max){
						max=array[i];
					}
					if(min>array[i]){
						min=array[i];
					}
				}
				printf("so lon nhat la: %d",max);
				printf("so lon nho la: %d",min);
			}
			printf("\n");
			break;
		case 5:
			int check;
			  if(allow){
				printf("moi ban nhap vao mang\n");
		      	}else{
                 printf("Cac so nguyen to trong mang la: ");
                for (int i = 0; i < value; i++) {
                if (array[i] < 2) {
                check = 0; 
                } else {
                  for (int j = 2; j * j <= array[i]; j++) {
                    if (array[i] % j == 0) {
                        check = 0;
                        break;
                    }
                  }
                 }
                 if (check) {
                 printf("%d ", array[i]);
                 sum += array[i];
                 count++;
                 }
                  }
                  if (count == 0) {
                 printf("Khong co so nguyen to trong mang.\n");
                 } else {
                   printf("\nTong cac so nguyen to la: %d\n", sum);
                  }
                  }
                 break;
        case 6: 
                if(allow){
                	printf("moi ban nhap vao mang\n");
		      	}else{
                 int count=0;
                 printf("moi ban nhap 1 so de kiem tra co bao nhieu phan tu: ");
                  scanf("%d",&checkValue);
                 for(int i=0;i<value;i++){
               	if(checkValue==array[i]){
        		count++;
		      	}
	          	}
	         	printf("so %d co %d phan tu",checkValue,count);
	         }
	        	break;
		case 7:
			int addIndex,addValue;
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
			
		case 8:
		      	printf("tam biet va hen gap lai ban nhe <3");
		     	break;	
	}
    }while(chose!=8);
    return 0;
}
