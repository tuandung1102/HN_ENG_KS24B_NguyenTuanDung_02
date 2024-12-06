#include <stdio.h>
	int soHH(int a){
               int s=0;
              for(int i=1;i<=a/2;i++)if(a%i==0)s+=i;
               if(s==a)return 1;
              else return 0;
}
                	void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main(){
	int chose,temp,dem,max1,max2,checkTM,gt,vt,position,x,tg;
	int n;
    int arr[100];
	
	do {
		printf("MENU \n");
		printf("1. Nhap so phan tu va gia tri cho mang\n");
		printf("2. In ra gia tri cac phan tu trong mang theo dang (arr[0] = 1, arr[1] = 5,..)\n");
		printf("3. Dem so luong cac so hoan hao co trong mang. Biet so hoan hao la so co tong cac uoc bang chinh no\n");
		printf("4. Tim gia tri lon thu 2 trong mang, khong duoc sap xep mang\n");
		printf("5. Them mot phan tu vao vi tri ngau nhien trong mang, phan tu moi va vi tri them vao mang do nguoi dung nhap vao. Chi them phan tu do vao mang neu phan tu do chua ton tai\n");
	    printf("6. Xoa phan tu tai vi tri cu the, nguoi dung nhap vi tri\n");
	    printf("7. Sap xep mang theo thu tu tang dan(Bubble sort)\n");
	    printf("8. Cho nguoi dung nhap vao mot phan tu,tim kiem xem phan tu do co ton tai trong mang hay khong(Linear search)\n");
	    printf("9. Sap xep lai mang va hien thi ra toan bo phan tu co trong mang sao cho toan bo so le dung truoc so chan dung sau\n");
	    printf("10. Kiem tra xem mang co tang dan hay khong\n");
	    printf("11. Thoat\n");
	    scanf("%d", &chose);
	    switch(chose){
	    	case 1:
	    	 
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
   
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

              printf("Cac phan tu trong mang: ");
                for (int i = 0; i < n; i++) {
               printf("%d ", arr[i]);
    }
             printf("\n");
             break;
           case 2:
           	printf("Gia tri cac phan tu trong mang:\n");
           	for (int i=0;i<n;i++){
           		printf("arr[%d]=%d,",i,arr[i]);
			   }
           	 printf("\n");
           	  break;
           case 3:
           
            for(int i=0;i<n;i++)if(soHH(arr[i]))dem++;
            printf("So luong so hoan hao: %d\n",dem);
            break;
            case 4:
            	
                for(int i=0;i<n;i++)max1=fmax(max1,arr[i]);
                for(int i=0;i<n;i++)if(arr[i]>max2&&arr[i]<max1)max2=arr[i];
                printf("Phan tu lon thu 2 trong mang: %d\n",max2);
                break;
            case 5:
                checkTM=0;
                printf("Nhap gia tri can them vao mang: ");
                scanf("%d",&gt);
                for(int i=0;i<n;i++){
                    if(arr[i]==gt)checkTM=1;
                }
                if(checkTM!=0)printf("Gia tri da co trong mang\n");
                else{
                    printf("Nhap vi tri can them vao mang: ");
                    scanf("%d",&vt);
                    if(vt==n){
                        arr[n]=gt;
                        n++;
                    }
                    else if(vt>n){
                        printf("Vi tri nhap vao khong hop le\n");
                    }
                    else{
                        for(int i=n;i>=vt;i--)arr[i]=arr[i-1];
                        arr[vt]=gt;
                        n++;
                        printf("Da them gia tri theo yeu cau\n");
                    }
                }
                break;
                case 6:
                	printf("Nhap vi tri can xoa: ", n - 1);
                     scanf("%d", &position);

  
                     if (position < 0 || position >= n) {
                     printf("Vi tri khong hop le!\n");
                     return 1;
                    }


                    for (int i = position; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                  }
                    n--; 

   
                     printf("Mang sau khi xoa: ");
                      for (int i = 0; i < n; i++) {
                       printf("%d ", arr[i]);
                      }
                     printf("\n");
                break;	
                case 7:

           
              printf("Mang ban dau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    bubbleSort(arr, n);

    
    printf("Mang sau khi sap xep (tang dan): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    break;
            case 8:
            	
            	 
    printf("Nhap so nguyen can tim: ");
    scanf("%d", &x);
         int result;
    if (result != -1) {
        printf("So %d duoc tim thay tai vi tri %d \n", x, result);
    } else {
        printf("Khong tim thay so %d trong mang\n", x);
    }
          break;
      
           	
           	
          
         
           	


	
	   
	
}
   


}while (chose!=11);

  return 0;
}
