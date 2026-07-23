int main(){
	int r1,c1;
	printf("Enter the value of r1 and c1: ");
	scanf("%d%d",&r1,&c1);
	int arr1[r1][c1],i,j;
	
	printf("\n Enter elements into array 1: \n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			scanf("%d",&arr1[i][j]);
		}
	}
	int r2,c2;
	printf("Enter the value of r2 and c2: ");
	scanf("%d%d",&r2,&c2);
	int arr2[r2][c2];

	printf("\nEnter elements into array 2: \n");
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			scanf("%d",&arr2[i][j]);
		}
	}	
		
	int result[r1][c2],k;
		
	if(c1!=r2){
		printf("\nInvalid Matrix size, Matrix cannot be multiplied");
	}

	else{
		printf("The value of matrix A * matrix B = ");
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				result[i][j]=0;
				
				for(k=0;k<c1;k++){
			 		result[i][j] += arr1[i][k]*arr2[k][j];
				}
			}
		
		}
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
			printf("%d\t",result[i][j]);
			}
		}
	}
	
	
}
