int main(){
	int a,b,c;
	printf("Enter three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b && b==c){
		printf("All three are equal");
	}
	else if(a==b || b==c ||c==a){
		printf("Two numbers are equal");
	}
	else if(a>b && b>c){
		printf("%d is the Largest",a);
	}
	else if(b>a && b>c){
		printf("%d is the Largest",b);
	}
	else{
		printf("%d is the Largest",c);
	}
}
