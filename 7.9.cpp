#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<math.h>
#include<time.h>//�������<>�Լ�д���á���
//�ṹ��Ļ���֪ʶ�������һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı���
//struct Stu//stu�ǽṹ���ǩ�Լ��������
//{
//	char name[20];//��Ա������ͼֽ��
//	short age;
//	char tele[12];//����һ���ṹ�������
//    char sex[5];
//	
//	
//
//s1,s2,s3;//�ⶼ��ȫ�ֵĽṹ�����
//typedef struct Stu//typedef�����ǿ�����stu s1 ������struct Stu s
//{
//	char name[20];//��Ա������ͼֽ��
//	short age;
//	char tele[12];//����һ���ṹ�������
//    char sex[5];
//
//}Stu;
//int main()
//{
//	Stu s1={"����",18,"18627217504","��"};//���ǳ�ʼ��
//
//
//	struct Stu s2={"����",20,"6354151","��"};//�����ṹ����������ӣ�
//	return 0;//struct Stu ��ռ�ռ����s��ռ�ռ�s�Ǿֲ�����
//
//}
//struct S
//
//{
//
//	int a;
//	char c;
//	char arr[20];
//	double d;
//
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char *pc;
//
//};
//int main()
//{
//	char arr[]="bit\n";
//	struct T t={"hhhh",{100,'z',"gnl",3.111},arr};
//	printf("%s\n",t.ch);
//	printf("%d\n",t.s.a);
//	printf("%s\n",t.s.arr);
//	printf("%c\n",t.s.c);
//	printf("%lf\n",t.s.d);
//	printf("%s\n",t.pc);
//	return 0;
//}
typedef struct Stu
{

	char name[20];
	short age;
	char tele[12];
	char sex[5];

}Stu ;
//void pri(Stu s)
//{
//	printf("������%s\n",s.name);
//	printf("���䣺%d\n",s.age);
//	printf("�绰��%s\n",s.tele);
//	printf("�Ա�:%s\n",s.sex);
//
//}
void p(Stu *s)
{
	printf("������%s\n",s->name);
    printf("���䣺%d\n",s->age);
	printf("�绰��%s\n",s->tele);
	printf("�Ա�:%s\n",s->sex);


}
int main()
{

	Stu s={"��˹",38,"9561445111","����"};
		//pri(s);
		p(&s);

}
//double p(int m,int n)
//{
//	if(n<0)
//		return (1.0/(p(m,-n)));
//
//	else if(n==0)//m��n�η�
//		return 1;
//	else 
//		return m*p(m,n-1);
//
//
//}
//int main()
//{
//	int m=0;
//	int n=0;
//	scanf("%d%d",&m,&n);
//	double ret=p(m,n);
//	printf("%lf",ret);
//	return 0;
//
//}
//int d(unsigned int num)
//{
//
//	if(num>9)
//	{
//	
//		return d(num/10)+num%10;//�ݹ飬����λ���𿪵õ���λ���
//	}
//	else
//	{
//	
//		return num;
//	}
//
//}
//int main()
//{
//	unsigned int num=0;
//	scanf("%d",&num);
//	int ret=d(num);
//	printf("ret=%d",ret);
//	return 0;
//
//}
//void print(int n)
//{
//
//	int i=0;
//	for(i=0;i<=n;i++)
//	{
//	
//		int j=0;
//		for(j=1;j<=i;j++)
//		{
//		
//			printf("%d*%d=%-64d",i,j,i*j);
//		
//		}
//	printf("\n");
//	}
//
//}
//int main()
//{
//
//	int n=0;
//	scanf("%d",&n);
//	print(n);
//	return 0;
//}
//void print(int m)
//{
//
//	int i=0;
//	printf("����\n");
//	for(i=30;i>=0;i-=2)
//	{
//	
//		printf("%d",(m>>i)&1);
//	
//	}
//	printf("\n");
//	printf("ż��\n");
//	for(i=31;i>=1;i-=2)
//	{
//	
//		printf("%d",(m>>i)&1);
//	
//	}
//
//	printf("\n");
//}
//int main()
//{
//
//	int m=0;
//	scanf("%d",&m);
//	print(m);
//	return 0;
//
//}

//int c(int m,int n)
//{
//
//	int t=m^n;
//	int count=0;
//	while(t)
//	{
//	
//		t=t&(t-1);
//		count++;
//	
//	}
//	return count;
//
//}
//int main()
//{
//
//	int n=0;
//	int m=0;
//	scanf("%d%d",&n,&m);
//	int count=c(m,n);
//	printf("count =%d",count);
//	return 0;
//
//
//}

