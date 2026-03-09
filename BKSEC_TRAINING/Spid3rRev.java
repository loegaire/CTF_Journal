import java.util.Scanner;

public class Spid3rRev {

  public static String fourth(String t) {
    return t.substring(19) + t.substring(0, 19);
  }

  public static String third(String t) {
    String s = "";
    for (int i = 0; i < t.length(); i++) {
      if (i % 3 == 0)
        s += (char)(t.charAt(i) + (i / 3));
      else if (i % 3 == 2)
        s += (char)(t.charAt(i) + ((i - 2) / 3));
      else
        s += t.charAt(i);
    }
    return s;
  }

  public static String second(String t) {
    String a = t.substring(0, t.indexOf("S") + 1);
    String t1 = t.substring(t.indexOf("S") + 1);
    String b = t1.substring(0, t1.indexOf("S") + 1);
    String c = t1.substring(t1.indexOf("S") + 1);
    return c + b + a;
  }

  public static String first(String t) {
    int[] adj = {
      -11,
      34,
      -28,
      -8,
      -57,
      -8,
      2,
      3,
      5,
      -17,
      -13,
      -18,
      -53,
      -5,
      0,
      3,
      -19,
      -16,
      -12,
      -6,
      -48,
      10,
      7,
      -19,
      -4,
      -1,
      -67,
      -19,
      -15,
      9,
      -47,
      -14,
      -8,
      -27,
      3,
      -19,
      3,
      -59,
      5,
      -30,
      8,
      33,
      22,
      -6,
      -50
    };
    String s = "";
    for (int i = 0; i < t.length(); i++)
      s += (char)(t.charAt(i) + adj[i]);
    return s;
  }

  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    String flag = in.nextLine();
    String match = "Co_l3nnnnn_b@n_saP_d@nh_ba1_du0c_Spid3r_Rui_!";
    if (first(second(third(fourth(flag)))).equals(match))
      System.out.println("Congratulation!!!!!!!!, Access Grand");
    else
      System.out.println("Access Denied! Please try again!");
    in.close();
  }
}
