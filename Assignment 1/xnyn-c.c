#include<stdio.h>
#include<math.h>
int main()
{
    FILE *fp1 = NULL;
    FILE *fp2 = NULL;
    fp1 = fopen("stemplotx.dat", "w");
    fp2 = fopen("stemploty.dat", "w");
    float x[] = {1.0, 2.0, 3.0, 4.0, 2.0, 1.0};
    int k = 20;
    float y[20]={0};
    printf("Hello World!");

    y[0]= x[0];
    y[1]=-0.5*y[0] + x[1];

    for (int n=2; n<k; n++)
    {
        if (n < 6)
	    	y[n] = -0.5*y[n-1]+x[n]+x[n-2];
	    else if (n > 5 && n < 8)
		    y[n] = -0.5*y[n-1]+x[n-2];
	    else
	    	y[n] = -0.5*y[n-1];
    }
    for (int i=0; i<20; i++)
    {
        printf("%f",y[i]);
    }
    for (int i = 0; i < 6; ++i) 
    {
        fprintf(fp1, "%lf\n", x[i]);
    }
    for (int i = 0; i < 20; ++i) 
    {
        fprintf(fp2, "%lf\n", y[i]);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}