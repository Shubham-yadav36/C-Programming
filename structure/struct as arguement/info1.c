struct data{
float amt;
char fname [30];
char lname [30];
} per;
main()
{
void print_per (struct data x);
printf("Enter the donor’s first and last names separated by a space:");
scanf ("%s %s", per.fname, per.lname);
printf ("\nEnter the amount donated in rupees:");
scanf ("%f", &per.amt);
print_per (per);
return 0;
}
void print_per(struct data x)
{
printf ("\n %s %s gave donation of amount Rs.%.2f.\n", x.fname, x.lname, x.amt);
}
