int main(){
	int a,b,t;
	printf("Enter the value of A: ");
	scanf("%d",&a);
	printf("Enter the value of B: ");
	scanf("%d",&b);
	t=a;
	a=b;
	b=t;
	printf("Value of A: %d",a);
	printf("\nValue of B: %d",b);

}
