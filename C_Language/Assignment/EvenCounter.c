int main(){
	int n,i,even=0;
	printf("Enter the Number: ");
	scanf("%d",&n);
	for(i=1;i<n+1;i++){
		if(i%2==0){
			even=even+1;
		}
	}
	printf("Even Count = %d",even);
}
