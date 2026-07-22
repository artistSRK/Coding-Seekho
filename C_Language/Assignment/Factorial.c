int main(){
	int n,i,f=1;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=1;i<n+1;i++){
		f=f*i;
	}
	printf("Factorial = %d",f);
}
