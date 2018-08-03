 #include<stdio.h>
 #include<conio.h>
 #include<string.h>
 #include<math.h>
 #include<float.h>
 #include<stddef.h>
 main()
 {
     int ch;
     printf("\n\t (1)add");
     printf("\n\t(2)edit");
     printf("\n\t(3)delete");
     printf("\n\t(4)exit");
     printf("\nenter your choice:\n");
     scanf("%d",&ch);
     if(ch==1)
     {
         printf("add option selected:!!");
     }
     else if(ch==2)
     {
         printf("edit option is selected:!!");
     }
     else if(ch==3)
     {
         printf("delete option is selected::!!");
     }
     else if(ch==4)
     {
         printf("exit option is selected:!!");
     }
     else
        {
            printf("invalid input");
        }
        getch();
        return 0;
 }
