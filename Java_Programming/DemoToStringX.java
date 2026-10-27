class Marvellous
{
    public int i ,j;
    public Marvellous(int a, int b)
    {
        this.i = a;
        this.j = b;
    }   

    public String toString()
    {
        return "Inside Tostring";
    }
    
}

class DemoToStringX
{
    public static void main (String A[])
    {
        Marvellous mobj1 = new Marvellous(11,21);  // mobj1.toString
        Marvellous mobj2 = new Marvellous(11,21);  // mobj2.toString

        System.out.println(mobj1);
        System.out.println(mobj1);
    }
}
