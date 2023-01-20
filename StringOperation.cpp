#include<stdio.h>
#include<string.h>
#define size 20
int checkfreq(char arr[],int n)
{
	int i,count=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]=='1')
			count++;
	}
	return count;
}
int main()
{
	char str[size];
	printf("Input:");
	gets(str);
	int n=strlen(str);
		printf("segment length");
		int seg;
		scanf("%d",&seg);
		char arr[size]={'\0'};
		int i=0,j=0,x=0,y=0;
		while(n!=seg)
		{
			arr[i]='0';
			i++;
			n++;
			if(n%seg==0)
				break;
		}
		strcat(arr,str);
		printf("\n output:\n");
		int segno=n/seg;
		char segarr[seg];
		int freq[segno];
		for(i=0;i<n;i=i+seg)
		{
			printf("segment %d:",y+1);
			for(j=i;j<seg+1;i++,x++)
			
				segarr[x]=arr[j];
				x=0;
				printf("%s\n",segarr);
				freq[y]=clockfreq(segarr,seg);
				y++;
			
			
		}
		printf("\n frequency:\n");
		for(i=0;i<segno;i++)
		{
			printf("segment %d %d\n",i+1,freq[i]);
		}
		return 0;
}