//int my_count(int n)
//{
//
//	int count=0;
//	while(n)
//	{
//	
//		n=n&(n-1);
//		count++;
//	
//	}
//	return count;//����������Ч
//
//}
//n=n&(n-1)
//n
//13
//1101
//1100
//1100
//n1100
//1011
//1000
//int my_count(unsigned int n)//�������������м���1�����Ƿ���һ
//{
//
//	int count=0;
//	while(n)
//	{
//	
//		if(n%2==1)
//		{
//			count++;
//		}
//		n=n/2;
//	}
//
//	return count;
//}
//int my_count(int n)//������
//{
//
//	int count=0;
//	int c=0;
//	for(c=0;c<32;c++)
//	{
//	
//		if(((n>>c)&1)==1)
//		{
//		
//			count++;
//		}
//	
//	}
//	return count;
//}
//
//int main()
//{
//	int n=0;
//	scanf("%d",&n);
//	int count=my_count(n);
//	printf("count=%d",count);
//	return 0;
//
//
//}
//int main()
//{
//
//	int a,b,c;
//	a=5;
//	c=++a;//6
//	b=++c,c++,++a,a++;//a=8,c=7,b=7
//	b+=a++ + c;//a=9,c=8
//	printf("a=%d b=%d c=%d\n",a,b,c);
//	return 0;
//}
//int i;//ȫ�ֱ�������ʼ��Ĭ��Ϊ0
//int main()
//
//{
//	i--;//i=��1��
//	if(i>sizeof(i))//sizeof����������޷�����-1�����λ�ͺܴ���
//	{
//	
//		printf(">\n");
//
//	}
//	else
//	{
//	
//		printf("<\n");
//	}
//	return 0;
//}
//int main()
//{
//
//	int arr[]={1,2,3,4,5};
//	short*p=(short*)arr;
//	int q=0;
//	for(q=0;q<4;q++)
//	{
//	
//		*(p+q)=0;
//
//	
//	}
//	for(q=0;q<5;q++)
//	{
//	
//		printf("%d",arr[q]);
//	
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[]={1,3,5,7,9};
//	int arr2[]={2,4,6,8,0};
//	int t=0;
//	int i=0;
//	int sz=sizeof(arr1)/sizeof(arr1[0]);
//	for(i=0;i<sz;i++)
//	{
//	
//		t=arr1[i];
//		arr1[i]=arr2[i];//��������
//		arr2[i]=t;
//		
//	
//	}
//	
//	return 0;
//}
//void t(int arr[],int sz)
//{
//
//	int q=0;
//	for(q=0;q<sz;q++)
//	{
//	
//	
//		arr[q]=0;
//	}
//
//}
//void print(int arr[],int sz)
//{
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//	
//		printf("%d",arr[i]);
//	
//	}
//}
//void r(int arr[],int sz)
//{
//
//	int left=0;
//	int right=sz-1;
//	while(right>left)
//	{
//	
//		int t=arr[left];
//		arr[left]=arr[right];
//		arr[right]= t;
//		left++;
//		right--;
//
//	
//	}
//
//}
//int main()
//{
//
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//
//	//t(arr,sz);//�������������ȫ����ʼ��
//	r(arr,sz);//���������������ת˳��
//	print(arr,sz);
//
//	return 0;
//}
//�������顪���������
//�ַ����顪������ַ�
//ָ�����顪�����ָ��
//int main()
//{
//
//	int a=1;
//	int b=2;
//	int c=3;
//	int *a1[3]={&a,&b,&c};
//	int q=0;
//	for(q=0;q<3;q++)
//	{
//	
//		printf("%d",*(a1[q]));
//	}
//	return 0;
//}
//int main()
//{
//	int a[10]={0};
//	printf("%p\n",a);
//	//�������������Ԫ�ص�ַ
//	//&��������������������Ԫ�صĵ�ַ����������ʾ��������
//	//sizeof����������_��ʾ��������sizeof����������������������Ĵ�С
//	return 0;
//
//}

//int  m_strlen(char* str)
//{
//
//	char*s=str;
//	char*e=str;
//	while(*e!='\0')
//	{
//	
//		e++;
//	}
//
//	return e-s;
//}
//
//
//int main()
//{
//	char a[]="bit";
//	int len=m_strlen(a);
//	printf("%d",len);
//
//	return 0;
//
//}
//int main()
//{
//	char ch[5]={0};
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	printf("%d\n",&arr[9]-&arr[0]);//ָ���ȥָ��õ�Ԫ�ظ���
//	//printf("%d\n",&arr[9]-&ch[0])//���Ͳ�һ���Ĳ�������õ���ֵ�ǲ�ȷ����
//	return 0;
//}
//int main()
//{
//	int a[10]={1,2,3,4,5,6,7,8,9,10};
//	int q=0;
//	int sz=sizeof(a)/sizeof(a[0]);
//	int *p=a;
//	for(q=0;q<sz;q++)
//	{
//	
//		printf("%d",*p);
//		p=p+1;
//	}
//
//	
//
//	return 0;
//
//
//}
//����Ұָ��
//ָ���ʼ����ָ��Խ�磬ָ��ʹ��֮ǰ�����Ч��
//int* t()
//{
//
//	int a=10;
//	return &a;
//
//}
////ָ��ָ��Ŀռ䱻�ͷ�
//int main()
//{
//	int *p=t();
//	*p=20;
//	return 0;
//
//}

//int mian()
//{
//	int arr[10]={0};
//	int *p =arr ;
//	int i=0;
//	for(i=0;i<12;i++)
//	{
//	
//		p++;
//	//�ڴ�Խ��Ҳ��Ұָ��
//		//ָ��ָ��ķ�Χ�������鷶Χ����Ұָ��
//	}
//
//
//	return 0;
//}
//int main()
//{
//
//	int a=0x11223344;
//	int *pa=&a;
//	float*pc=0;
//
//	return 0;
//
//}
//������������
//1�����������ȼ�
//�������Ľ����
//�Ƿ������ֵ˳��
//����ת��
//long double
//double   ����ڱ��ʽ�����������ģ������ɵ;���ת�ɸ߾��ȵ�

//���ʽ��ֵ��˳��һ���������ڲ����������ȼ��ͽ���Ծ���
//��ʽ����ת��c������������������������ȱʡ���͵ľ��������еģ����ʽ���ַ��Ͷ����ͻ�ת�������Σ����ֳ���С��int���ȵ�����ֵ�����뻻��int,unsigneding
//��������������
//char c1=-1����c1������λ�����룩��ֻ��8������λ11111111
//��Ϊchar��Ϊ�з��ŵ�char��������������ʱ�򣬸�λ�������λ����Ϊ1����֮��Ľ����
//111111111111111111111111
//��������������
//char c2=1��
//����c2�Ķ�����λ�����룩��ֻ��8������λ
//00000001
//��ΪcharΪ�з��ŵ�char��������������ʱ�򣬸�λ�������λ����Ϊ0����֮��Ľ����
//000000000000000000000001
//�޷���������������λΪ0
//int main()
//{
//	char a=3;
//	char b=127;
//	char c=a+b;//���������ǰ��ձ������������͵ķ���λ��������
//	//a��b���
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//100010
//	printf("%d\n",c);
//	return 0;
//}
//����һ���ṹ��
//struct Stu
//{
//
//	char name[20];
//	int age;
//	char id[20];
//
//
//};
//int main()
//{
//
//	int a=10;
//	struct Stu s1={"��",32,"123456789"};
//	struct Stu *ps=&s1;
//	printf("%s",ps->name);//����Ǹ��ṹ��ָ��->�ұ߳�Ա��

