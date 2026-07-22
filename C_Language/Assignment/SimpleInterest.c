void main(){
	int p,r,t,x;
	float si;
	printf("Enter the value of Principal: ");
	scanf("%d",&p);
	printf("Enter the value of Rate: ");
	scanf("%d",&r);
	printf("Enter the value of Time: ");
	scanf("%d",&t);
	x=p*r*t;
	si=x/100.0;	
	printf("The Simple interest is = %f",si);
	getch();
}
