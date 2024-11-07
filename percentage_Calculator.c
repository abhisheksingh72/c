#include<stdio.h>
#include<math.h>

int main(){
 
 
 float h,e,c,m,p,total;
 float per;

printf("Welcome To Percentage Calculator!\n");
printf("\n[NOTE: Enter Your Marks out of 100 Only]\n");
// Use of marks calculator
hid : printf("\nEnter marks of 1st Subject: ");
scanf("%f",&h);
if (h<0||h>100){
    printf("invalid marks! \n");
    goto hid;
}
// Use of marks calculator
eng : printf("Enter marks of 2nd Subject: ");
scanf("%f",&e);
if (e<0 ||e>100){
    printf("invalid marks! \n");
    goto eng;
}

//Use of marks calculator
comp : printf("Enter marks of 3rd Subject: ");
scanf("%f",&c);
if (c<0||c>100){
    printf("invalid marks! \n");
    goto comp;
}

// Use of marks calculator
mth : printf("Enter marks of 4th Subject: ");
scanf("%f",&m);
if (m<0||m>100){
    printf("invalid marks! \n");
    goto mth;
}

//Use of  Marks calculator
phy :printf("Enter marks of 5th Subject: ");
scanf("%f",&p);
if (p<0 ||p>100){
    printf("invalid marks! \n");
    goto phy;
}

//Total marks
printf("\n------------------------------------------------");
total=h+e+p+c+m;
printf("\nTotal Marks : %.2f\n",total);

// Percentage and devision
per=total/5;
per<=31?printf("You are FAIL: %.2f %%\n",per):printf("You are PASS");
if(per>32&&per<=50)
printf(" with 3rd devision having : %.2f %%\n",per);
if (per>51&&per<=70)
printf(" with 2nd devision having : %.2f %%\n",per);
if (per>71)
printf(" with 1st devision having : %.2f %%\n",per);
printf("\n------------------------------------------------\n");
}