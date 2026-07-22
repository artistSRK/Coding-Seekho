int main(){
	int n,i,p;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<11;i++){
		p=n*i;
		printf("%d x %d = %d\n",n,i,p);
	}
}
