#include<stdio.h>
#include<string.h>
int newarray(int *arr1,int *arr2,int size1,int size2){
    int newarray[size1+size2];
    for(int i=0;i<size1;i++){
        newarray[i]=arr1[i];
    }
    for(int i=0;i<size2;i++){
        newarray[size1+i]=arr2[i];
    }
    for(int i=0;i<size1+size2;i++){
        printf("%d ",newarray[i]);
    }

}
int main(){
    int size1,size2;
    scanf("%d %d",&size1,&size2);
    int arr1[size1],arr2[size2];
    for(int i=0;i<size1;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<size2;i++){
        scanf("%d",&arr2[i]);
    }
    newarray(arr1,arr2,size1,size2);
    return 0;
}