//	printf("%d\n",s1.age);
//	printf("%s\n",s1.name);
//	printf("%s\n",s1.id);
//
//}

//���ű��ʽ �����������μ��㣬�������ʽ�����һ�����ʽ���Ϊ׼
//����������  exp1?exp2:exp3���e1������ʽ����������������ʽe1�Ǽٵı��ʽe3Ҫ��e3���������
//int main()//||���Ϊ���ұ߲��㣬&&���Ϊ�پͲ�Ҫ����
//{
//	int i=1,a=1,b=2,c=3,d=4;
//	i=a++ || ++b ||  d++;//a++Ϊ�� ���治����
//	//i=a++ && ++b&&d++;//a++=a=0,++b��d++Ϊ�ٲ�����   &&��������һ���ǼپͲ�����
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n ",a,b,c,d );//���� a=1 b=2c=3d=4
//
//	return 0;
//}
//void test1(int arr[])//����ģ������﷨�涨
//{
//
//	printf("%d\n",sizeof(arr));//���鴫�ε�����Ԫ�صĵ�ַ
//
//}
//void test2(char ch[])
//{
//
//	printf("%d\n",sizeof(ch));
//
//}
//int main()
//{
//
//	int arr[10]={0};
//	char ch[10]={0};//����  ��+��
//    printf("%d\n",sizeof(arr));
//	printf("%d\n",sizeof(ch));
//	test1(arr);//���ú�����ʱ��ģ������Ǻ���������������������test1,��x��y)���Ų������������һ��
//	test2(ch);
//
//}
//int mian()
//{
//
//	int a=(int)3.14;//����ǿ��ת��
//	
//	return 0;
//
//
//}
//int main()
//{
//
//	short s=0;
//	int a=10;
//	printf("%d\n",sizeof(s=a+5));
//	printf("%d\n",s);
//
//}
//int main()
//{
//
//	int a=10;
//	int arr[20]={0};
//	char c='b';
//	char*p=&c;
//	printf("%d\n",sizeof(a));
//	printf("%d\n",sizeof(int));//���͵Ĵ�ӡ���Ų���ʡ3
//	printf("%d\n",sizeof(int [20]));
//	printf("%d\n",sizeof(p));
//	printf("%d\n",sizeof(c));
//
//}
//int main()
//{
//
//	int a=10;
//	int*p=&a;
//	*p=1;//������
//
//
//}
//��Ŀ��������0��1��
//int main()
//{
//
//	int a=0;
//	if(a)//aΪ���ӡ
//	if(!a)//aΪ�ٴ�ӡ
//	{
//	
//		printf("2");
//	
//	}
//}

//��ֵ������:��ʼ���󻹿��Ը�һ���Լ������ֵ
//^=,+=,-=,*=,/=,&=,|=
//int main()
//{
//	int a=120;
//	a>>=1;//a=a>>1
//	a+=60;//a=a+60
//	printf("%d",a);
//	return 0;
//
//}
//int main()
//{
//
//	int num=0;
//	int count=0;//�����������ж��ٸ�1
//	scanf("%d",&num);
//	int i=0;
//	for(i=0;i<32;i++)
//	{
//	
//		if(1==((num>>i)&i))
//			count++;
//
//	
//	}
//
//	/*while(num)
//	{
//	
//		if(num%2==1)
//		
//		
//			count++;
//			num=num/2;
//		
//	
//		
//	}*/
//	printf("%d\n",count);
//	return 0;

//}
//int main()//�����������Ч�ʵ�
//{
//	int a=3;
//	int b=5;
//	int c=0;
//	c=a;
//	a=b;
//	b=c;
//	//a=a^b;
//	//b=a^b;
//	//a=a^b;//b=3
//	printf("a=%d,b=%d",a,b);
//
//	return 0;
//
//
//}
//ֻ�ܶ������������Ǹ�������λ����λ������
//λ��������& |^
//int main()
//{
//
//	//int a=3;
//
//	//int b=5;
//
//	//int c=a|b;//ֻҪ��һ����������1��Ϊһ��һ��0��Ϊ0
//
//	//printf("c=%d\n",c);
//	//return 0;
//	int a=3;
//	int b=5;
//	int c=a^b;//��Ӧ��λ��ͬΪ0����ͬΪ1
//	printf("c=%d\n",c);
//	return 0;
//
//
//}
//int main()
//{
//	int a=3;//һ���ǲ�������
//	int b=5;
//	int c=a&b;//&��λ���Ӧ�Ķ�����λֻҪ����0����0��������1�ľ���1
//	printf("c=%d\n",c);
//	return 0;
//
//
//}

//int main()
//{
//	int i=5;//���������Ʊ�ʾ��ԭ�뷴�벹�룬�浽�ڴ�����ǲ���
//	//int b=a>>1;//�����ƶ���������δ������Ϊ
//	int c=i<<1;//���ƣ���߲�Ҫһλ���ұ߼�0
//	//int d=a>>2;
//	//>>���Ʋ�����:�������ƣ��ұ߲�Ҫ����߲�����λ���߼����ƣ��ұ߲�Ҫ��߲�0.
//	//�ƶ����Ƕ�����λ
//	//16=10000����������һλ�ǳ�2��Ч��
//	//����һ�㶼����������
//
//	//printf("b=%d\n",b);
//	printf("c=%d\n",c);
//	//printf("d=%d\n",d);
//
//	return 0;
//}

