#include <stdio.h>
float gradeAve(float test1, float test2, float test3);

int main()
{
  float grade1, grade2, grade3;
  float avg;

  printf("What was the grade on the first test? ");
  scanf(" %f", &grade1);

  printf("What was the grade on the second test? ");
  scanf(" %f", &grade2);

  printf("What was the grade on the third test? ");
  scanf(" %f", &grade3);

  avg = gradeAve(grade1, grade2, grade3);

  printf("\nWith those three test scores, the average is %.2f\n", avg);

  return 0;

}

/******************************************************************************/

float gradeAve(float test1, float test2, float test3)
{
  float localAvg;

  localAvg = (test1 + test2 + test3) / 3;

  return (localAvg);
}