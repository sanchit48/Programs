//To Do A Sorted List
import java.io.*;
class Done
{
public static void main(String args[]) throws IOException
{
  BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
  System.out.print("How many elements? ");
  int num = Integer.parseInt(br.readLine());
  int marks[] = new int[num];
  int t;
  for(int i = 0;i<num;i++)
  {
    System.out.print("Enter integer : ");
    marks[i] = Integer.parseInt(br.readLine());
  }
  int i=0;
  boolean flag;
  while(flag=true)
  {
    if(i<(num-1))
    {
        if (marks[i]>marks[i+1])
          {
              t = marks[i];
              marks[i] = marks[i+1];
              marks[i+1] = t;
          }
        else break;
        i++;
    }
    else break;
  }
  for(int j = 0;j<num; j++)
  {
    System.out.println(marks[j]);
  }
}
}
