#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<math.h>
#include<time.h>//库里的用<>自己写的用“”
//结构体的基础知识：结果是一些值的集合，这些值称为成员变量，结构的每各成员可以是不同类型的变量
//struct Stu//stu是结构体标签自己起的名字
//{
//	char name[20];//成员变量（图纸）
//	short age;
//	char tele[12];//定义一个结构体的类型
//    char sex[5];
//	
//	
//
//s1,s2,s3;//这都是全局的结构体变量
//typedef struct Stu//typedef作用是可以用stu s1 或者是struct Stu s
//{
//	char name[20];//成员变量（图纸）
//	short age;
//	char tele[12];//定义一个结构体的类型
//    char sex[5];
//
//}Stu;
//int main()
//{
//	Stu s1={"张三",18,"18627217504","男"};//这是初始化
//
//
//	struct Stu s2={"李四",20,"6354151","男"};//创建结构体变量（房子）
//	return 0;//struct Stu 不占空间加上s才占空间s是局部变量
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
//	printf("姓名：%s\n",s.name);
//	printf("年龄：%d\n",s.age);
//	printf("电话：%s\n",s.tele);
//	printf("性别:%s\n",s.sex);
//
//}
void p(Stu *s)
{
	printf("姓名：%s\n",s->name);
    printf("年龄：%d\n",s->age);
	printf("电话：%s\n",s->tele);
	printf("性别:%s\n",s->sex);


}
int main()
{

	Stu s={"里斯",38,"9561445111","保密"};
		//pri(s);
		p(&s);

}
//double p(int m,int n)
//{
//	if(n<0)
//		return (1.0/(p(m,-n)));
//
//	else if(n==0)//m的n次方
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
//		return d(num/10)+num%10;//递归，将四位数拆开得到个位相加
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
//	printf("奇数\n");
//	for(i=30;i>=0;i-=2)
//	{
//	
//		printf("%d",(m>>i)&1);
//	
//	}
//	printf("\n");
//	printf("偶数\n");
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
//	return count;//这个方法最高效
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
//int my_count(unsigned int n)//数二进制数里有几个1，这是方法一
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
//int my_count(int n)//方法二
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
//int i;//全局变量不初始化默认为0
//int main()
//
//{
//	i--;//i=—1了
//	if(i>sizeof(i))//sizeof计算变量是无符号数-1变符号位就很大了
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
//		arr1[i]=arr2[i];//交换数组
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
//	//t(arr,sz);//把数组里的内容全部初始化
//	r(arr,sz);//把数组里的内容逆转顺序
//	print(arr,sz);
//
//	return 0;
//}
//整形数组——存放整形
//字符数组——存放字符
//指针数组——存放指针
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
//	//两种情况不是首元素地址
//	//&数组名—数组名不是首元素的地址—数组名表示整个数组
//	//sizeof（数组名）_表示整个数组sizeof（数组名）计算整个数组的大小
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
//	printf("%d\n",&arr[9]-&arr[0]);//指针减去指针得到元素个数
//	//printf("%d\n",&arr[9]-&ch[0])//类型不一样的不能运算得到的值是不确定的
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
//避免野指针
//指针初始化，指针越界，指针使用之前检查有效性
//int* t()
//{
//
//	int a=10;
//	return &a;
//
//}
////指针指向的空间被释放
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
//	//内存越界也是野指针
//		//指针指向的范围超过数组范围就是野指针
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
//操作符的属性
//1操作符的优先级
//操作符的结合性
//是否控制求值顺序
//算术转换
//long double
//double   如果在表达式里遇到这样的，都是由低精度转成高精度的

//表达式求值的顺序一部分是由于操作符的优先级和结合性决定
//隐式类型转，c的整型算术运算总是至少以缺省整型的精度来进行的，表达式里字符和短整型会转换成整形，各种长度小于int长度的整型值，必须换成int,unsigneding
//负数的整形提升
//char c1=-1变量c1二进制位（补码）中只有8个比特位11111111
//因为char是为有符号的char所以整形提升的时候，高位补充符号位，即为1提升之后的结果是
//111111111111111111111111
//正数的整形提升
//char c2=1；
//变量c2的二进制位（补码）中只有8个比特位
//00000001
//因为char为有符号的char所以整形提升的时候，高位补充符号位，即为0提升之后的结果是
//000000000000000000000001
//无符号数整形提升高位为0
//int main()
//{
//	char a=3;
//	char b=127;
//	char c=a+b;//整型提升是按照变量的数据类型的符号位来提升的
//	//a和b相加
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//100010
//	printf("%d\n",c);
//	return 0;
//}
//创建一个结构体
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
//	struct Stu s1={"张",32,"123456789"};
//	struct Stu *ps=&s1;
//	printf("%s",ps->name);//左边是个结构体指针->右边成员名

