#include<stdio.h>
struct cdachyderabad
{
	union data{
		struct{
			char student[30];
			int rollno ;
			float marks_dassd ;
		}dassd[3];
		struct{
structure_union			char student[30];
			int rollno;
			float marks_desd;
		}desd[3];
		struct{
			char student[30];
			 int rollno;
			  float marks_dac;
		}dac[3];
	}student_data;
}s;

int i;

void main()
{  

	
	printf("enter the detail of dassd course\n");
	for(i=0;i<3;i++)
         {       
	       printf("enter the student name");
		scanf("%s",&s.student_data.dassd[i].student);
                printf("enter the roll number");
		scanf("%d",&s.student_data.dassd[i].rollno);
		printf("enter the marks of student");
		scanf("%f",&s.student_data.dassd[i].marks_dassd);
	    }
	 printf("enter the detail of desdd course");
             for(i=0;i<3;i++)
            {       
		       printf("enter the student name");
		      scanf("%s",&s.student_data.desd[i].student);
                       printf("enter the roll number");
                         scanf("%d",&s.student_data.desd[i].rollno);
                         printf("enter the marks of student");
                        scanf("%f",&s.student_data.desd[i].marks_desd);
            } 
              printf("enter the detail of dac course");
	       for(i=0;i<3;i++)
	       {
	          printf("enter the student name");
                   scanf("%s",&s.student_data.dac[i].student);
                   printf("enter the roll number");
                   scanf("%d",&s.student_data.dac[i].rollno);
		   printf("enter the marks of student");
                        scanf("%f",&s.student_data.dac[i].marks_dac);
                } 
	           printf("the detail of dassd course");

               for(i=0;i<=3;i++)
                  {
			  printf("%s",s.student_data.dassd[i].student);
		          printf("%d",s.student_data.dassd[i].rollno);		  
                          printf("%f",s.student_data.dassd[i].marks_dassd);
                    } 
	          printf("the detail of desd course");
                    for(i=0;i<=3;i++)
                    { 
			     printf("%s",s.student_data.desd[i].student);
                                printf("%d",s.student_data.desd[i].rollno);    
				 printf("%f",s.student_data.desd[i].marks_desd);
                    }
                       printf("the detail of dac course");
                        for(i=0;i<=3;i++)
                        {
				  printf("%s",s.student_data.dac[i].student);
                                    printf("%d",s.student_data.dac[i].rollno); 
				      printf("%f",s.student_data.dac[i].marks_dac);
                          }
}






