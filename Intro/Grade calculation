#include <stdio.h>

int main()
{
    int N;

    printf("Number of Students : ");
    scanf("%d", & N);

    float Attendance;
    float Assignment;
    float Class_Test;
    float Mid;
    float Final;


    float MidConvMark;
    float FinalConvMark;

    float TotalMark;

    for(int i=0; i< N; i++)
    {
        printf("Attendance : ");
        scanf("%f", &Attendance);

        printf("Assignment : ");
        scanf("%f", &Assignment);

        printf("Class Test : ");
        scanf("%f", & Class_Test);

        printf("Mid Term Out of 50 : ");
        scanf("%f", &Mid );

        printf("Final out of 100 : ");
        scanf("%f", &Final);


        MidConvMark = (Mid * 30) / 50  ;
        FinalConvMark = (Final * 40) / 100;

        TotalMark = Attendance + Assignment + Class_Test + MidConvMark + FinalConvMark;
        int count =  i + 1;

        if(TotalMark >= 90)
        {
            printf("\nStudent %d : A  \n" , count);
        }else if(TotalMark >= 86 && TotalMark < 90)
        {
            printf("\nStudent %d : A- \n" , count);
        }else if(TotalMark >= 82 && TotalMark < 86)
        {
            printf("\nStudent %d : B+ \n" , count);
        }else if(TotalMark >= 78 && TotalMark < 82 )
        {
            printf("\nStudent %d : B \n" , count);
        }else if(TotalMark >= 74 && TotalMark < 78)
        {
            printf("\nStudent %d : B- \n" , count);
        }else if(TotalMark >= 70 && TotalMark < 74)
        {
            printf("\nStudent %d : C+ \n" , count);
        }else if(TotalMark >= 66 && TotalMark < 70)
        {
            printf("\nStudent %d : C \n" , count);
        }else if(TotalMark >= 62 && TotalMark < 66)
        {
            printf("\nStudent %d : C- \n" , count);
        }else if(TotalMark >= 58 && TotalMark < 62)
        {
            printf("\nStudent %d : D+ \n" , count);
        }else if(TotalMark >= 55 && TotalMark < 58)
        {
            printf("\nStudent %d : D \n" , count);
        }else if(TotalMark < 55)
        {
            printf("\nStudent %d : F \n" , count);
        }

        printf("\n\n");
    }

    return 0;
}
