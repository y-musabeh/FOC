#include <stdio.h>
#include <string.h>

int main()
{

//--------------------------------------------------------------------------

char d[100];
char p[100];

//--------------------------------------------------------------------------

printf("Please enter the DONOR's blood type followed by the PATIENT's blood type\n");
scanf("%s%s",d,p);
printf("You Choose these blood types :\nDonor: %s\nPatient: %s\n",d,p);
printf("\n============================================================\n");

//--------------------------------------------------------------------------

if ((strcmp(d,"b")==0 && strcmp(p,"ab")==0) || (strcmp(d,"o")==0 && strcmp(p,"ab")==0 || (strcmp(d,"o")==0 && strcmp(p,"a")==0) || (strcmp(d,"o")==0 && strcmp(p,"b")==0) || (strcmp(d,"a")==0 && strcmp(p,"ab")==0))){
printf("The blood transfer is POSSIBLE\n");

}

else{
printf("The blood transfer is NOT POSSIBLE\n");

}

//----------------------------------------------------------------------------

return 0;

}
