#include<stdio.h>
int main()
{
int s1,s2,d1,d2,t1=0,t2=0,final;
printf("Enter source of number s1 and s2 (1 to 7)=");
scanf("%d %d",&s1,&s2);
printf("Enter source of number d1 and d2 (1 to 7)=");
scanf("%d %d",&d1,&d2);
if(s1>0 && s2<=7 && d1>0 && d2<=7)
{
	 if(s1>d1){
	 t1=s1-d1;
	 //printf("1 if%d\n",t1);
	 }
	 else if(s1<d1) 
	 {
	 t1=d1-s1;
	 //printf("2 if%d\n",t1);
	 }
	 if(s2>d2){
	 t2=s2-d2;
	 //printf("3 else%d\n",t2);
	 }
	 else if(s2<d2) 
	 {
	 t2=d2-s2;
	 //printf("4 else%d\n",t2);
	 }
	 else if(d2==s2)
	 {
	 t1=t1*2;
	 }

final=t1+t2;
printf("%d",final);
}
else
{
printf("given values are wrong");
}
return 0;
}
