#include<stdio.h>
#define row 100
#define col 100

void colorfiller(int grid[row][col],int rows,int cols,int startrows,int startcols,int newcolor,int originalcolor){
    if(startrows<0||startrows>=rows||startcols<0||startcols>=cols){
        return;
    }
    else if(grid[startrows][startcols]!=originalcolor){
        return;
    }
    else if(grid[startrows][startcols]==newcolor){
        return;
    }
    grid[startrows][startcols]=newcolor;

    
        colorfiller(grid,rows,cols,startrows+1,startcols,newcolor,originalcolor);
        colorfiller(grid,rows,cols,startrows-1,startcols,newcolor,originalcolor);    
        colorfiller(grid,rows,cols,startrows,startcols+1,newcolor,originalcolor);
        colorfiller(grid,rows,cols,startrows,startcols-1,newcolor,originalcolor);    

}


void colorfill(int grid[row][col],int rows,int cols,int startrows,int startcols,int newcolor){
    int originalcolor=grid[startrows][startcols];
    colorfiller(grid,rows,cols,startrows,startcols,newcolor,originalcolor);
}

void printgrid(int grid[row][col],int rows,int cols,int startrows,int startcols,int newcolor){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",grid[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int grid[row][col]; 
    int rows,cols;
    scanf("%d %d",&rows,&cols);
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&grid[i][j]);
        }
    }
    int startrows,startcols;
    scanf("%d %d",&startrows,&startcols);
    int newcolor;
    scanf("%d",&newcolor);
    printgrid(grid,rows,cols,startrows,startcols,newcolor);
    printf("---------------------------------------------\n");
    colorfill(grid,rows,cols,startrows,startcols,newcolor);
    printgrid(grid,rows,cols,startrows,startcols,newcolor);
    return 0;
}