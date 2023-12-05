#include <stdio.h>
#include <string.h>
struct myMovie{
  char movieName[50];
  int yearOfRelease;
  char director[50];
  char lang[50]; 
  float rate;
}existingMovie;

int main(){
  int n;
  printf("Enter no of movies details to enter : ");
  scanf("%d", &n);
  struct myMovie movieList[n];

  for (int i = 0; i < n; i++){
    printf("\nEnter details for movie %d :\n", i+1);
    printf("Movie Name : ");
    scanf(" %[^\n]s", movieList[i].movieName);
    printf("Release Year : ");
    scanf("%d", &movieList[i].yearOfRelease);
    printf("Director : ");
    scanf(" %[^\n]s", movieList[i].director);
    printf("Language : ");
    scanf(" %[^\n]s", movieList[i].lang);
    printf("Movie Rating (out of 10) : ");
    scanf("%f", &movieList[i].rate);
  }
  printf("\n***** Your Movie Details *****\n");
  for (int i = 0; i < n; i++){
    printf("\nMovie %d :\n", i+1);
    printf("Movie Name : %s\n", movieList[i].movieName);
    printf("Release Year : %d\n", movieList[i].yearOfRelease);
    printf("Director : %s\n", movieList[i].director);
    printf("Language : %s\n", movieList[i].lang);
    printf("Movie Rating (out of 10) : %.2f\n", movieList[i].rate);
  }

  // Initialized movie structure
  printf("\nAlready created movie :\n");
  strcpy(existingMovie.movieName,"Zindigi Na Milegi Dobara");
  printf("Movie Name = %s\n", existingMovie.movieName);
  existingMovie.yearOfRelease = 2005;
  strcpy(existingMovie.director,"Farhan Akhtar");
  strcpy(existingMovie.lang,"HINDI");
  existingMovie.rate = 9.7;
  
  printf("Year of Release = %d\n", existingMovie.yearOfRelease);
  printf("Director = %s\n", existingMovie.director);
  printf("Language = %s\n", existingMovie.lang);
  printf("Movie Rating = %.2f\n", existingMovie.rate);

  // user input
  printf("Enter the f");


 
  return 0;
}