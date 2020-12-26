class CalculateTax{
public static double function(double gross)
  {
   if (gross<240)
     return(0*gross);
   else if((gross>240)&&(gross<480))
     return(0.15*gross);
   else
     return(0.28*gross);
  }
}
class Question3
{
	public static void main(String arr[])
	{
		CalculateInterest ob=new CalculateInterest();
		double a=ob.function(5000);
		System.out.println(a);
	}
}