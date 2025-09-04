#include<stdio.h>
void hello();void even();void evenodd();void leap();void grade();void digit();void week();void table();void fact();void cube();void sum();void ok();void length();void prime();void perfect();void reverse();void palindrome();
void main()
{
    int c,n,choice,key,press,loop,n1,arr,fun,arg,clss;
    printf(" \n \n \t**************!! Welcome to learn C !!****************\n");
    printf("\n \t     Enter 1. to see the Menu:-  ");
    scanf("\t%d",&n);
    system("cls");
    if(n==1)
    {
        come:
    printf("\n \n\t******! MENU !*******\n");
    printf("\n 2. for Control Structure  \n");
    printf("\n 3. for Array\n");
    printf("\n 4. for Function\n");
    printf("\n 5. for Storage class\n");
    printf("\n 6. for Exit\n");}
    else
    {printf("Sorry you have press the wrong number!");
    }printf("\n Please enter your choice:-  ");
    scanf("%d",&choice);
    system("cls");
    switch(choice)
    {
        case 2:printf("\n \t \nControl Structure are three types:- \n 1. Sequence Structure\n 2. Selective Structure\n 3. Looping or iteration Structure\n");label:printf("\n \n 1. for Sequence Structure\n \t \n 2. for Selective Structure\n \t \n 3. for Looping or Iteration Structure\n \t \n Please Enter:");scanf("%d",&key);system("cls");
        switch(key)
        {case 1:printf("\n Sequence Structure - It is refers to the line-by-line execution by which statements are executed sequentially.\n \t \n Syntax:-\n statement 1;\n statement 2;\n ...........;\n statement N;\n \nFor Example:- WAP to print Hello World\n");
            hello();
            printf("\n \n Back to Control Structure Menu: ");
            goto label;
        case 2:printf("\n \nSelective Structure - They are used to perform decision making and then branch the program flow based on the outcome of decision making.\n \n There are Six types of Selective Structure:-\n \n \n 1.If Statement\n \n 2.If-Else Statement\n \n 3.Else-If Statement\n \n 4.If-Else Ladder Statement\n \n 5.Nesting of If Statement\n \n 6. Switch Statement\n ");
            start:
            printf("\n \n Press 1. for If Statement\n Press 2. for If-Else statement\n Press 3. for Else-If Statement\n Press 4. for If-Else Ladder Statement\n Press 5. for Nesting of If Statement\n Press 6. for Switch Statement\n \n Please Enter: ");
            scanf("%d",&press);
            system("cls");
            switch (press)
            {case 1:printf("\n If Statement:-If Statement is used to selectively execute statement.\n \n Syntax:-\n if(condition) \n{\n statement 1;\n } \n \n So if the condition evaluates to TRUE, then statement 1 will be executed otherwise end.\nFor Example:- WAP which takes number, if the number is even print even otherwise stop.\n");
            even();
            printf("\nBack to Selective Structure Menu:");
            goto start;
            case 2:printf("\n If-Else Statement:- If-Else Statement is used sometime we need to execute some statements if condition is TRUE and some other statements if that condition is FALSE.\n \n Syntax:-\n if(condition)\n{\n statement1; \n}\n else \n { \n statement2; \n } \n So if the condition is TRUE, then statement 1 will be executed else statement 2 will be executed.\n \n For Example:- WAP which takes number, if the condition is true print even else false\n");
            evenodd();
            goto start;
            case 3:printf("\n Else-If Statement:- Else-If Statement is also used to selectively execute statement,but an Else-If must be written after an If statement, there can be multiple Else-If cases,the condition are tested from top to bottom,else option only get executed if none of the condition is TRUE.\n \n Syntax:-\n if(condition 1)\n statement 1;\n else if(condition 2)\n statement 2;\n else if(condition 3)\n else if(condition 4)\n .............\n else\n statement N;\n \n For Example:-WAP which takes an year as input and print leap year else not a leap year using else -if statement .\n");
            leap();
            goto start;
            case 4:printf("\n If-Else Ladder Statement:- It is define as a condition statements that has multiple else if statements blocks.\n \n Syntax:-\n if(condition1)\n{\n statement1; \n}\n else if(condition2)\n{\n statement2; \n }\n else if(condition3) \n{\n statement 3;\n } \n else\n {\n statement N;\n}\n \n If any of the condition is true ,then the control will exit the else if ladder and execute the next set of statement.\n \n For Example:- WAP which print Grade according to marks,using if-else ladder.\n");
            grade();
            goto start;
            case 5:printf("\n Nesting of If-Else Statement:- It is an if statement that is the target of another if statement\n \n Syntax:- \n if(condition1)\n {\n if(condition2)\n{\n statement1; \n }\n else\n {\n statement2;\n }\n}\n else\n{\n statement N;\n}\n It means you can use one of if or else if statement inside another if or else if statements.\n \n For Example:-WAP which take input and print positive even 3-digit number or invalid number\n");
            digit();
            goto start;
            case 6:printf("\nSwitch Statement:- Such cases are common where based on the values of an expression ,we have to choose the brand of execution\n \n Syntax:- \n switch(selector-expression)\n{\n case constant1: statement1; break;\n case constant2: statement2; break;\n default:\n statementN;\n}\n It allows a variable to be tested for equality against a list of values.\n \n For Example:-WAP which takes number as input and print week day according to that\n ");
            week();
            goto label;
            }
            break;
        case 3:printf("\n \n Looping or Iteration Structure - Loops are the Iteration statements which are used to repeatedly executed a set of instruction till a condition is met.\n \n There are three types of Loops:-\n 1. For Loop\n 2. While Loop\n 3. Do-While Loop\n \n");
            back:
            printf("\n \n 1. for For Loop\n  2. for While Loop\n  3. for Do-While Loop\n \n Please Enter: ");
            scanf("%d",&loop);
            system("cls");
            switch(loop)
            {
                case 1:printf("\n \n For Loop:- It is a control flow statement for specifying iteration,which allows code to be executed repeatedly \n \n Syntax:-\n for(inilizer; condition; increment; / decrement;)\n{\n statements;\n} \n \n A for loop has two parts : a header specifying the iteration, and a body which is executed once per iteration.\n \n For Example:- WAP which print table of any inputed number.\n");
                table();
                goto back;
                case 2:printf("\n \n While  Loop:- It is used to repeat a specifier block of code an unknown number of times ,until a condition is met.\n \n Syntax:-\n inilizer;\n while(condition)\n {\n statements;\n increment; / decrement;\n}\n \n The condition may be any expression,and true is any nonzero value.\n \n For Example:-WAP which print factorial of inputed number\n");
                fact();
                goto back;
                case 3:printf("\n \n Do-while Loop:- It creates a structured loop that executes as long as a specified condition is true at the end of each pass through the loop\n \n Syntax:-\n inilizer;\n do\n{\n statements;\n increment; / decrement; \n}\n while(condition);\n} \n \n It is executed for first time irrespective of the condition ,after executing while loop for first time,then condition is checked.\n \n For Example:- WAP which print cube of any inputed number \n");
                cube();
            }
            printf("\nBack to Menu:");
            goto come;
        }
    case 3:printf("\n \n Array :- An array is defined as the collection of similar type of data items stored at contiguous memory locations.\n \nSyntax:-\n datatype array name [size];\n \n There are 2 types of arrays. They are,\n 1. One dimensional array (1D - Array)\n 2. Multi dimensional array (2D - Array) ,(3D - Array) ,etc\n");
      look:
          printf("\n  1. for 1D - Array \n  2. for 2D - Array\n  3. for 3D - Array\n  4. for Strings\n \n Please Enter :");scanf("%d",&arr);system("cls");
          switch(arr)
          {
              case 1:printf("\n \n 1D - Array:- The simplest form of an array is a one dimensional array,it is a type of linear array. An array specifies a variable type and a name along with size.\n \n Syntax:- type array-name[size];\n where, type declares the base type of the array, array-name specifies the name and size defines how many elements the array will hold.\n \n For Example:- WAP to print the element of array and their sum.\n");
              sum();
              goto look;
              case 2:printf("\n \n 2D - Array:- It is similar to a 1D-Array, but it can be visualized as a grid with rows and columns\n \n Syntax:- type array-name[row][column];\n \n where,type is the base of array, the first index refers to the number of rows, the second index refers to the number of columns\n \n For Example:- WAP which takes rows and columns and prints their sum.\n");
              ok();
              goto look;
              case 3:printf("\n \n 3D - Array:- It is a multi-dimensional array ,it is a collection of 2D-arrays.\n \nSyntax:- type array-name[size][rows][columns];\n \n we have an array of type ,block size,row size and column size\n ");
              goto look;
              case 4:printf("\n \n Strings are defined as an array of characters,followed by a NULL character,it is terminated with a special character null .\n \n Syntax:- char array name[size];\n \n array name is any name given to the string variable and size is used to define the length of the string\n \nFor Example:- WAP to find the character in the string.\n");
              length();
              printf("\nBack to Menu:\n");
              goto come;
          }
      case 4:printf("\n \n Function :- It is a group of statements that together perform a task,a function declaration tells the compiler about a function's name ,return type and parameters.\n\n Elements of Function are:-\n 1. Function Declaration - It defines a function with the specifies parameters\n 2. Function Call - It is a request made by a program that performs a predetermined function.\n 3. Function Definition - It is a set of instructions bundled together to achieve a specific outcome.\n");
                    printf("\n There are two types of functions :-\n 1. Library Functions \n 2. User-defined Functions\n");
      funn:
          printf("\n 1. for Library Functions\n  2. for User-defined Functions\n \n Please Enter :");scanf("%d",&fun);system("cls");
          switch(fun)
          {
              case 1:printf("\n \n Library Functions:- They are the functions which are declared in the C header files\n \nSuch as :- scanf() , printf() etc\n");
              goto funn;
              case 2:printf("\n \n User-define Function:- They are the functions which are created by the C programmer.\n \n There are 4 types of User-define Function:-\n 1. No Arguments and No Return \n 2. No Arguments and a Return\n 3. Arguments and No Return\n 4. Arguments and a Return\n");
              baby:
              printf("\n \n 1. for No Arguments and No Return\n 2. for No Arguments and a Return\n 3. for Arguments and No Return\n 4. for Arguments and a Return\n");
              scanf("%d",&arg);system("cls");
              switch(arg)
              {
                  case 1:printf("\n \n No Arguments and No Return:- The called function does not receive any data from calling function.\n \n Syntax:- void function-name(void);\n \n For Example:- WAP which print Prime Number or Not.\n");
                  prime();
                  goto baby;
                  case 2:printf("\n \n No Argument and a Return:- It does not receive any data from the calling function but it receive a return value\n \nSyntax:- data-type function-name(void);\n \nFor Example:- WAP which print perfect number or Not.\n");
                  perfect();
                  goto baby;
                  case 3:printf("\n \n Argument and No Return:- It receive data from the calling function but it does not receive any return value\n \nSyntax:- void function-name(data-type);\n \n For Example:- WAP which print Reverse of any number.\n");
                  reverse();
                  goto baby;
                  case 4:printf("\n \n Argument and Return:- It receive data from the calling function and also it receive any return value\n \n Syntax:- data-type function-name(data-type);\n \n For Example:- WAP which print Palindrome number or Not.\n");
                  palindrome();
                  goto come;
              }
          }
          case 5:printf("\n \n Storage Class:- It defines the features of a variable. These features basically include the scope,visibility and life-time\n \n Syntax:- storage class specifier(data type);\n C support four storage classes:-\n 1. Automatic \n 2. Register \n 3. External \n 4. Static\n");
          now:
          printf("\n \n 1. for Automatic \n  2. for Register \n  3. for Extern\n  4. for Static\n \n Please Enter :");
          scanf("%d",&clss);system("cls");
          switch(clss)
          {
              case 1:printf("\n \n Automatic:- It is used to explicitly declare a variable with automatic storage, it is a default storage class for variables declared inside a block. \n syntax :- auto (data type) variable name;\n");
              goto now;
              case 2:printf("\n \n Register:- When a variable is declared using register as its storage class ,it is stored in a CPU register instead of RAM.\n Syntax:- register (data type) variable name;\n");
              goto now;
              case 3:printf("\n \nExtern:- It is used to give a reference of a global variable that is visible to all the program files \n Syntax:- external (data type) variable name;\n");
              goto now;
              case 4:printf("\n \n Static:- They have a lifetime over the entire program, i.e., memory for the static variables is allocated when the program begins running\n Syntax:- static (data type) variable name;\n");
          goto come;
          }
          case 6:printf("\n  \n ! Bye Bye !\n \n Thank You So Much \n \n Made by:- Sapna Singh \n Roll no.:- 10\n BCA 1st Semester\n");
    }
}
void hello()
{
    printf("\n Hello World\n");
}
void even()
{
    int e;
    printf("\nEnter any number:");scanf("%d",&e);
    if(e%2==0)
        printf("\n%d is Even.\n",e);
}
void evenodd()
{
    int o;
    printf("\nEnter any number:");scanf("%d",&o);
    if(o%2==0)
        printf("\n%d is an Even number \n",o);
        else
        printf("\n%d is an Odd number\n ",o);
}
void leap()
{
    int year;
    printf("\nEnter any year:");scanf("%d",&year);
    if(year%4==0)
        printf("\n%d is a Leap Year\n",year);
    else if(year%100!=0)
        printf("\n%d is a Leap Year\n",year);
    else
        printf("\n%d is not a Leap Year!\n",year);
}
void grade()
{
    int marks;
    printf("\nEnter your Marks:");scanf("%d",&marks);
    if(marks>=80)
        printf("\nGrade A\n");
    else if(marks>=50)
    printf("\n Grade B\n");
    else if(marks>=30)
        printf("\nGrade C\n");
    else
        printf("\nFail\n");
}
void digit()
{
    int dig;
	printf("\nEnter any number:");
	scanf("%d",&dig);
	if(dig>0)
    {
    if(dig%2==0)
    {
    if((dig>=100)&&(dig<1000))
    {
        printf("\n%d is a Positive Even 3-Digit Number\n",dig);
    }}
      else
      {
        printf("\n%d is an Invalid Number!!\n",dig);
      }
    }
}
void week()
{
	int n4;
	printf("\nEnter any number between 1 to 7:");
	scanf("%d",&n4);
	switch(n4)
	{
	case 1:printf("\nSUNDAY\n");break;
	case 2:printf("\nMONDAY\n");break;
	case 3:printf("\nTUESDAY\n");break;
	case 4:printf("\nWEDNESDAY\n");break;
	case 5:printf("\nTHURSDAY\n");break;
	case 6:printf("\nFRIDAY\n");break;
	case 7:printf("\nSATURDAY\n");break;
	default:
	printf("\nInvalid Number!!\n");
	}
}
void table()
{
	int i,n;
	printf("\nEnter any number:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
	printf("\n%d * %d = %d", n,i,n*i);
	}
}
void fact()
{
	int n,i,count=1;
	printf("\nEnter any number:");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
	count=i*count;
	i++;
	}
	printf("\nFactorial of %d is %d\n", n,count);
}
void cube()
{
	int i;
	printf("\nEnter any number:");
	scanf("%d",&i);
	do
	{
    printf("\nCube =%d\n",i*i*i);
	}
	while(i%2!=0);

}
    void sum()
    {
	int arr[10],i,sum=0,n;
	printf("\nEnter the size of array:");
	scanf("%d",&n);
	printf("\nEnter %d elements of array:\n",n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	printf("\nElements are:\n");
	for(i=0;i<n;i++)
	{
	printf("\n%d \n", arr[i]);
	sum=sum+arr[i];
}
	printf("\nSum =%d\n", sum);
    }
    void ok()
    {
        int arr[10][10],i,j,n1,n2,sum=0;
        printf("\nEnter the size of rows:");scanf("%d",&n1);
        printf("\nEnter the size of columns:");scanf("%d",&n2);
        printf("\nEnter %d elements:",n1*n2);
        for(i=0;i<n1;i++)
        {
            for(j=0;j<n2;j++)
            {
             scanf("\n%d",&arr[i][j]);
            }
        }
        for(i=0;i<n1;i++)
        {
            printf("\n Elements are:");
            for(j=0;j<n2;j++)
            {
                printf("%d ",arr[i][j]);
                sum=sum+arr[i][j];
            }
            printf("\n Sum =%d",sum);
            sum=0;
            printf("\n");
            }
    }
    void length()
    {
	char str[10],s;
	int i,pos=0,len;
	printf("\nEnter your string:");
	scanf("%s",str);
	len=strlen(str);
	printf("\nLength of the string is : %d\n ", len);
	}
	void prime()
	{
    int i,n,count=0;
	printf("\nEnter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
     if(n%i==0)
     count++;
	}
	if(count==2)
	printf("\n%d Is a Prime number.\n", n);
	else
	printf("\n%d Is not a Prime number.\n", n);
	}
	void perfect()
    {
	int n,i,count=0;
	printf("\nEnter any number:");
	scanf("%d",&n);
	i=1;
	while(i<n)
	{
	if(n%i==0)
	count=count+i;
	i++;
	}
	if(count==n)
	printf("\nPerfect number.\n");
	else
	printf("\nNOT! Perfect number.\n");
    }
	void reverse()
	{
    int n,r,sum=0;
	printf("\nEnter any number:");
	scanf("%d",&n);
	while(n>0)
	{
	r=n%10;
	sum=sum*10+r;
	n=n/10;
	}
	printf("\nReverse number is %d\n", sum);
	}
	void palindrome()
	{
	int n,d,i,save,sum=0;
	printf("\nEnter any number:\n");
	scanf("%d",&n);
	save=n;
	while(n>0)
	{
	d=n%10;
	sum=sum*10+d;
	n=n/10;
	}
	n=save;
	if(n==sum)
	printf("\n%d Is a Palindrome number.\n", n);
	else
	printf("\n%d is NOT a Palindrome number!\n", n);
	}








