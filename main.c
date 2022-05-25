#include <stdio.h>


typedef enum{FALSE=0,TRUE=1} Boolean
typedef struct list{
  int count;
  int ar[20];
}List;

void creatList(List *l){
  l->count=0;
}

Boolean listFull(List *l){
 return (i->count == 0);
}

Boolean listEmpty(List *l){
 return (l->count == 20);
}

void insertAt(list *l,int x ,int p){

 if(listFull(l)){
    printf("List if already full");
 }elseif(p<0 && p->l->count){
   print("You are going to insert an element in a wrong position");

   }else{
     for(i=(l->count)-1;i>=p;i--){
        l->ar[i+1] = l->ar[i];
     }
     l->ar[p-1]=x;
     i->count++;

   }


}
void insertfront(list *l,int x){
  if(listFull(l)){
    printf("List if already full");
 }else{
   for(i=(l->count)-1;i>=l->count;i--){
     l-ar[i+1]=l->ar[i];
   }
   l->ar[0]=x;
   l->count++;
 }  

}
void insertrear(List *l,int x){
  if(listFull(l)){
    printf("List if already full");
 }else{
   l->ar[l->count]=x;
   l->count++;
 }
}

int removefront(List *l){
  int result;

  if(listEmpty(l)){
    printf("List is Empty");
    exit(1);
  }
  result=l->ar[0];
    for(int i=1;i<(l->count;i++)){
      l->ar[i]=l->ar[i+1];
    }
    l->count--;
    return result;
}


int removerear(List *l){
  int result;

  if(listEmpty(l)){
    printf("List is Empty");
    exit(1);
  }
  result=l->ar[(l->count)-1];
  l->count--;
  return result;
}


int removeAt(List *l,int p){
  int result;

  if(listEmpty(l)){
    printf("List is Empty");
    
  }elseif(p<0 || p>=l-count)
     printf("The position is outside the array");
     else{
  result=l->ar[p-1];
    for(int i=1;i<(l->count;i++)){
      l->ar[i]=l->ar[i+1];
    }
    l->count--;
    return result;
}
}

void replace(List *l,int p,int value){
  
}

