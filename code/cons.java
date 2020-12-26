class hello{
    int a;
    hello(){
    System.out.println("default constructor");
    a=10;
    }
    void display()
    {
        System.out.println(a);
    }
}
class cons{
    public static void main(String[] args){
        hello ob=new hello();
        ob.display();
    }
}