#include <stdio.h> 
#include <stdlib.h>
#include <string.h> 

struct Viewer{
    char name[40]; 
    int age; 
    int genre_code; 
    int choice; 
    char genre[30]; 


}watcher[1];

void age_determine(struct Viewer *);
void age_determine(struct Viewer *w)
{
    int i;

    for(i = 0; i < 1; i++)
    {   
        fflush(stdin);
         printf("\n\nEnter your name : ");
         gets((w+i)->name); 
         printf("Enter your age  : ");
         scanf("%d",&(w+i)->age);

         printf("\n\t1. TV SHOWS");
         printf("\n\t2. MOVIES");

    printf("\n\nWhat do you want to watch [1/2] : ");
    scanf("%d",&(w+i)->choice);
    printf("---------------------------------------------");

    if((w+i)->choice == 1)
    {
    if((w+i)->age <= 12)
    {
        printf("\nGenre Codes :");
        printf("\n1. Comedy         5. Mystery");
        printf("\n2. Fantasy        6. Musical");
        printf("\n3. Sci-fi         7. Animated");
        printf("\n4. Adventure      8. Educational");

        printf("\nChoose your favourite genre : ");
        scanf("%d",&(w+i)->genre_code);
        if((w+i)->genre_code == 1)
    {
        strcpy((w+i)->genre, "Comedy");
    }
     if((w+i)->genre_code == 2)
    {
        strcpy((w+i)->genre, "Fantasy");
    }

 if((w+i)->genre_code == 3)
    {
        strcpy((w+i)->genre, "Sci-fi");
    }

 if((w+i)->genre_code == 4)
    {
        strcpy((w+i)->genre, "Adventure");
    }

 if((w+i)->genre_code == 5)
    {
        strcpy((w+i)->genre, "Mystery");
    }

 if((w+i)->genre_code == 6)
    {
        strcpy((w+i)->genre, "Musical");
    }

 if((w+i)->genre_code == 7)
    {
        strcpy((w+i)->genre, "Animated");
    }

 if((w+i)->genre_code == 8)
    {
        strcpy((w+i)->genre, "Educational");
    }
    }
    
    if((w+i)->age >= 13)
    {
        printf("\nGenre Codes :");
        printf("\n1. Comedy         5. Mystery");
        printf("\n2. Fantasy        6. Horror");
        printf("\n3. Sci-fi         7. Romance");
        printf("\n4. Adventure      8. Thriller");

        printf("\n\nChoose your favourite genre : ");
        scanf("%d",&(w+i)->genre_code);

        if((w+i)->genre_code == 1)
    {
        strcpy((w+i)->genre, "Comedy");
    }
     if((w+i)->genre_code == 2)
    {
        strcpy((w+i)->genre, "Fantasy");
    }

 if((w+i)->genre_code == 3)
    {
        strcpy((w+i)->genre, "Sci-fi");
    }

 if((w+i)->genre_code == 4)
    {
        strcpy((w+i)->genre, "Adventure");
    }

 if((w+i)->genre_code == 5)
    {
        strcpy((w+i)->genre, "Mystery");
    }

 if((w+i)->genre_code == 6)
    {
        strcpy((w+i)->genre, "Horror");
    }

 if((w+i)->genre_code == 7)
    {
        strcpy((w+i)->genre, "Romance");
    }

 if((w+i)->genre_code == 8)
    {
        strcpy((w+i)->genre, "Thriller");
    }

        
    }
    }

      if((w+i)->choice == 2)
    {
    if((w+i)->age <= 12)
    {
        printf("\nGenre Codes :");
        printf("\n1. Comedy         5. Mystery");
        printf("\n2. Fantasy        6. Musical");
        printf("\n3. Sci-fi         7. Animated");
        printf("\n4. Adventure      8. Educational");

        printf("\nChoose your favourite genre : ");
        scanf("%d",&(w+i)->genre_code);
        if((w+i)->genre_code == 1)
    {
        strcpy((w+i)->genre, "Comedy");
    }
     if((w+i)->genre_code == 2)
    {
        strcpy((w+i)->genre, "Fantasy");
    }

 if((w+i)->genre_code == 3)
    {
        strcpy((w+i)->genre, "Sci-fi");
    }

 if((w+i)->genre_code == 4)
    {
        strcpy((w+i)->genre, "Adventure");
    }

 if((w+i)->genre_code == 5)
    {
        strcpy((w+i)->genre, "Mystery");
    }

 if((w+i)->genre_code == 6)
    {
        strcpy((w+i)->genre, "Musical");
    }

 if((w+i)->genre_code == 7)
    {
        strcpy((w+i)->genre, "Animated");
    }

 if((w+i)->genre_code == 8)
    {
        strcpy((w+i)->genre, "Educational");
    }
    }
    
    if((w+i)->age >= 13)
    {
        printf("\nGenre Codes :");
        printf("\n1. Comedy         5. Mystery");
        printf("\n2. Fantasy        6. Horror");
        printf("\n3. Sci-fi         7. Romance");
        printf("\n4. Adventure      8. Thriller");

        printf("\n\nChoose your favourite genre : ");
        scanf("%d",&(w+i)->genre_code);

        if((w+i)->genre_code == 1)
    {
        strcpy((w+i)->genre, "Comedy");
    }
     if((w+i)->genre_code == 2)
    {
        strcpy((w+i)->genre, "Fantasy");
    }

 if((w+i)->genre_code == 3)
    {
        strcpy((w+i)->genre, "Sci-fi");
    }

 if((w+i)->genre_code == 4)
    {
        strcpy((w+i)->genre, "Adventure");
    }

 if((w+i)->genre_code == 5)
    {
        strcpy((w+i)->genre, "Mystery");
    }

 if((w+i)->genre_code == 6)
    {
        strcpy((w+i)->genre, "Horror");
    }

 if((w+i)->genre_code == 7)
    {
        strcpy((w+i)->genre, "Romance");
    }

 if((w+i)->genre_code == 8)
    {
        strcpy((w+i)->genre, "Thriller");
    }

        
    }
    }


    

    printf("\n------------------------------------------");
    printf("\nName            : %s",(w+i)->name);
    printf("\nAge             : %d",(w+i)->age);
    printf("\nFavourite genre : %s",(w+i)->genre);

    printf("\n\nHere are some recommendations for you !");
    

    }



 

}



int main() 
{

    printf("----------------------------------------------");
    printf("\n     TV SHOWS & MOVIES RECOMMENDATIONS");
    printf("\n--------------------------------------------");

    printf("\nWELCOME!");

    age_determine(watcher);



    return 0; 
}