//����/���߶��������͵��������߶��Ǹ������õ���Ҳ�Ǹ�����
//int main()//����������������%����Ĳ����������Ķ����������͸�����
//{
//	double a=5/2;//��2��1  /<=>�µõ���
//	double b=5%2;//%ȡģ�������������������õ���������
//	printf("a=%lf\n",a);
//	printf("b=%lf\n",b);
//return 0;
//}

//int main()
//{
//	int arr[]={1,2,3,4,5};
//    //int sz=sizeof(arr)/sizeof(arr[0]);
//    printf("%p\n",arr);
//    printf("%d\n",arr+1);
//    printf("%p\n",&arr[0]);
//    printf("%p\n",&arr[0]+1);
//    printf("%p\n",&arr);
//    printf("%p\n",&arr+1);//�����һ��������������
//	printf("%d\n",*arr);   
//   return 0;
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6};

//	printf("%p\n",arr);//��һ��Ԫ�ص�ַ
//	printf("%p\n",&arr[0]);//�͵�һ��һ��������
//	printf("%p\n",&arr);//����ȡ��������ĵ�ַ
//	//һsizeof (������)-��������ʾ�������飬sizeof����������������������С����λ�ֽ�
//	//��&�������������������������飬������ȡ��������������ĵ�ַ
//
//}
//void b_s( int srr[],int sz)
//{
//	int a=0;
//	for(a=0;a<sz-1;a++)
//	{
//		int floa=1;
//	int b=0;
//	for(b=0;b<sz-1-a;b++)
//	 {
//	if(srr[b]>srr[b+1])
//	{
//	int tmp=srr[b];
//	srr[b]=srr[b+1];
//	srr[b+1]=tmp;
//	floa=0;
//	}
//	if(floa==1)
//	{
//	break;
//	}
//	}
//	}
//
//
//}
//int main()
//{
//	int srr[]={9,8,7,6,5,4,3,2,1};
//	int a=0;
//	int sz=sizeof(srr)/sizeof(srr[0]);
//	b_s(srr,sz);
//	for(a=0;a<sz;a++)
//	{
//	printf("%d",srr[a]);
//	
//	}
//
//
//
//return 0;
//}
//��ά���� ���ͼ����� ���м����п���ʡ���в���,һά�������ʡ�Դ�С����ȫ����
//int main()
//{
//	int arr[3][4]={{1,2,3},{4,5}};
//	int x=0;
//	for(x=0;x<3;x++)
//	{
//	int y=0;
//	for(y=0;y<4;y++)
//	{
//		printf("&arr[%d][%d=]%p\n",x,y,&arr[x][y]);
//	}
//	printf("\n");
//	}
//	return 0;
//
//
//}

//int main()
//{
//printf("int=%d\n",sizeof(int ));
//printf("char=%d\n",sizeof(char));
//printf("float=%d\n",sizeof(float));
//printf("long=%d\n",sizeof(long));
//printf("doble=%d\n",sizeof(double));
//printf("short=%d\n",sizeof(short));
//printf("long long=%d\n",sizeof(long long ));
//return 0;
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int i=0;
//	for( i=0;i<sz;i++)
//	{
//	
//	printf("&arr[%d]=%p\n",i,&arr[i]);
//	}
//return 0;
//}
/*int main()
{
	char arr[]={1,2,3,4,5,6,7,8,9,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int q=0;
	for(q=0;q<sz;q++)
	{
	printf("%d",arr[q]);
	
	}
return 0;

}*///������ʴ�0��ʼ
//�����С���������
//int main()
//{
//	char arr[]="abcd";
//	int i=0;
//	int len=strlen(arr);
//	for(i=0;i<len;i++)//i<
//	{
//	printf("%c",arr[i]);
//	
//	}
//	return 0;
//}

//int main()
//{
//	char arr[]="abc";//[]�±����ò�����
//	char arr1[]={'a','b','c'};
//	char arr2[3]={'a','b'};
//	printf("%d\n",sizeof(arr));//4//��ռ��С��\0
//	printf("%d\n",strlen(arr));//3//���ַ����Ȳ���\0
//	printf("%d\n",sizeof(arr1));//3
//	printf("%d\n",strlen(arr1));//sjz//��������ֵ
//	printf("%d",sizeof(arr2));//3
//	printf("%d",strlen(arr2));//2
//	return 0;
//
//
//}
//strlen��sizeofû�й�ϵ
//sizeof������������顢���͵Ĵ�С��λ���ֽ�-������
//strlen ֻ�����ַ��������ǿ⺯��Ҫͷ�ļ�
//쳲���������
//1 1 2 3 5 8 13 21 34 55
//int fib(int n)
//{
// if(n<=2)
//	return 1;//�ݹ鲻���ˣ�Ч����
// else
//	return fib(n-1)+fib(n-2);
//
//
//
//}
//�ݹ��ѭ��
//�ݹ����ȱ�ݻ�ѭ�����������
//ѭ���鷳���õݹ�
//int  fib(int n)
//{
//
//	int a=1;
//	int b=1;
//	int c=1;
//	while(n>2)//n������ڶ�
//	{
//	c=a+b;
//	a=b;
//	b=c;
//	n--;
//	
//	}
//	return c;
//
//
//}
//int main()
//{
//	int n=0;
//	int ret=0;
//	scanf("%d",&n);
//	//TDD-������������
//	ret=fib(n);
//	printf("%d\n",ret);
//return 0;
//}
//int fac(int n)
//{
//	if(n<=1)
//		return 1;//�ݹ�
//	else
//		return n*fac(n-1);//��ѧ�׳˹�ʽ
//
//}
//
//int main()
//{
//	int n=0;
//	int ret=0;
//	scanf("%d",&n);
//	ret=fac(n);
//	printf("%d",ret);
//
//return 0;
//}
//int my_strlen(char*str)
//{
//	if(*str!='\0')
//	{
//	return 1+my_strlen(str+1);//�ݹ鷽��
//	}
//	else 
//		return 0;
//
//}

