import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner tc = new Scanner(System.in);
        int n,total=0,tamanho;
        String numero;
        n=tc.nextInt();
        for(int i=0;i<n;i++)
        {
            total=0;
            numero=tc.next();
            tamanho=numero.length();
            for(int x=0;x<tamanho;x++)
            {
                if(numero.charAt(x)=='1')
                    total+=2;
                else if(numero.charAt(x)=='2' || numero.charAt(x)=='3' || numero.charAt(x)=='5')
                    total+=5;
                else if(numero.charAt(x)=='4')
                    total+=4;
                else if(numero.charAt(x)=='6' || numero.charAt(x)=='9' || numero.charAt(x)=='0')
                    total+=6;
                else if(numero.charAt(x)=='7')
                    total+=3;
                else if(numero.charAt(x)=='8')
                    total+=7;
            }
            System.out.println(total + " leds");
        }
    }
}
