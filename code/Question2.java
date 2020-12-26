class CalculateInterest{
  public static double function(double principal)
  {
   if (principal<1000)
     return(0.04*principal);
   else if((principal>1000)&&(principal<5000))
     return(0.045*principal);
   else
     return(0.05*principal);
  }
}
class Question2
{
	public static void main(String arr[])
	{
		CalculateInterest ob=new CalculateInterest();
		double a=ob.function(5000);
		System.out.println(a);
	}
}
