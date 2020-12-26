import java.util.Scanner;
class Question1
{
public static void main(String args[])
{
int i=0;
Scanner sc=new Scanner(System.in);
System.out.println("enter alphabet");
char ch=sc.next().charAt(0);
switch(ch)
{

case  'a' :
	 case 'e'  :
	 case 'i'   :
	 case 'o'  :
	 case 'u'  :
	 case  'A' :
	 case 'E'  :
	 case 'I'   :
	 case 'O'  :
	 case 'U'  :i++;
	}
if(i==1)
System.out.println("entered alphabet "+ch+"is vowel");
else
System.out.println("consonant");
}
}