//int my_strlen(char*str)
//{
//	int count=0;
//	while (*str!='\0')//����ѭ������
//	{
//
//	count++;
//	str++;
//
//	
//	
//	}
//		return count;
//
//}
//int main()
//{
//	char arr[]="123";
//	//int len=strlen(arr);arr�����鴫��ȥ�Ĳ��������������
//	int len =my_strlen(arr);//��һ��Ԫ�صĵ�ַ
//
//	printf("%d",len);
//
//return 0;
//}
//void print(int y)
//{
//	if(y>9)
//	{
//	print(y/10);
//
//	}
//	printf("%d",y%10);
//
//}
//int main()
//{
//unsigned int num =0;
//scanf("%d",&num);
//print(num);
//
//}
//#include"12.h"
//int main()
//{
//printf("hehe\n");
//main();
//return 0;
//
//
//}

//int Add(int x,int y)
//{
//int z=x+y;
//return z;
//
//}
//int main()
//{
//	int a;
//	int b;
//	int sum=0;
//	scanf("%d%d",&a,&b);
//	sum=Add(a,b);
//	printf("%d",sum);
//
//return 0;
//}

//int main()
//{
//	printf("%d",printf("%d",printf("%d",43)));
//return 0;
//}

//void Add(int* p)
//{
//(*p)++;
//}
//int main()
//{
//	int num=0;
//	Add(&num);
//	printf("num=%d",num);
//	Add(&num);
//	printf("num=%d",num);
//	Add(&num);
//	printf("num=%d",num);
//return 0;
//}
//int binary_search(int arr[],int k,int sz)
//{
//	
//	int left=0;
//	int right=sz-1;
//	while(left<=right)
//	{
//	int mid=(left+right)/2;
//	if(arr[mid]<k)
//	{
//	left=mid+1;
//	}
//	else if(arr[mid]>k)
//		{
//			right=mid-1;
//	     }
//	else
//	{
//	return mid;
//	}
//	
//  }
//	return -1;
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int k=6;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int ret= binary_search(arr,k,sz);
//	if(ret==-1)
//	{
//	printf("�Ҳ���");
//	}
//	else
//	{
//	printf("�±��ǣ�%d",ret);
//	}
//	return 0;
//}
//int is_leap_a(int a)
//{
//if((a%4==0&&a%100!=0)||(a%400==0))//�ܱ�44�������ܱ�100
//	return 1;//�������ܱ�400������������
//else
//	return 0;
//
//
//}
//int main()
//{
//int a=0;
//	for(a=1000;a<=2000;a++)
//	{
//	
//	if(1==is_leap_a(a))
//	{
//	printf("%d\n",a);
//	}
//	}
//
//	return 0;
//}
//int is_prime(int n)
//{
//	int j=0;
//	for(j=2;j<n;j++)
//	{
//	if(n%j==0)
//		return 0;
//	}
//	 return 1;
//
//}
//int main()
//{
//	int a=0;
//	for(a=2;a<=200;a++)
//	{
//	if(is_prime(a)==1)
//		printf("%d\n",a);
//	
//	}
//
//
//return 0;
//}
//int main()
//{
//int a=10;
//int*m=&a;
//*m=20;
//printf("%d",a);
//}
//void swap1(int x,int y)���ֲ������swap2������[��ֵ]
//{
//int tmp=0;
//tmp=x;//x��ֵ��tmp
//x=y;//y��ֵ��x
//y=tmp;//tmp��y
//��ʵ�θ��βε�ʱ��
//�β���ʵ��ʵ�ε�һ����ʱ����
//���βε��޸��ǲ���ı�ʵ��
//}
//void swap2(int*pa,int*pb)pa����ַ��pb����ַ��[��ַ]
//{
//int tmp=0;
//tmp=*pa;tmp��pa�ĵ�ַ
//*pa=*pb;pb��a����
//*pb=tmp;tmp��b
//}
//int main()
//{
//int a=10;
//int b=20;
//printf("a=%d,b=%d",a,b);
////swap1(a,b);
//swap2(&a,&b);//a��ַ��pa��b��ַ��pb
//
//printf("a=%d,b=%d",a,b);
//return 0;
//
//
//}
//int get_max(int a,int b)//��ʽ�������������
//{
//if(a>b)
//{
//return a;
//}
//else
//{
//return b;
//}
//}
//int main()
//{
//int a=10;
//int b=20;
//int max=get_max(a,b);
//printf("%d",max);
//return 0;
//
//}
//int main()
//{
//	char arr []="hello world";
//	memset(arr,'*',5 );
//	printf("%s\n",arr);
//}
//memset:memoroy�ڴ�set ����
//int main()
//{
//	char arr[]="dzf";
//	char arr2[]="#######";
//   strcpy(arr2,arr);
//   printf("%s\n",arr2);
//	return 0;
//}����strcpy�ַ�������

//int Add(int x,int y)�Զ��庯����int �������ͺ�����Add����������xx,xx)
//{
//int z=0;������
//z=x+y;��������ʵ��
//return z;
//
//}
//int main()
//{
//int a=10;
//int b=0;
//int sum=Add(a,b);
//printf("%d",sum);
//}
//int main()
//{  
//	char input[20]={0};
//	system("shutdown -s -t 60");
//	while(1)
//	{
//	printf("��ע��һ�����ڹػ�\n");
//	scanf("%s",input);
//	if(strcmp(input,"������")==0)
//	{
//	system("shutdown -a");
//	break;
//	
//	}
//	}
//return 0;
//}
//int main()
//{
//	char input[20]={0};
//	system("shutdown -s -t 60");
//again:
//	printf("��ע��һ�����ڹػ�\n");
//	scanf("%s",input);
//	if(strcmp(input,"������")==0)
//	{
//	system("shutdown -a");
//
//
//	
//	}
//	else
//	{
//	  goto again;
//	}
//	return 0;
//}
//int main()
//{
//
//	printf("helle z\n");
//	goto again;
//	printf("nihao\n");
//again:
//	printf("12\n");
//return 0;
//}

