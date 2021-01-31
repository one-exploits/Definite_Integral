#include <stdio.h>
#include <math.h>
#include <stdlib.h>
static void own_info();
int main(){
//own_info();
int upper_limit,lower_limit;
double h=0.000001;
int i=0;
double x;
own_info();
printf("\n\t\tlimit for Integrate :\n\n");
printf("\nPlease Enter Lower Limit: ");
scanf("%d",&lower_limit);
printf("\nPlease Enter upper Limit: ");
scanf("%d",&upper_limit);

x=(lower_limit)+(h*i);
double sn;	
while(x<=upper_limit){	
	x=(lower_limit)+(h*i);
	sn=sn+((x*x)*(h));
	printf("\nArea sn==%.25lf",sn);
	//printf("\n%d         %.10lf",i,x);
	usleep(1);
	i++;
	}
	
}











static void own_info(){
printf("\n\n\nAuthor : One-Exploits @GNU/Projects"
"\n©Mohammad Arquam(C.E.O)"
"\n+______________________________________________+"
"\n| Programmer,H@cker,Web developer,Web designer,|\n| Data Scientist,Software developer,YouTuber,  |\n| Blogger and more.\t\t\t       |\n|\t\t\t\t\t       |"
"\n| Gmail: oneexploits@gmail.com\t\t       |"
"\n| GitHub: https://github.com/one-exploits      |"
"\n| Insta: https://www.instagram.com/one_exploits\|"
"\n| Website: https://one-exploits.business.site/ |"
"\n|\t\t\t\t\t       |"
"\n| \t\t\tVersion:1.01.00\t       |\n"
"|\t\t\tDate:29/01/2021,Fri    |"
"\n+______________________________________________+");

}

