#include<stdio.h>
#include<conio.h>

int main(){
	int a[50][50],i,j,c,r;
	printf("Enter the value of Rows and Columns: ");
	scanf("%d%d",&r,&c);
	printf("Enter the elements of Array:");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int target;
    int z=0;
	target=5;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		if(a[i][j]==target){
            printf("Target found at index: %d,%d",i,j);
            break;
            z=1;
        } 
    }if(z==1){
        break;
    }

	}

	
}