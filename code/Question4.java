class CalculatePayBack{
 public static double function(double amount)
  {
   if (amount<500)
     return (0.0025*amount);
   else if((amount>500)&&(amount<1500))
     return((0.0025*500)+(0.0050*(amount-500)));
   else if((amount>1500)&&(amount<2500))
     return((0.0025*500)+(0.0050*1000)+(0.0075*(amount-1500)));
   else
     return((0.0025*500)+(0.0050*1000)+(0.0075*1000)+(0.0100*(amount-2500)));
  }
}
class Question4
{
	public static void main(String arr[])
	{
		CalculateInterest ob=new CalculateInterest();
		double a=ob.function(5000);
		System.out.println(a);
	}
}