//	printf("%d\n",s1.age);
//	printf("%s\n",s1.name);
//	printf("%s\n",s1.id);
//
//}

//逗号表达式 ；从左到右依次计算，整个表达式以最后一个表达式结果为准
//条件操作符  exp1?exp2:exp3如果e1是真表达式二是整个结果若表达式e1是假的表达式e3要算e3是整个结果
//int main()//||左边为真右边不算，&&左边为假就不要算了
//{
//	int i=1,a=1,b=2,c=3,d=4;
//	i=a++ || ++b ||  d++;//a++为真 后面不用算
//	//i=a++ && ++b&&d++;//a++=a=0,++b和d++为假不计算   &&计算中有一个是假就不计算
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n ",a,b,c,d );//到这 a=1 b=2c=3d=4
//
//	return 0;
//}
//void test1(int arr[])//这里的（）是语法规定
//{
//
//	printf("%d\n",sizeof(arr));//数组传参的是首元素的地址
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
//	char ch[10]={0};//数组  名+数
//    printf("%d\n",sizeof(arr));
//	printf("%d\n",sizeof(ch));
//	test1(arr);//调用函数的时候的（）就是函数操作符操作数有三个test1,（x，y)逗号不算操作数最少一个
//	test2(ch);
//
//}
//int mian()
//{
//
//	int a=(int)3.14;//（）强制转换
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
//	printf("%d\n",sizeof(int));//类型的打印括号不能省3
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
//	*p=1;//解引用
//
//
//}
//单目操作符，0和1，
//int main()
//{
//
//	int a=0;
//	if(a)//a为真打印
//	if(!a)//a为假打印
//	{
//	
//		printf("2");
//	
//	}
//}

//赋值操作符:初始化后还可以给一个自己满意的值
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
//	int count=0;//数二进制里有多少个1
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
//int main()//这个交换方法效率低
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
//只能对整数不可以是浮点数：位和移位操作符
//位操作符：& |^
//int main()
//{
//
//	//int a=3;
//
//	//int b=5;
//
//	//int c=a|b;//只要有一对是里面有1才为一，一对0才为0
//
//	//printf("c=%d\n",c);
//	//return 0;
//	int a=3;
//	int b=5;
//	int c=a^b;//对应的位相同为0，不同为1
//	printf("c=%d\n",c);
//	return 0;
//
//
//}
//int main()
//{
//	int a=3;//一定是补码运算
//	int b=5;
//	int c=a&b;//&按位与对应的二进制位只要有是0就是0，两个是1的就是1
//	printf("c=%d\n",c);
//	return 0;
//
//
//}

//int main()
//{
//	int i=5;//整数二进制表示：原码反码补码，存到内存里的是补码
//	//int b=a>>1;//不能移动负数那是未定义行为
//	int c=i<<1;//左移：左边不要一位，右边加0
//	//int d=a>>2;
//	//>>右移操作符:算术右移：右边不要，左边补符号位。逻辑右移：右边不要左边补0.
//	//移动的是二进制位
//	//16=10000，正数右移一位是除2的效果
//	//负数一般都是算术右移
//
//	//printf("b=%d\n",b);
//	printf("c=%d\n",c);
//	//printf("d=%d\n",d);
//
//	return 0;
//}

//对于/两边都是整数就得整数两边都是浮点数得到的也是浮点数
//int main()//算术操作符：除了%以外的操作符其他的都能用整数和浮点数
//{
//	double a=5/2;//商2余1  /<=>÷得到商
//	double b=5%2;//%取模两边数必须是整数：得到的是余数
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
//    printf("%p\n",&arr+1);//这里加一就跳过整个数组
//	printf("%d\n",*arr);   
//   return 0;
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6};

