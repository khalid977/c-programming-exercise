#include<stdio.h>
int main()
{
	int mamun,shohel,ratul;


	printf("Enter the age of mamun:");
	scanf("%d",&mamun);
	printf("Enter the age of shohel:");
	scanf("%d",&shohel);
	printf("Enter the age of Joy:");
	scanf("%d",&ratul);


	if(mamun<shohel && mamun<ratul)
	{
		printf("mamun is younger");
	}
	else if(ratul<shohel && ratul<mamun)
	{
		printf("Joy is younger");
	}

	else{

		printf("ratul is younger");
	}



	return 0;


}