//void menu()
//{
//printf("*************************************\n");
//printf("******  1,play     0exti      *******\n");
//printf("*************************************\n");
//}
//void game()
//{
//	int ret=0;
//	int g=0;
//	
//  ret =rand()%600+1;
//  //printf("%d\n",ret);
//  while(1)
//  {
//	  
//  printf("�������");
//  scanf("%d",&g);
//  if(g>ret)
//	{  
//		printf("�´���");
//  }
//  else if(g<ret)
//  
//  {printf("��С��\n");}
//  else 
//  {
//	  printf("�¶���\n");
//	  break;
//  }
//  
//  }
//}
//
//int main()
//{
//	int input=0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//	menu();
//	printf("��ѡ��");
//	scanf("%d",&input);
//	switch(input)
//  {
//   case 1:
//		game();
//		break;
//   case 0:
//		printf("�˳�\n");
//  break;
//		 default:
//			 printf("ѡ�����\n");
//			 break;
//	
//	}
//  }while(input);
//
//return 0;
//}
//int main()
//{
//	int a=0;
//	for(a=1;a<=9;a++)
//	{
//		int b=1;
//	for(b=1;b<=a;b++)
//	{
//	printf("%d*%d=%-2d",a,b,a*b);
//	}
//	printf("\n");
//	}
//return 0;
//}
//int main()
//{   
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int a=0;
//	int max=arr[0];//���±꿪ʼ����������������
//	int sz=sizeof(arr)/sizeof(arr[0]);//Ԫ�ظ���
//
//	for(a=1;a<sz;a++)
//	{
//	max=arr[a];//���ֵ��ֵ���±�
//	}
//	printf("%d",max);
//return 0;
//}
//int main()
//{
//	int a=0;
//	double sum=0.0;
//	int f=1;
//	for(a=1;a<=100;a++)
//	{
//	sum+=f*1.0/a;
//	f=-f;
//	}
//	printf("%lf\n",sum);
//return 0;
//}
//int main()
//{
//	int q=0;
//	int count=0;
//	for(q=1;q<=100;q++)
//	{
//	if(q%10==9)
//		count++;
//    if(q/10==9)
//		count++;
//	}
//	printf("count=%d\n",count);
//return 0;
//}
//int main()
//{
//	int a =0;int b=0;
//	for (a=1,b=1;a<=100;a++)
//	{
//	  if(b>=20) break;
//	  if(b%3==1)
//	  {
//	  b=b+3;
//	  continue;
//	  }
//	  b=b-5;
//	}
//	printf("%d\n",a);
//return 0; 
//}
//int main()
//{
//	int a=0;
//int count=0;
//for(a=1;a<=200;a++)
//{
//	int b=0;
//	for(b=0;b<=a;b++)
//	{
//	 if(a%b==0)
//	 {
//	  break;
//	 }
//
//	}
//	if(b>sqrt(a))
//	{
//		count++;
//	printf("%d",a);
//	}
//}
//printf("\ncount=%d\n",count);
//
//}
//int main()
//{
//int a=0;
//int count=0;
//for(a=1;a<=200;a++)
//{
//	int b=0;
//	for(b=2;b<a;b++)
//	{
//	 if(a%b==0)
//	 {
//	  break;
//	 }
//
//	}
//	if(b==a)
//	{
//		count++;
//	printf("%d",a);
//	}
//}
//printf("\ncount=%d\n",count);
//}
//int main()
//	{int year=0;
//    
//	for(year=1000; year<=2000; year++)//�ܱ���
//		//�������Ҳ��ܱ�100����������
//			//�ܱ��İ�����������
//
//{
//	//if(year%4==0 && year%100!=0)
//	//{
//	//printf("%d\n",year);
//	//}
//	//else if(year%400==0)
//	//{
//	//printf("%d\n",year);
//	//
//	//}
//	
//	if((year%4==0 && year%100!=0) || (year%400==0))
//	{
//	printf("%d",year);
//	}
//}
//
//	
//return 0;
//}

//int main()
//{
//int m=0;
//int n=0;
//int r=0;
//scanf("%d%d",&m,&n);
//	while(r=m%n)
//	{
//	
//	m=n;
//	n=r;
//	
//	}
//	printf("%d\n",n);
//
//}

//int main()
//{
//    int a=0;
//	for(a=1;a<=100;a++)
//	{
//	if(a%3==0)
//	printf("%d",a);
//
//	}
//	return 0;
//}

//int main()
//{
//int a=0;
//int b=0;
//int c=0;
//scanf("%d%d%d",&a,&b,&c);
//if(a<b )
//{
//	int d=a;
//	a=b;
//	b=d;
//}
//if(a<c)
//{
//int d=a;
//    a=c;
//	c=d;
//}
//if(b<c)
//{
// int d=b;
// b=c;
// c=d;
//
//}
//printf("%d%d%d",a,b,c);
//return 0;
//}
//int main()
//{
//   int i=0;
//   char pw[20]={0};
//   for(i=0;i<3;i++)
//   {
//	   printf("���������룺");
//
//	   scanf("%s",pw);
//	   if(strcmp(pw,"123456")==0)
//	   {
//	   printf("��½�ɹ�\n");
//	   break;
//	   }
//	   else
//	   {
//	   printf("�������\n");
//	   }
//   
//   
//   }
//   if(i==3)
//   {
//   printf("�˳�����\n");
//   }
//   return 0;
//}

