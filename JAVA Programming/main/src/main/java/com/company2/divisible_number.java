import java.util.Scanner;
public class divisible_number{
    public static void main(String[] args) {
        int i,k;
        int[] d =new int[5];
        Scanner n =new Scanner(System.in);
        for(i=0;i<5;i++)
        {
            System.out.print("Enter numbers: ");
            d[i] = n.nextInt();
        }
        for(k=0;k<5;k++)
        {
            if(d[k]%3==0||d[k]%5==0)
            {
                System.out.println(d[k]);
            }
        }
    }
}
