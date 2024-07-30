#include <stdio.h>
int digsum(int no)
{
	int tot=0;
	while(no>0)
	{
		tot+=(no%10);
		no/=10;
	}
	return tot;
}
int length(int no)
{
	int cnt=0;
	while(no>0)
	{
		cnt++;
		no/=10;
	}
	return cnt;
}
int rev(int no)
{
	int r=0;
	while(no>0)
	{
		r=r*10+(no%10);
		no/=10;
		
	}
	return r;
}
int isprime(int no)
{
	int i=2;
	while(i<no)
	{
		if(no%i==0)
		break;
		i++;
	}
	return(i==no)?1:0;
}
void main()
{
	int(*ptr)(int);
	int no,res,opt,i;
	while(1)
	{
		printf("\n menu\n1.enter no\n2.digitsum\n3.digit count\n4.reverse\n5.palindrome\n6.prime\n7.table\n8exit\noption:");
		scanf("%d",&opt);
		if(opt>7)
			break;
		switch(opt)
		{
			case 1:
				printf("\n enter number");
				scanf("%d",&no);
				break;
			case 7:
				printf("\n table\n");
				for(i=1;i<=10;i++)
					printf("%4d",no*i);
				break;
			case 5:
				if(rev(no)!=no)
					printf("\n not");
				printf("\n palindrome");
			    break;
			default:
				switch(opt)
				{
					case 2:
						ptr=digsum;
						break;
					case 3:
						ptr=length;
						break;
					case 4:
						ptr=rev;
						break;
					case 6:
						ptr=isprime;
						break;
			}
			res=(*ptr)(no);
			switch(opt)
			{
				case 2:
					printf("\n digitsum:%d",res);
				    break;
				case 3:
					printf("\n length:%d",res);
					break;
				case 4:
					printf("\n reverse:%d",res);
					break;
				case 6:
					if(res==0)
						printf("\n not");
					printf("\n prime");
						break;
			}
	    }
	}
}

