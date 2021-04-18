#include <stdio.h>
#include <math.h>
#include <stdlib.h>
static void own_info();
double f(double);
int main(){
//own_info();
float b,a;
int n;
double h;
int i=0;
double x;
double sn;
own_info();
printf("\n\t\tlimit for Integrate :\n\n");
printf("\nPlease Enter upper Limit: ");
scanf("%f",&b);
printf("\nPlease Enter Lower Limit: ");
scanf("%f",&a);
printf("\nPlease Enter Number-Of-Rectangle(Infinite): ");
scanf("%d",&n);
h=((b-a)/n);
//printf("%f\n\n",h);		
while(i<n){	
	x=(a)+(h*i);
	//logic
	sn=sn+(f(x)*h);
	printf("\nArea sn==%.20lf",sn);
	//printf("\n%d         %.10lf",i,x);
	usleep(1);
	i++;
	}
	
}

double f(double x){
     double ans=(x*x);
     return ans; 	
}









static void own_info(){
printf("\n\n\nAuthor : One-Exploits @GNU/Projects"
"\nÂ©Mohammad Arquam(C.E.O)"
"\n+______________________________________________+"
"\n| Programmer,H@cker,Web developer,Web designer,|\n| Data Scientist,Software developer,YouTuber,  |\n| Blogger and more.\t\t\t       |\n|\t\t\t\t\t       |"
"\n| Gmail: oneexploits@gmail.com\t\t       |"
"\n| GitHub: https://github.com/one-exploits      |"
"\n| Insta: https://www.instagram.com/one_exploits\|"
"\n| Website: https://one-exploits.business.site/ |"
"\n|\t\t\t\t\t       |"
"\n| \t\t\tVersion:1.00.00\t       |\n"
"|\t\t\tDate:19/04/2021,Sun    |"
"\n+______________________________________________+");

}