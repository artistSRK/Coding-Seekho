int main(){
	int a;
	printf("Enter grade of Student: ");
	scanf("%d",&a);
	if(a>=90){
		printf("Grade: A+");
	}
	else if(a>=75 && a<90){
		printf("Grade: A");
	}
	else if(a>=60 && a<75){
		printf("Grade: B");
	}
	else if(a>=45 && a<60){
		printf("Grade: C");
	}
	else{
		printf("Grade: Fail");
	}
}
