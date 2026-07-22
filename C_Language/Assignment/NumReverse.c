int main(){
	int a,m,n,o,x,y,z;
	printf("Enter a three digit number: ");
	scanf("%d",&a);
	m=a%100;
	n=m%10;
	o=n;
	n=(m-o)/10;
	m=(a-m)/100;
	printf("The reversed Value = %d%d%d",o,n,m);
}
