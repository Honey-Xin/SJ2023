//顺序表代码测试
#include<stdio.h>
#include<math.h>
#include<algorithm>
#define MaxSize 20
typedef struct{
  int data[MaxSize];
  int length;
}SqList;


//交换
void swap(int *x,int *y)
{ 
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
//计算长度
// int len(int a[]){
//   return 
// }
//初始化
void Initial(SqList &L,int a[]){
  int len = sizeof(a);
  int i;
  for(i=0;i<MaxSize;i++){
    L.data[i]=a[i];
  }
  L.length=len;
}
//去掉有序表一段值
bool De_gkl(SqList &L,int s,int t){
  if(s>t || L.length==0) return false;
  int k=0;
  for(int i=0;i<L.length;i++){
    if(L.data[i]<s || L.data[i]>t){
      L.data[k]=L.data[i];
      k++;
    }
  }
  L.length=k;
  return true;
}
//去掉重复值
void De_same(SqList &L){
  int k=0,i;
  for(i=0;i<L.length-1;i++){
    if(L.data[i]!=L.data[i+1]){
      L.data[k]=L.data[i];
      k++;
    }
  }
  L.data[k]=L.data[i];
  L.length=k+1;
  // return L;
}

int main(){
  SqList L;
  // int a[]={1,2,4,4,5,5,7};
  int a[]={1,2,2,2,2,3,3,3,4,4,5};
  Initial(L,a);
  // De_same(L);
  De_gkl(L,2,3);
  for(int i=0;i<L.length;i++){
    printf("%d\n",L.data[i]);
  }
	return 0;
}