//	printf("%p\n",arr);//第一个元素地址
//	printf("%p\n",&arr[0]);//和第一个一样的意义
//	printf("%p\n",&arr);//这是取整个数组的地址
//	//一sizeof (数组名)-数组名表示整个数组，sizeof（数组名）计算的是数组大小，单位字节
//	//二&数组名，数组名代表整个数组，数组名取出的是整个数组的地址
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
//二维数组 类型加名字 加行加列行可以省略列不行,一维数组可以省略大小不完全定义
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

}*///数组访问从0开始
//数组大小可以算出来
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
//	char arr[]="abc";//[]下标引用操作符
//	char arr1[]={'a','b','c'};
//	char arr2[3]={'a','b'};
//	printf("%d\n",sizeof(arr));//4//算空间大小算\0
//	printf("%d\n",strlen(arr));//3//算字符长度不算\0
//	printf("%d\n",sizeof(arr1));//3
//	printf("%d\n",strlen(arr1));//sjz//这个是随机值
//	printf("%d",sizeof(arr2));//3
//	printf("%d",strlen(arr2));//2
//	return 0;
//
//
//}
//strlen和sizeof没有关系
//sizeof计算变量、数组、类型的大小单位是字节-操作符
//strlen 只能求字符串长度是库函数要头文件
//斐波那契数列
//1 1 2 3 5 8 13 21 34 55
//int fib(int n)
//{
// if(n<=2)
//	return 1;//递归不行了，效率慢
// else
//	return fib(n-1)+fib(n-2);
//
//
//
//}
//递归和循环
//递归简单有缺陷换循环（会溢出）
//循环麻烦就用递归
//int  fib(int n)
//{
//
//	int a=1;
//	int b=1;
//	int c=1;
//	while(n>2)//n必须大于二
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
//	//TDD-测试驱动开发
//	ret=fib(n);
//	printf("%d\n",ret);
//return 0;
//}
//int fac(int n)
//{
//	if(n<=1)
//		return 1;//递归
//	else
//		return n*fac(n-1);//数学阶乘公式
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
//	return 1+my_strlen(str+1);//递归方法
//	}
//	else 
//		return 0;
//
//}

//int my_strlen(char*str)
//{
//	int count=0;
//	while (*str!='\0')//函数循环方法
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
//	//int len=strlen(arr);arr是数组传过去的不是整个数组而是
//	int len =my_strlen(arr);//第一个元素的地址
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
//	printf("找不到");
//	}
//	else
//	{
//	printf("下标是：%d",ret);
//	}
//	return 0;
//}
//int is_leap_a(int a)
//{
//if((a%4==0&&a%100!=0)||(a%400==0))//能被44整除不能被100
//	return 1;//整除或能被400整除的是闰年
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
//void swap1(int x,int y)这种不能完成swap2的能力[传值]
//{
//int tmp=0;
//tmp=x;//x赋值给tmp
//x=y;//y赋值给x
//y=tmp;//tmp给y
//当实参给形参的时候
//形参其实是实参的一份临时拷贝
//对形参的修改是不会改变实参
//}
//void swap2(int*pa,int*pb)pa（地址）pb（地址）[传址]
//{
//int tmp=0;
//tmp=*pa;tmp是pa的地址
//*pa=*pb;pb给a里面
//*pb=tmp;tmp给b
//}
//int main()
//{
//int a=10;
//int b=20;
//printf("a=%d,b=%d",a,b);
////swap1(a,b);
//swap2(&a,&b);//a地址给pa，b地址给pb
//
//printf("a=%d,b=%d",a,b);
//return 0;
//
//
//}
//int get_max(int a,int b)//形式参数用完就销毁
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
//memset:memoroy内存set 设置
//int main()
//{
//	char arr[]="dzf";
//	char arr2[]="#######";
//   strcpy(arr2,arr);
//   printf("%s\n",arr2);
//	return 0;
//}函数strcpy字符串拷贝

