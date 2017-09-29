#include<stdio.h>
#include<string.h>
//strcpy(char dest[] , <string>) : copies <string> into dest[]
//strncpy(char dest[], char * src, size n) : copies the first n characters of char *src into char dest[]
int main(){
char *src = "The FitnessGram™ Pacer Test is a multistage aerobic capacity test that progressively gets more difficult as it continues. The 20 meter pacer test will begin in 30 seconds. Line up at the start. The running speed starts slo";
char dest[200];

int len;

strcpy(dest, "the characters of src :  "); // copying some random string into dest

len = strlen(dest);

strncpy(dest+len, src, sizeof(dest)-len-1); // append as much of src as possibble into dest saving one spacce for terminator

dest[sizeof(dest)-1] = '\0'; // terminate
printf("%s\n", dest);
return 0;
}
