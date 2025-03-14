#include<stdio.h>
# define MAX_H 100
# define MAX_W 100
 
void printimage(int image[MAX_H][MAX_W], int height, int width);
void invertimage(int image[MAX_H][MAX_W], int height, int width);
void reverseimagehori(int image[MAX_H][MAX_W], int height, int width);
void reverseimageverti(int image[MAX_H][MAX_W], int height, int width);
void threshimage(int image[MAX_H][MAX_W], int height, int width);

int main()
{
    int image[MAX_H][MAX_W];
    int height, width,n;
    scanf("%d %d", &height, &width);
    for(int i=0;i<height;i++){
        for(int j=0;j<width;j++){
            scanf("%d",&image[i][j]);
        }
    }
    scanf("%d",&n);
    if(n==1){
        invertimage(image,height,width);        
    }
    else if(n==2){
        reverseimagehori(image,height,width);        
    }
    else if(n==3){
        reverseimageverti(image,height,width);        
    }
    else if(n==4){
        threshimage(image,height,width);        
    }
    printimage(image,height,width);
    return 0;
}

void printimage(int image[MAX_H][MAX_W], int height, int width){
    for(int i=0;i<height;i++){
        for(int j=0;j<width;j++){
            printf("%d ",image[i][j]);  
        }
        printf("\n");
    }
}
void reverseimagehori(int image[MAX_H][MAX_W], int height, int width){
   for (int i = 0; i < height; i++)
   {  for(int j=0;j<width/2;j++){
         int temp=image[i][j];
            image[i][j]=image[i][width-j-1];
            image[i][width-j-1]=temp;
   }   
}
 
}

void reverseimageverti(int image[MAX_H][MAX_W],int height,int width){
    for(int i=0;i<height/2;i++){
        for(int j=0;j<width;j++){
            int temp=image[i][j];
            image[i][j]=image[height-i-1][j];
            image[height-i-1][j]=temp;
        }
    }
}

void(invertimage(int image[MAX_H][MAX_W], int height, int width)){
    for(int i=0;i<height;i++){
        for(int j=0;j<width;j++){
            image[i][j]=255-image[i][j];
        }
    }
}
void threshimage(int image[MAX_H][MAX_W], int height, int width){
    for(int i=0;i<height;i++){
        for(int j=0;j<width;j++){
            if(image[i][j]>128){
                image[i][j]=255;
            }
            else{
                image[i][j]=0;
            }
        }
    }
}