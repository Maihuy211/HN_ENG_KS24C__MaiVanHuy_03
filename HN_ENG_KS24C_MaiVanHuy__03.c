#include<stdio.h>
int main(){
	int choice;
	do{
		printf("\nMenu\n");
		printf("1.Nhap so phan tu cua mang\n");
		printf("2.In ra gia tri cac phan tu trong mang\n");
		printf("3.Dem so luong cac phan tu trong mang\n");
		printf("4.Tm gia tri nho thu 2 trong mang\n");
		printf("5.Them mot phan tu vao vi tri ngau nhien trong mang, phan tu moi them vao mang\n");
		printf("6.Xoa phan tu tai mot vi tri cu the\n");
		printf("7.Sap xep mang theo thu tu giam dan\n");
		printf("8.Cho nguoi dung nhap vao mot phan tu de xem phan tu do co ton tai trong mang hay ko\n");
		printf("9.Xoa toan bo phan tu trung lap trong mang va hien thi toan bo phan tu doc nhat co o trong mang\n");
		printf("10.Dao nguoc thu tu cac phan tu co trong mang\n");
		printf("11.Thoat\n");
		printf(" \n");
		printf("Nhap lua chon: ");
		scanf("%d",&choice);
		switch(choice){
			int i,n,arr[100];
			case 1:
				printf("Nhap so phan tu: ");
				scanf("%d",&n);
				printf("Nhap cac gia tri cho mang: \n");
				for(i=0;i<n;i++){
					scanf("%d",&arr[i]);
			    }
			    printf(" \n");
				break;
			case 2:
			    printf("Gia tri cua cac phan tu trong mang la:\n");
				for(i=0;i<n;i++){
					printf("arr[%d]= %d\n",i,arr[i]);
				}	
			    printf(" \n");
				break;
			int cout;
			case 3:
				cout=0;
				for(i=0;i<n;i++){
					cout+=1;
				}
				printf("so luong cac phan tu trong mang la: %d",cout);
			    printf(" \n");
				break;
			int min,min2;
			case 4:
				min=arr[0];
				for(i=0;i<n;i++){
					if(arr[i]<min){
						min=arr[i];
					}
				    if(arr[i]<min){
				    	min2=arr[i];
					}
				}
				printf("gia tri nho thu 2 trong mang la: %d",min2);
				printf(" \n");
				break;
			int pos,val;
			case 5:
				printf("Nhap gia tri muon them vao mang: ");
				scanf("%d",&val);
				printf("Nhap vi tri muon them vao mang: ");
				scanf("%d",&pos);
				if(pos<0||pos>n){
					printf("vi tri khong hop le");
				}else{
					for(i=n;i>=pos;i--){
						arr[i]=arr[i-1];
					}
					arr[pos]=val;
					n++;
				    printf("Gia tri cua cac phan tu trong mang la:\n");
				        for(i=0;i<n;i++){
					        printf("arr[%d]= %d\n",i,arr[i]);
				        }	
				}
				printf(" \n");
				break;
			case 6:
				printf("Nhap vi tri muon xoa vao mang: ");
				scanf("%d",&pos);
				if(pos<0||pos>n){
					printf("vi tri khong hop le");
				}else{
					for(i=pos;i<n-1;i++){
						arr[i]=arr[i+1];
					}
					n--;
				    printf("Gia tri cua cac phan tu trong mang la:\n");
				        for(i=0;i<n;i++){
					        printf("arr[%d]= %d\n",i,arr[i]);
				        }
			    }   
				printf(" \n");
				break;
			int key,j;
			case 7:
				for(i=1;i<n;i++){
					key=arr[i];
					j=i-1;
				    for(j=i-1;j>=0&&arr[j]>=key;j--){
				        arr[j+1]=arr[j];
				    }
				    arr[j+1]=key;
				}
				printf("Gia tri cua cac phan tu trong mang la:\n");
				for(i=0;i<n;i++){
					printf("arr[%d]= %d\n",i,arr[i]);
				}	
			    printf(" \n");
				break;
	        int x,mid,start,end,check;
	        case 8:
				printf("Nhap mot so: ");
	        	scanf("%d",&x);
				start=0;
				end=n-1;
				while(start<=end){
				    mid=start+(end-start)/2;
			        if(arr[mid]==x){
			        	printf("phan tu giong %d nam o vi tri la: %d",x,mid);
					}else if(arr[mid]>x){
						end=mid-1;
					}else{
						start=mid+1;
				    }
		        }
				if(arr[mid]==x){
					printf("phan tu giong %d nam o vi tri la: %d",x,mid);	
				}else{
					printf("khong co phan tu");
				}
				printf(" \n");
				break;	
				case 9:	
			
			   // if(arr[])
			
			
			
			case 10:
			    printf("Gia tri cua cac phan tu trong mang la:\n");
				for(i=n-1;i>=0;i--){
					printf("arr[%d]= %d\n",i,arr[i]);
				}	
			    printf(" \n");
				break;	
	        	
	        	
	        	
			case 11:	
			printf(" \n");
			break;
			default:
				printf("ko hop le");
		}		
				
	}while(choice!=11);
	
	
	return 0;
	}