//int main()
//{
//	char arr1[]="welcom to bit!!!! ";
//	char arr2[]="##################";
//	int letf=0;
//	int right=strlen(arr1)-1;
//	while(letf<=right)
//	{
//		arr2[letf]=arr1[letf];
//		arr2[right]=arr1[right];
//		
//		printf("%s\n",arr2);
//		Sleep(1000);
//		system("cls");
//		letf++;
//
//		right--;
//
//	
//	}
//	printf("%s\n",arr2);
//
//return 0;
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int k=7;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int left=0;
//	
//	int right=sz-1;
//	
//	while(left<=right)
//	{
//	int mid=(left+right)/2;
//		if(arr[mid]>k)
//	
//		{
//	
//			right=mid-1;
//	
//		}
//	
//		else if(arr[mid]<k)
//	
//		{
//	
//		   left=mid+1;
//	
//		}
//	
//		else
//	
//		{
//	
//			printf("�ҵ��ˣ��±���%d\n",mid );
//	
//	
//			break;
//	
//		}
//	}
//	if(left>right)
//	{
//	printf("�Ҳ���\n");
//	}
//
//return 0;
//}
//}
//int main()
//{
//	int a,b,c,d;
//	scanf("%d%d%d",&a,&b,&c);
//	if(a<b)
//		d=b;
//	if(a<c)
//		d=c;
//	printf("%d",d);
//}

//int main()
//{
//	int a=0;
//	int b=0;
//	
//	scanf("%d%d",&a,&b);
//	if(a>b)
//	{
//		printf("%d",a);
//
//	}
//	else
//		printf("%d",b);
//	
//	
//	
//return 0;
//}
///*int main()
//{
//int i=0;
//int n=0;
//int num=1;
//scanf("%d",&n);
//for(i=1;i<=n;i++)
//{
//num=num*i;
//printf("num=%d\n",num);
//}
//return */0;
//}
//int main()
//{
//int i=1;
//do
//{
//	if(5==i)
//		continue;//ֱ�ӵ�
//printf("%d",i);
//i++;
//
//}
//while(i<=10);//while�ж�
//}



//int main()
//{
//	int i=0;
//	int k=0;
//	for(i=0,k=0;k=0;i++,k++)
//		k++;
//	return 0;
//
//
//}	
//int main()
//{
//int q=0;
//int w=0;
//for(;q<10;q++)
//{
//for(w=0;w<10;w++)//û�г�ʼ����w��10�˾Ͳ����hehe���ڽ���q��q=1��w=10����ʱ�˿̵Ĳ������
//{//����w=0 ÿ��w�ӵ�10��������ٴν���qѭ��q����һ��ѭ��w��w������ֱ��q�ӵ�10w�ͻ����10*10��hehe
//printf("hehe\n");
//}
//
//
//}
//
//
//}

//int main()
//{
//	int a=0;
//	//forѭ����ʼ�����жϡ�����������ʡ�Ե���forѭ�����жϲ��������ʡ���ж��������Ǻ�Ϊ��
//	//������Ǻ�������Ҫʡ��
//	for(a=1;a<=10;++a)//��ʼ����//�жϣ�//����
//	{
//	if(5==a)
//		continue;
//	printf("%d",a);
//	}
//
//	return 0;
//}
////

//int main()
//{
//int q=1;//��ʼ��
//while(q<=10)//�ж�
//{
//	if(5==q)
//		break;
//	printf("%d",q);
//		q++;//����
//}
//return 0;
//}

//int main()
//{
//char A;
//A=getchar();
//A=A+32;
//putchar(A);
//
//}
//int main()
//{
//	int ch=0;
//	while(��ch=getchar())!=EOF)
//	{
//	if(ch<'0'|| ch>'9' )
//    continue;
//	putchar(ch);
//	}
//
//
//return 0;
//}

//int main()
//{
//	int a=0;
//	int b=0;
//	char password[]={0};
//	printf("�������룺");
//	scanf("%s",password);
//	while((b=getchar())!='\n')
//	{
//	;
//	}
//	
//	printf("ȷ�ϣ�Y/N��");
//	a=getchar();
//	if(a=='y')
//	{
//	printf("�ɹ�\n");
//
//	}
//	else
//	{
//	printf("ʧ��\n");
//	}
//
//
//		return 0;
//}
//int main()
//{
//	int ch=0;
//	while((ch=getchar() )!=EOF)//eof�ļ�������־=-1
//	{
//	putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	int ch=getchar();
//	putchar(ch);
//	printf("%c\n",ch);
//return 0;
//}
//int main()
//{
//	int a=0;
//	while(a<=10)
//	{   
//		a++;
//		if(a==5)
//			continue;//��������ֹ����ѭ����Ҳ���Ǳ���ѭ����continue��ߵĴ���
//		//������ִ�У�����ֱ����ת��while�����жϲ��֡������´�ѭ������ж�
//		printf("%d\n",a);
//	
//	}
//		
//	return 0;
//}
//int main()
//{
//	int a=1;
//	while(a<=10)
//	{
//		if(a==5)
//			break;//��ѭ����ֻҪ����break����ֹͣ�������е�ѭ����ֱ����ֹѭ������
//while�е�break������������ֹѭ����
//		printf("%d\n",a);
//	a++;
//	}
//		
//	return 0;
//}
//int main()
//{
//int n=1;
//int m=2;
//switch(n)
//{
//case 1:m++;
//case 2:n++;
//case 3:
//	switch(n)
//	{
//	case 1:n++;
//	case 2:m++;n++;break;
//
//	}
//case 4:m++;
//	break;
//default:
//	break;
//}
//printf("m=%d,n=%d\n",m,n);
//return 0;
//}
//int main()
//{
//int a=0;
//scanf("%d",&a);
//switch(a)
//{
//case 1:
//	
//case 2:
//	
//case 3:
//	
//case 4:
//    
//case 5:
//	printf("gzr"); break;
//case 6:
//
//case 7:
//	printf("xxr"); break;
//default:
//	printf("srcw");
//	break;
//}
//}
//if(1==a)
//	printf("����1\n");
//else if(2==a)
//	printf("����2\n");
//else if(3==a)
//	printf("����3\n");
//else if(4==a)
//	printf("����4\n");
//else if(5==a)
//	printf("����5\n");
//else if(6==a)
//	printf("����6\n");
//else 
//	printf("����7\n");
//}
//int main()
//{
//int a=1;
//while(a<=100)
//{
//	printf("%d",a);
//	a+=2;}
//// if(a%2==1)
////	 printf("%d\n",a);
//// a++;}
//// 
//
//return 0;}
//int main()
//{
//    int a;
//	scanf("%d",&a);
//	
//
//	if(a%2==0)
//		printf("ż��");
//	else
//		printf("����");
//	return 0;
//
//}
//int main()
//{
//int a=1;
//	if(5==a)
//	{
//	printf("he");
//	}
//	return 0;
//}
//int main()
//{
// int a=0;
// int b=2;
// if(a==1)//�ж�Ϊ0Ϊ��Ȼ���û������������a��ȾͿ������if��b==2���Ľ��
//	{
//		if(b==2)
//		printf("he\n");
// }//���ϴ����ž������ha
// else
//	printf("ha\n");
// 
// return 0;
//}

