// FACTORIAL CALCULATION 
//n number for which we want to calculate factorial
long long x = 1;  
for (int i = 2;i<=n;i++)
{ 
 x =(x*i)%m;
 }
 cout<<x%m<<"\n"; //modulo value input from user
 

1> chapter summary 
1. use "\n" instead of endl ; 
2. use getline function for taking a string pf input = getline(cin,s);
3. while(cin>>x) takes ip;
4. use freopen( "input.txt" , "r" , stdin) for file ip and op;
5. use long long  while working with numbers ;
6. use modulus arithmetic like the upper code ;
7. use E epsilon for round off problems , by using abs abolsute value;
8. use typedef command to short the code length ; typedef long long 11;
9. use macros to short the code length ; # define F first ;
10. knowledge of mathematics ;
11. contests for school student : IOI international olympiad in informatics
   and for college student : ICPC internat collegiate prog, contest ;
