#include <stdio.h>

int
main ()
{

  float bmi, weight, height;

  printf ("Enter your Weight (in kg) :\n");
  scanf ("%f", &weight);
  printf ("Enter your Height (in cm):\n");
  scanf ("%f", &height);

  float metre = height / 100;

  bmi = weight / (metre * metre);
  printf ("Your Weight is %f\n", weight);
  printf ("Your Height is %f\n", height);
  printf ("Your Body Mass Index (BMI) is %f\n", bmi);

  if (bmi < 18.5)
    {
      printf ("Remarks: Underweight");
    }
  else if (bmi >= 18.5 && bmi <= 24.9)
    {
      printf ("Remarks: Normal weight");
    }

  else if (bmi >= 25 && bmi <= 29.9)
    {
      printf ("Remarks: Overweight");
    }
  else if (bmi >= 30)
    {
      printf ("Remarks: Obese");
    }

}
