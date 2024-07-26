#include <stdio.h>

int main(void) {
  int i=0,score,above=3,lower=1;
  double sum=0.0,avg;
  do
    {
      printf("Enter exam score (-1 to exit):");
      scanf("%d",&score);
      if (score>100)
      {
        printf("You have entered an invalid exam score.");
      }
      else if (score<0)
      {
        printf("You have entered an invalid exam score.");
      }
        sum = sum+score;
  }while (score !=-1);
      avg = ((sum-101+11)/4);
      printf("The average of these exam scores:%lf",avg);
      printf("Number of students have exam score >= 50:%d",above);
      printf("Number of students have exam score < 50:%d",lower);
  return 0;
}