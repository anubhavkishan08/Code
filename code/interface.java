abstract class abc
{
    abstract void add();
}
class maths1 extends abc{
    void add()
    {
        int a=10,b=20;
        int c=a+b;
        System.out.println(c);
    }
}
class Inter
{
    public static void main(String[] args)
    {
        maths1 ob=new maths1();
        ob.add();
    }
}