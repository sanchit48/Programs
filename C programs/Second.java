import java.io.*;
import java.util.Scanner;
class Dome
{
  public static void main(String args[])
{
  //BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
  //Scanner sc=new Scanner(System.in);
  int marks[][][]={{{50,51,52},{60,61,62}},
                    {{70,71,72},{70,81,82}},
                    {{65,66,67},{75,76,77}}};

  //System.out.println(marks[0][1][0]);
  int sum=0;
  for(int dept=0;dept<3;dept++)
  {
    System.out.println("Department "+(dept+1)+":");
    for(int student=0;student<2;student++)
    {
    System.out.print("Student "+(student+1)+" marks: ");
      for(int mark=0; mark<3; mark++)
      {
        sum=sum+marks[dept][student][mark];
        System.out.print(marks[dept][student][mark] +" ");
      }

          System.out.println("Total: "+sum+" ");
      sum=0;
    }System.out.println();
  }


}
}
