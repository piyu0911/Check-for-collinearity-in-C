main()
{
    float x1,y1,x2,y2,x3,y3,m1,m2;
    clrscr();
    printf("Enter x and y Coordinates:");
    scanf("%f %f %f %f %f %f",&x1,&x2,&x3,&y1,&y2,&y3);
    m1 = (y2-y1)/(x2-x1);
    m2 = (y3-y1)/(x3-x1);
    if (m1 == m2){
          printf(" Collinear");
    }
    else{
      printf("Non-Collinear");
    }
    getch();
}
