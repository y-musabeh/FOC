#include <stdio.h>

int main()
{
float grade = 0,i=0,sum=0,avg=0,max=0,max1=0;

while (grade != -1){
  
    printf("PLease enter a grade / enter -1 to exit\n");
    scanf("%f",&grade);

    sum = sum + grade;
    max1 = grade;
    i++;

    if (max < max1){
    max = max1;
    }
}
avg = sum / i;
printf("Sum : %f\n",sum);
printf("avg : %f\n",avg);
printf("Count : %f\n",i);
printf("Max : %f\n",max);



return 0;
}

