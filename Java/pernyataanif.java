import java.util.Scanner;

public class pernyataanif {

    public static void main(String[] args){

        //membuat variabel belanja dan scanner
        int belanja = 0;
        Scanner scan = new Scanner(System.in);

        //mengambil input
        System.out.print("total belanja: Rp ");
        belanja = scan.nextInt();

        // Cek Apakah dia belanja di atas 100000
        if (belanja > 100000) {
            System.out.println("selamat, anda mendapatkan diskon!");
        }

        System.out.println("terimakasih....");
    }
}