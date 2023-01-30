#include <stdio.h>
#include <conio.h>
int main(){
   int r,x=-1,n=85;
   printf("Enter the number of rows: ");
   scanf("%d", &r);
   for(int i=0;i<=r;++i){
      x=x+i;
   }
   int arr[x];
   for(int i=0;i<=x;++i){
      arr[i]=0;
   }
   arr[4]=1;
   int i,k,j,p=0,h,bino=3,pyra=4,mial=7;
   for(i=0;i<3;++i){
      for(k=0;k<n;++k){
         printf(" ");
      }
      for(j=0;j<=i;++j){
         if(i<3){
         printf("%d   ",arr[p]);
         }
         ++p;
      }
      --n;
      --n;
      printf("\n");
   }
   for(i;i<r;++i){
      for(k=0;k<n;++k){
         printf(" ");
      }
      for(j=0;j<=i;++j){
         if(j==0){
            printf("0   ");
         }
         if(j!=0 && j!=i){
            arr[mial]=arr[bino]+arr[pyra]; //mial = 7
            if(arr[mial]<10){
               printf("%d   ",arr[mial]);
            }
            else if(arr[mial]>9){
            printf("%d  ",arr[mial]);
            }
            ++mial;
            ++bino;
            ++pyra;
        }
         if(j==i){
            printf("0   ");
         }
      }
      mial=mial+2;
      ++bino;
      ++pyra;
      --n;
      --n;
      printf("\n");
   }
   getch();
}
