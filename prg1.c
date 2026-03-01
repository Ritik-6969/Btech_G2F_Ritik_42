#include<stdio.h>
int main(){
  float s1,s2,s3,s4,s5,sum,percentage;
  printf("enter the marks of all subjects:");
  scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);
  sum=s1+s2+s3+s4+s5;
  percentage=(sum/500)*100;
  printf("total marks=%.2f\n",sum);
  printf("percentage=%.2f\n",percentage);
  if (percentage >= 90 &&percentage <= 100)
  {
    printf("Grade A\n");
  }  
  else if(percentage >= 80 && percentage < 90)
  {
    printf("Grade B\n");
  }
  else if(percentage >=60 && percentage < 80)
  {
    printf("Grade C\n");
  }
  else
  {
    printf("Grade D\n");
  }
  return 0;
}