//int Add(int x,int y)自定义函数有int 函数类型函数名Add函数参数（xx,xx)
//{
//int z=0;函数体
//z=x+y;交代函数实现
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
//	printf("请注意一分钟内关机\n");
//	scanf("%s",input);
//	if(strcmp(input,"我是猪")==0)
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
//	printf("请注意一分钟内关机\n");
//	scanf("%s",input);
//	if(strcmp(input,"我是猪")==0)
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
//  printf("请猜数字");
//  scanf("%d",&g);
//  if(g>ret)
//	{  
//		printf("猜大了");
//  }
//  else if(g<ret)
//  
//  {printf("猜小了\n");}
//  else 
//  {
//	  printf("猜对了\n");
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
//	printf("请选择：");
//	scanf("%d",&input);
//	switch(input)
//  {
//   case 1:
//		game();
//		break;
//   case 0:
//		printf("退出\n");
//  break;
//		 default:
//			 printf("选择错误\n");
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
//	int max=arr[0];//从下标开始可以适用其他数列
//	int sz=sizeof(arr)/sizeof(arr[0]);//元素个数
//
//	for(a=1;a<sz;a++)
//	{
//	max=arr[a];//最大值赋值是下标
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
//	for(year=1000; year<=2000; year++)//能被四
//		//整除并且不能被100整除是闰年
//			//能被四百整除是闰年
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
//	   printf("请输入密码：");
//
//	   scanf("%s",pw);
//	   if(strcmp(pw,"123456")==0)
//	   {
//	   printf("登陆成功\n");
//	   break;
//	   }
//	   else
//	   {
//	   printf("密码错误\n");
//	   }
//   
//   
//   }
//   if(i==3)
//   {
//   printf("退出程序\n");
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
//			printf("找到了，下标是%d\n",mid );
//	
//	
//			break;
//	
//		}
//	}
//	if(left>right)
//	{
//	printf("找不到\n");
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
//		continue;//直接到
//printf("%d",i);
//i++;
//
//}
//while(i<=10);//while判断
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
//for(w=0;w<10;w++)//没有初始化，w到10了就不输出hehe，在进入q，q=1、w=10，此时此刻的不在输出
//{//加上w=0 每当w加到10结束输出再次进入q循环q被加一在循环w，w被重置直到q加到10w就会输出10*10次hehe
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
//	//for循环初始化、判断、调整都可以省略但是for循环的判断部分如果被省略判断条件就是恒为真
//	//如果不是很熟练不要省略
//	for(a=1;a<=10;++a)//初始化；//判断；//调整
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
//int q=1;//初始化
//while(q<=10)//判断
//{
//	if(5==q)
//		break;
//	printf("%d",q);
//		q++;//调整
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
//	while(（ch=getchar())!=EOF)
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
//	printf("输入密码：");
//	scanf("%s",password);
//	while((b=getchar())!='\n')
//	{
//	;
//	}
//	
//	printf("确认（Y/N）");
//	a=getchar();
//	if(a=='y')
//	{
//	printf("成功\n");
//
//	}
//	else
//	{
//	printf("失败\n");
//	}
//
//
//		return 0;
//}
//int main()
//{
//	int ch=0;
//	while((ch=getchar() )!=EOF)//eof文件结束标志=-1
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
//			continue;//是用于中止本次循环的也就是本次循环中continue后边的代码
//		//不会再执行，而是直接跳转到while语句的判断部分。进行下次循环入口判断
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
//			break;//在循环中只要遇到break，就停止后期所有的循环，直接中止循环所以
//while中的break是用于永久终止循环的
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
//	printf("星期1\n");
//else if(2==a)
//	printf("星期2\n");
//else if(3==a)
//	printf("星期3\n");
//else if(4==a)
//	printf("星期4\n");
//else if(5==a)
//	printf("星期5\n");
//else if(6==a)
//	printf("星期6\n");
//else 
//	printf("星期7\n");
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
//		printf("偶数");
//	else
//		printf("奇数");
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
// if(a==1)//判断为0为假然后就没有输出，如果和a相等就可输出到if（b==2）的结果
//	{
//		if(b==2)
//		printf("he\n");
// }//加上大括号就是输出ha
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
//			printf("未成年\n");
//			printf("学会拒绝\n");
//	}
//	else
//	{
//	 if(a>=18 && a<=23)
//		printf("青年\n",a);
//	 else if(a>23&&a<50)
//		 printf("壮年\n");
//    else if(a>=50 && a<100)
//	printf("老年\n",a);
//	else
//		printf("寿比南山\n");
//	}
//	return 0;
//
//}

//int main()
//{
//	int a;
//	scanf("%d",&a);
//	if(a<18)
//	printf("未成年=%d\n",a);
//	else if(a>=18 && a<=23)
//		printf("青年=%d\n",a);
//	else if(a>=50 && a<100)
//		printf("老年=%d\n",a);
//	else
//		printf("寿比南山");
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
//	struct Book b1={"c语言程序设计",55};
//	strcpy(b1.name,"C++" );
//	struct Book* be=&b1;
//	printf("%s\n",(*be).name);
//	printf("%s\n",be->name);
//	//结构体变量.成员
//	//结构体指针->成员
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
//int*p=&a;//p是个指针变量*没有意义只是语法形式
//*p=20;//*解引用操作符，间接访问操作符
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
//	int a=10;//建一个空间叫a
//	int*p=&a;//空间p存a//*p *解引用操作符
//	*p=20;//p就是a二十被放到a里面 
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
//static修饰局部变量
//局部变量的生命周期变长
//static修饰全局变量
//改变了变量作用域，让静态的全局变量只能在自己所在的源文件内部使用出了源文件不能再用了
//static修饰函数
//改变了函数作用域不准确
//改变了函数的链接属性
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
//	printf("输入我是猪，取消关机\n");
//	scanf("%s",input);
//	if(strcmp(input,"我是猪")==0)
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
//	int sz=sizeof(arr)/sizeof(arr[0]);//数组的个数
//	for(i=0;i<sz;i++)
//	{
//		ret=ret^arr[1];
//	}
//	printf("单数：%d\n",ret);
//return 0;
//}
//EOF文件结束标志=-1