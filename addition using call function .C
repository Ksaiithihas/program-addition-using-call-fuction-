 #include <stdio.h>

int sum(int,int,int);

int main()
{
int a,b,c,result,tata;
printf("Please enterthe number :");
scanf("%d %d %d",&a,&b,&c);
tata=sum(a,b,c);
printf("fuction complete\n");
printf("%d",tata);

}
 int sum(a,b,c)   
    {
        int result;
        result = a+b+c;
        printf("sum=%d",result);
        
        return result;
    }
