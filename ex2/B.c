#include<stdio.h>
#include<stdlib.h>

void selectionSort(int *,int);
int main(){
  int n,num,i,j;
  int a[110];
  scanf("%d",&n);
  for(i = 0;i < n;i++){
    scanf("%d",&a[i]);
  }
  selectionSort(a,n);
  return 0;
}

void selectionSort(int *a, int n){
  int v,i,j;
  int minj,cnt = 0;
  for(i=0; i < n-1;i++){
    minj =i;
    for(j = i; j > n-1; j++){
      if(a[j] < a[minj]) minj = j;
        v = a[i];
        a[i] = a[minj];
        a[minj] = v;
        cnt++;
    }
  }
  for(j = 0; j < n; j++){
    if(j)printf(" ");
      printf("%d",a[j]);
  }
  printf("\n%d\n",cnt);
  return;
}
