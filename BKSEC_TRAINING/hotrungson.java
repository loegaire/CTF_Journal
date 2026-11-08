import java.util.Scanner;

public class hotrungson{
 static int trang; 
  public static String fourth(String t) {
    return t.substring(19) + t.substring(0, 19);
  }
   public static String rev4(String t) {
    return t.substring(t.length()-20) + t.substring(0,t.length() - 20);
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
  public static String rev3(String t) {
    String s = "";
    for (int i = 0; i < t.length(); i++) {
      if (i % 3 == 0)
        s += (char)(t.charAt(i) - (i / 3));
      else if (i % 3 == 2)
        s += (char)(t.charAt(i) - ((i - 2) / 3));
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
    return a;
  }
  public static String rev2(String t) {
  String a = t.substring(t.indexOf("S") + 1);
  String t1 = t.substring(0,t.indexOf("S")+1);
  for (int i = 0 ; i < t.length()-1 ; ++i)
  {
    String b = t1.substring(i);
    String c = t1.substring(0,i+1);
    String tmp = a+b+c;
    System.out.println(rev4(rev3(tmp)));

    }
  return "1";
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
   public static String rev1(String t) {
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
      s += (char)(t.charAt(i) - adj[i]);
    return s;
  }


  public static void main(String[] args) {
    String match = "Co_l3nnnnn_b@n_saP_d@nh_ba1_du0c_Spid3r_Rui_!";
    //System.out.println(rev4(rev3(rev2(rev1(first(second(third(fourth(match)))))))));
    String test = "sonhotrungSdiiavaodauStoi";
    //System.out.println(first(second(third(fourth(rev1(rev2(rev3(rev4(match)))))))));
    rev2(rev1(match));
  }
}