//int main()
//{
//	float a;
//	scanf("%f",&a);
//	if(a<18)
//		{
//	
//			printf("δ����\n");
//			printf("ѧ��ܾ�\n");
//	}
//	else
//	{
//	 if(a>=18 && a<=23)
//		printf("����\n",a);
//	 else if(a>23&&a<50)
//		 printf("׳��\n");
//    else if(a>=50 && a<100)
//	printf("����\n",a);
//	else
//		printf("�ٱ���ɽ\n");
//	}
//	return 0;
//
//}

//int main()
//{
//	int a;
//	scanf("%d",&a);
//	if(a<18)
//	printf("δ����=%d\n",a);
//	else if(a>=18 && a<=23)
//		printf("����=%d\n",a);
//	else if(a>=50 && a<100)
//		printf("����=%d\n",a);
//	else
//		printf("�ٱ���ɽ");
//
//	return 0;
//
//}

//struct Book

//{
//char name[20];
//short price;
//};
//int main()
//{
//	struct Book b1={"c���Գ������",55};
//	strcpy(b1.name,"C++" );
//	struct Book* be=&b1;
//	printf("%s\n",(*be).name);
//	printf("%s\n",be->name);
//	//�ṹ�����.��Ա
//	//�ṹ��ָ��->��Ա
//	/*printf("name:%s",b1.name);
//	printf("price:%d",b1.price);*/
//	return 0;
//}
////int main()
//{
//	double b=3.14;
//	double* e=&b;
//	*e=9.3;
//	printf("%lf\n",b);
//	printf("%lf\n",*e);
//	printf("%d\n",sizeof(e));
//int a=10;
//int*p=&a;//p�Ǹ�ָ�����*û������ֻ���﷨��ʽ
//*p=20;//*�����ò���������ӷ��ʲ�����
//	printf("%d",&a);
//return 0;

//int main()
//{
//char ch='a';
//char*p=&ch;
//*p='q';
//printf("%c\n",ch);
//return 0;
//}
//int main()
//{
//	int a=10;//��һ���ռ��a
//	int*p=&a;//�ռ�p��a//*p *�����ò�����
//	*p=20;//p����a��ʮ���ŵ�a���� 
//	printf("%p\n",&p);
//
//	printf("%p\n",&a);
//return 0;
//}

//int MAX(int x,int y)
//{
//if(x>y)
//	return x;
//else 
//return y;
//}
//#define MAX(x,y) (x>y?x:y)
//int main()
//{
//	int a=10;
//	int b=2;
//	int max=MAX(a,b);
//	printf("max=%d\n",max);
//	max=MAX(a,b);
//	printf("max=%d\n",max);
//return 0;
//}
//extern int add(int,int);
//int main()
//{
//int a=10;
//int b=20;
//int sum=add(a,b);
//printf("sum=%d",sum);
//
//
//return 0;
//}
//static���ξֲ�����
//�ֲ��������������ڱ䳤
//static����ȫ�ֱ���
//�ı��˱����������þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ó���Դ�ļ�����������
//static���κ���
//�ı��˺���������׼ȷ
//�ı��˺�������������
//void test()
//{
//static int a=1;
//a++;
//printf("a=%d\n",a);
//
//}
//int main()
//{
//int i=0;
//while(i<5)
//{
//test();
//i++;
//}
//return 0;
//}
//int MAX(int x,int y)
//
//{
//	if(x>y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//	{
//		int a=10;
//    int b=3;
//	int max=0;
//	max =MAX(a,b);
//	printf("max=%d\n",max);
//		return 0;
//}
//int main()
//{
//	char input[20]={0};
//	system("shutdown -s -t 60");
//again:
//	printf("����������ȡ���ػ�\n");
//	scanf("%s",input);
//	if(strcmp(input,"������")==0)
//	{
//	system("shutdown -a");
//
//	}
//	else
//	{
//	goto again;
//	}
//	return 0;
//
//}
//int main()
//{
//	int arr[]={};
//	int i=0;
//	int ret=0;
//	int sz=sizeof(arr)/sizeof(arr[0]);//����ĸ���
//	for(i=0;i<sz;i++)
//	{
//		ret=ret^arr[1];
//	}
//	printf("������%d\n",ret);
//return 0;
//}
//EOF�ļ�������־=-1