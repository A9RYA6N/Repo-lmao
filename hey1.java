class hey1
{
    public static void main(String[] args) {
        System.out.println("hello");
        block(5);
    }
    static void block(int n)
    {
        if(n<=0)
        {
            return;
        }
        block(n-1);
        for(int i=0;i<n;i++)
        {
            System.out.print("# ");
        }
        System.out.println();
    }
}