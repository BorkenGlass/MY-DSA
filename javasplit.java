import java.util.Scanner;

public class javasplit{
    public static void main(String[] args) {
        //String s1 = "My name is Rafayet";
        Scanner sc = new Scanner(System.in);
        String s1 = sc.nextLine();
        String s2[]=s1.split("\\s");
        //System.out.println(s2.length);
        int i=0;
        int max = s2[0].length();
        for(i=0;i<s2.length;i++){
            
            if(max<s2[i].length()){
                max = s2[i].length();
            }
        }
        for(String x:s2){
            if(x.length()==max){
                System.out.println(x);
            }
        }
        
    }
}