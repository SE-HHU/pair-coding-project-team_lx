#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void ma(FILE *fp1,FILE *fp2,int a)
{
	int i,x,y,z,sum;
	fprintf(fp1,"�˼ӣ�\n\n");
	fprintf(fp2,"�˼ӣ�\n\n");
	for(i=0;i<a;i++) 
	{
		do{x=rand()%89+11,y=rand()%7+2,z=rand()%89+11;sum=x*y+z;}while(sum>1000||sum<0);
		fprintf(fp1,"%d. %d x %d + %d =        ",i+1,x,y,z);
		fprintf(fp2,"%d. %d    ",i+1,sum);
		if(i%5==4) {fprintf(fp1,"\n\n");fprintf(fp2,"\n\n");}
	}
	fprintf(fp1,"\n\n"),fprintf(fp2,"\n\n");
}
void ms(FILE *fp1,FILE *fp2,int a)
{
	int i,x,y,z,sum;
	fprintf(fp1,"�˼���\n\n");
	fprintf(fp2,"�˼���\n\n");
	for(i=0;i<a;i++) 
	{
		do{x=rand()%89+11,y=rand()%7+2,z=rand()%89+11;sum=x*y-z;}while(sum>1000||sum<0);
		fprintf(fp1,"%d. %d x %d - %d =        ",i+1,x,y,z);
		fprintf(fp2,"%d. %d    ",i+1,sum);
		if(i%5==4) {fprintf(fp1,"\n\n");fprintf(fp2,"\n\n");}
	}
	fprintf(fp1,"\n\n"),fprintf(fp2,"\n\n");
}
void da(FILE *fp1,FILE *fp2,int a)
{
	int i,x,y,z,t,sum;
	fprintf(fp1,"���ӣ�\n\n");
	fprintf(fp2,"���ӣ�\n\n");
	for(i=0;i<a;i++) 
	{
		do{y=rand()%89+11,t=rand()%7+2,x=y*t,z=rand()%89+11;sum=t+z;}while(sum>1000||sum<0);
		fprintf(fp1,"%d. %d / %d + %d =        ",i+1,x,y,z);
		fprintf(fp2,"%d. %d    ",i+1,sum);
		if(i%5==4) {fprintf(fp1,"\n\n");fprintf(fp2,"\n\n");}
	}
	fprintf(fp1,"\n\n"),fprintf(fp2,"\n\n");
}
void ds(FILE *fp1,FILE *fp2,int a)
{
	int i,x,y,z,t,sum;
	fprintf(fp1,"������\n\n");
	fprintf(fp2,"������\n\n");
	for(i=0;i<a;i++) 
	{
		do{y=rand()%7+2,t=rand()%89+11,x=y*t,z=rand()%89+11;sum=t-z;}while(sum>1000||sum<0);
		fprintf(fp1,"%d. %d / %d - %d =        ",i+1,x,y,z);
		fprintf(fp2,"%d. %d    ",i+1,sum);
		if(i%5==4) {fprintf(fp1,"\n\n");fprintf(fp2,"\n\n");}
	}
	fprintf(fp1,"\n\n"),fprintf(fp2,"\n\n");
}
void am(FILE *fp1,FILE *fp2,int a)
{
	int i,x,y,z,sum;
	fprintf(fp1,"�ӳˣ�\n\n");
	fprintf(fp2,"�ӳˣ�\n\n");
	for(i=0;i<a;i++) 
	{
		do{x=rand()%89+11,y=rand()%89+11,z=rand()%7+2;sum=(x+y)*z;}while(sum>1000||sum<0);
		fprintf(fp1,"%d. (%d + %d) * %d =        ",i+1,x,y,z);
		fprintf(fp2,"%d. %d    ",i+1,sum);
		if(i%5==4) {fprintf(fp1,"\n\n");fprintf(fp2,"\n\n");}
	}
	fprintf(fp1,"\n\n"),fprintf(fp2,"\n\n");
}
void ad(FILE *fp1,FILE *fp2,int a)
{
	int i,x,y,z,sum;
	fprintf(fp1,"�ӳ���\n\n");
	fprintf(fp2,"�ӳ���\n\n");
	for(i=0;i<a;i++) 
	{
		do{y=rand()%89+11,sum=rand()%7+2,z=rand()%89+11;x=sum*z-y;}while(x>1000||x<0);
		fprintf(fp1,"%d. (%d + %d) / %d =        ",i+1,x,y,z);
		fprintf(fp2,"%d. %d    ",i+1,sum);
		if(i%5==4) {fprintf(fp1,"\n\n");fprintf(fp2,"\n\n");}
	}
	fprintf(fp1,"\n\n"),fprintf(fp2,"\n\n");
}
void mam(FILE *fp1,FILE *fp2,int a)
{
	int i,x,y,z,w,sum;
	fprintf(fp1,"���ͣ�\n\n");
	fprintf(fp2,"���ͣ�\n\n");
	for(i=0;i<a;i++) 
	{
		do{x=rand()%89+11,y=rand()%7+2,z=rand()%89+11,w=rand()%7+2;sum=x*y+z*w;}while(sum>1000||sum<0);
		fprintf(fp1,"%d. %d x %d + %d x %d =        ",i+1,x,y,z,w);
		fprintf(fp2,"%d. %d    ",i+1,sum);
		if(i%5==4) {fprintf(fp1,"\n\n");fprintf(fp2,"\n\n");}
	}
	fprintf(fp1,"\n\n"),fprintf(fp2,"\n\n");
}
void dad(FILE *fp1,FILE *fp2,int a)
{
	int i,x,y,z,w,t1,t2,sum;
	fprintf(fp1,"�̺ͣ�\n\n");
	fprintf(fp2,"�̺ͣ�\n\n");
	for(i=0;i<a;i++) 
	{
		do{y=rand()%89+11,w=rand()%89+11,t1=rand()%7+2,t2=rand()%7+2;x=y*t1,z=w*t2,sum=t1+t2;}while(sum>1000||sum<0);
		fprintf(fp1,"%d. %d / %d + %d / %d =        ",i+1,x,y,z,w);
		fprintf(fp2,"%d. %d    ",i+1,sum);
		if(i%5==4) {fprintf(fp1,"\n\n");fprintf(fp2,"\n\n");}
	}
	fprintf(fp1,"\n\n"),fprintf(fp2,"\n\n");
}
void mad(FILE *fp1,FILE *fp2,int a)
{
	int i,x,y,z,w,t,sum;
	fprintf(fp1,"���̺ͣ�\n\n");
	fprintf(fp2,"���̺ͣ�\n\n");
	for(i=0;i<a;i++) 
	{
		do{x=rand()%89+11,y=rand()%7+2,w=rand()%89+11,t=rand()%7+2;z=w*t,sum=x*y+t;}while(sum>1000||sum<0);
		fprintf(fp1,"%d. %d * %d + %d / %d =        ",i+1,x,y,z,w);
		fprintf(fp2,"%d. %d    ",i+1,sum);
		if(i%5==4) {fprintf(fp1,"\n\n");fprintf(fp2,"\n\n");}
	}
	fprintf(fp1,"\n\n"),fprintf(fp2,"\n\n");
}
void mm(FILE *fp1,FILE *fp2,int a)
{
	int i,x,y,z,w,sum;
	fprintf(fp1,"��ϳˣ�\n\n");
	fprintf(fp2,"��ϳˣ�\n\n");
	for(i=0;i<a;i++) 
	{
		do{x=rand()%89+11,y=rand()%7+2,z=rand()%89+11,w=rand()%89+11;sum=x+y*(z+w);}while(sum>1000||sum<0);
		fprintf(fp1,"%d. %d + %d * (%d + %d) =        ",i+1,x,y,z,w);
		fprintf(fp2,"%d. %d    ",i+1,sum);
		if(i%5==4) {fprintf(fp1,"\n\n");fprintf(fp2,"\n\n");}
	}
	fprintf(fp1,"\n\n"),fprintf(fp2,"\n\n");
}
void md(FILE *fp1,FILE *fp2,int a)
{
	int i,x,y,z,w,t,sum;
	fprintf(fp1,"��ϳ���\n\n");
	fprintf(fp2,"��ϳ���\n\n");
	for(i=0;i<a;i++) 
	{
		do{x=rand()%89+11,z=rand()%89+11,w=rand()%89+11,sum=rand()%7+2;y=sum*(z+w),t=x+y;}while(t>1000||t<0);
		fprintf(fp1,"%d. %d + %d / (%d + %d) =        ",i+1,x,y,z,w);
		fprintf(fp2,"%d. %d    ",i+1,sum);
		if(i%5==4) {fprintf(fp1,"\n\n");fprintf(fp2,"\n\n");}
	}
	fprintf(fp1,"\n\n"),fprintf(fp2,"\n\n");
}
int main()
{
	int a,b,c,d,e,f,g,h,i,j,k;
	FILE *fp1,*fp2;
	srand(time(NULL));
	printf("������˼���Ŀ������"),scanf("%d",&a);
	printf("������˼���Ŀ������"),scanf("%d",&b);
	printf("�����������Ŀ������"),scanf("%d",&c);
	printf("�����������Ŀ������"),scanf("%d",&d);
	printf("������ӳ���Ŀ������"),scanf("%d",&e);
	printf("������ӳ���Ŀ������"),scanf("%d",&f);
	printf("�����������Ŀ������"),scanf("%d",&g);
	printf("�������̺���Ŀ������"),scanf("%d",&h);
	printf("��������̺���Ŀ������"),scanf("%d",&i);
	printf("�������ϳ���Ŀ������"),scanf("%d",&j);
	printf("�������ϳ���Ŀ������"),scanf("%d",&k);
	fp1=fopen("Exercises.txt","w+");
	fp2=fopen("Answers.txt","w+");
	ma(fp1,fp2,a);ms(fp1,fp2,b);da(fp1,fp2,c);ds(fp1,fp2,d);
	am(fp1,fp2,e);ad(fp1,fp2,f);
	mam(fp1,fp2,g);dad(fp1,fp2,h);mad(fp1,fp2,i);
	mm(fp1,fp2,j);md(fp1,fp2,k);
	fclose(fp1);fclose(fp2);
	return 0;
}