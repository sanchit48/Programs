import java.io.*;
class absbs
{
  public static void main(String args[]) throws IOException
  {
    BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
    StringBuffer sb = new StringBuffer();
    System.out.print("Enter a string: ");
    String str = br.readLine();
    String temp=str;
    sb.append(str);
    sb.reverse();
    String str2=sb.toString();

    if (temp.equalsIgnoreCase(str2))
    {
      System.out.println(temp+" is Palindrome");
    }


  }
}
