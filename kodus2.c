#include <stdio.h>

main(int argc, char*argv[])
{
/* kiiruse valem v=s/t */
	float s;
	float t;
	s=6;
	t=2;
	printf("Kiirus: %s %.2f\n", "v=", s/t);
/* kiirenduse valem a=(v-v0)/t */
	float v, v0, t1;
	v=28;	
	v0=3;
	t1=6;
	printf("Kiirendus: %s %.2f\n", "a=", (v-v0)/t1);
/* jõud Newtoni esimese seaduse järgi Fr=m*g */
	float m, g;
	m=67;
	g=9.8;
	printf("Raskusjõud: %s %.2f\n", "F=", m*g);
/* voolutugevus pinge ja takistuse suhtena I=U/R */
	float u, r;
	u=12;
	r=5;
	printf("Voolutugevus: %s %.2f\n", "I=", u/r);
/* kolmurga pindala S=ah/2 */
	float a, h;
	a=3;
	h=7;
	printf("Kolmnurga pindala: %s %.2f\n", "S=", a*h/2);
/* Kuubi ruumala V=a*a*a */
	float a1;
	a1=3.7;
	printf("Kuubi ruumala: %s %.2f\n", "V=", a1*a1*a1);	
/* Ringjoone raadius ringjoone võrrandi abil (x-a)(x-a)+(y-b)(y-b)=r*r */
	float x, y, p, f;
	x=3.2;
	y=7.1;
	p=6;
	f=9;
	printf("Raadiuse ruut: %s %.2f\n", "r*r=", (x-p)*(x-p)+(y-f)*(y-f));
}
