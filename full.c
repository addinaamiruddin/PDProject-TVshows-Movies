#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Viewer
{
    char name[40]; 
    int age; 
    int genre_code; 
    int choice; 
    char genre[30]; 
};

//MOVIE

void movie(struct Viewer *);

void movie(struct Viewer *p)
{
	//DISPLAY 
	printf ("\nName\t\t: %s", p->name);
	printf ("\nAge\t\t: %d", p->age);
	printf ("\nFavorite Genre\t: %s", p->genre);
	printf ("\n\n");

       if(p->age<=12) //CHILDREN
    {
        switch(p->genre_code)
		{
        	case 1: //COMEDY
        	printf("Here are some recommendations for you!");
        	printf("\n- The Secret Life of Pets");
        	printf("\n- Spies in Disguise");
        	printf("\n- Hotel Transylvania");
        	printf("\n- Scoob!");
        	printf("\n- Sonic the Hedgehog");
			break;
				
			case 2: //FANTASY
        	printf("Here are some recommendations for you!");
        	printf("\n- Over the Moon");
        	printf("\n- Dolittle");
        	printf("\n- The Little Mermaid");
        	printf("\n- Pete's Dragon");
        	printf("\n- Into the woods");
			break;
		
			case 3: //SCIFI
        	printf("Here are some recommendations for you!");
        	printf("\n- Next Gen");
        	printf("\n- Ralph Breaks the Internet");
        	printf("\n- The Emoji Movie");
        	printf("\n- Megamind");
        	printf("\n- Despicable Me");
			break;
			
			case 4: //ADVENTURE
        	printf("Here are some recommendations for you!");
        	printf("\n- Dora and the Lost City of Gold");
        	printf("\n- Mary Poppin Returns");
        	printf("\n- Frozen");
        	printf("\n- Pets United");
        	printf("\n- The Jungle Book");
			break;
			
			case 5: //MYSTERY
        	printf("Here are some recommendations for you!");
        	printf("\n- Scooby-Doo");
        	printf("\n- Monster House");
        	printf("\n- Spirited Away");
        	printf("\n- Jaws");
        	printf("\n- Mystic River");
			break;
		
			case 6: //MUSICAL
        	printf("Here are some recommendations for you!");
        	printf("\n- Smallfoot");
        	printf("\n- A Cinderella Story : Christmas Wish");
        	printf("\n- Aladdin");
        	printf("\n- The Lion King");
        	printf("\n- Trolls World Tour");
			break;
		
			case 7: //ANIMATED
        	printf("Here are some recommendations for you!");
        	printf("\n- The Good Dinosaur");
        	printf("\n- Brave");
        	printf("\n- The Son of Bigfoot");
        	printf("\n- Monsters University");
        	printf("\n- Kung Fu Panda");
			break;
		
			case 8: //EDUCATIONAL
        	printf("Here are some recommendations for you!");
        	printf("\n- Harry Potter and the Philosopher's Stone");
        	printf("\n- The Polar Express");
        	printf("\n- School of Rock");
        	printf("\n- Dream Big");
        	printf("\n- Freedom Writers");
			break;
		}
    }
    else if(p->age>12 && p->age<=19) //TEENAGERS
    {
    	switch(p->genre_code)
    	{
    		case 1: //COMEDY
        	printf("Here are some recommendations for you!");
        	printf("\n- Diary of a Wimpy Kid");
        	printf("\n- Bill & Ted Face the Music");
        	printf("\n- Freaky Friday");
        	printf("\n- School of Rock");
        	printf("\n- Home Alone");
			break;
			
			case 2: //FANTASY
        	printf("Here are some recommendations for you!");
        	printf("\n- Percy Jackson: Sea Of Monsters");
        	printf("\n- The Darkest Minds");
        	printf("\n- The Harry Potter Series");
        	printf("\n- Artemis Fowl");
        	printf("\n- Maleficient");
			break;
			
			case 3: //SCIFI
        	printf("Here are some recommendations for you!");
        	printf("\n- The Giver");
        	printf("\n- See You Yesterday");
        	printf("\n- Super 8");
        	printf("\n- Shazam!");
        	printf("\n- Alita : Battle Angel");
			break;
			
			case 4: //ADVENTURE
        	printf("Here are some recommendations for you!");
        	printf("\n- The Chronicles of Narnia : The Lion, the Witch and the Wardrobe ");
        	printf("\n- The Karate Kid ");
        	printf("\n- Inkheart");
        	printf("\n- The Hunger Games");
        	printf("\n- Spy Kids");
			break;
			
			case 5: //MYSTERY
        	printf("Here are some recommendations for you!");
        	printf("\n- Paper Towns");
        	printf("\n- Nerve");
        	printf("\n- Vampire Academy");
        	printf("\n- Enola Holmes");
        	printf("\n- Nancy Drew");
			break;
			
			case 6: //HORROR
        	printf("Here are some recommendations for you!");
        	printf("\n- Poltergeist");
        	printf("\n- Jaws : The Revenge");
        	printf("\n- The Visit");
        	printf("\n- Final Destination");
        	printf("\n- The Boy");
			break;
			
			case 7: //ROMANCE
        	printf("Here are some recommendations for you!");
        	printf("\n- To All the Boys I've Loved Before");
        	printf("\n- Flipped");
        	printf("\n- Five Feet Apart");
        	printf("\n- 10 Things I Hate About You");
        	printf("\n- The Princess Diaries");
			break;
			
			case 8: //THRILLER
        	printf("Here are some recommendations for you!");
        	printf("\n- 47 Meters Down");
        	printf("\n- Based on a True Story");
        	printf("\n- Searching");
        	printf("\n- Now You See Me");
        	printf("\n- Kin");
			break;
		}
	} else if(p->age>19) //ADULTS
    {
    	switch(p->genre_code)
    	{
    		case 1: //COMEDY
        	printf("Here are some recommendations for you!");
        	printf("\n- Jumanji : Welcome to the Jungle");
        	printf("\n- The Grinch");
        	printf("\n- Midnight Runners");
        	printf("\n- Instant Family");
        	printf("\n- Men In Black : International");
			break;
			
			case 2: //FANTASY
        	printf("Here are some recommendations for you!");
        	printf("\n- Gods of Egypt");
        	printf("\n- Mulan");
        	printf("\n- Fantastic Beasts: The Crimes of Grindelwald");
        	printf("\n- Wonder Woman 1984");
        	printf("\n- Along With the Gods : The Last 49 Days");
			break;
			
			case 3: //SCIFI
        	printf("Here are some recommendations for you!");
        	printf("\n- Geostorm");
        	printf("\n- Maze Runner");
        	printf("\n- Bird Box");
        	printf("\n- Independence Day : Resurgence");
        	printf("\n- The 5th Wave");
			break;
			
			case 4: //ADVENTURE
        	printf("Here are some recommendations for you!");
        	printf("\n- Alpha");
        	printf("\n- San Andreas");
        	printf("\n- The Mummy");
        	printf("\n- Divergent");
        	printf("\n- Suicide Squad");
			break;
			
			case 5: //MYSTERY
        	printf("Here are some recommendations for you!");
        	printf("\n- Twin Murders : The Silence of the White City");
        	printf("\n- Unknown Origins");
        	printf("\n- Dark Waters");
        	printf("\n- Death Note");
        	printf("\n- The Invinsible Guest");
			break;
			
			case 6: //HORROR
        	printf("Here are some recommendations for you!");
        	printf("\n- #Alive");
        	printf("\n- The Bridge Curse");
        	printf("\n- Nobody Sleeps in the Woods Tonight");
        	printf("\n- Escape Room");
        	printf("\n- Unfriended: Dark Web");
			break;
			
			case 7: //ROMANCE
        	printf("Here are some recommendations for you!");
        	printf("\n- Be With You");
        	printf("\n- The Fault in Our Stars");
        	printf("\n- Crazy Rich Asians");
        	printf("\n- Me Before You");
        	printf("\n- La La Land");
			break;
			
			case 8: //THRILLER
        	printf("Here are some recommendations for you!");
        	printf("\n- Underwater");
        	printf("\n- Anna");
        	printf("\n- Annabelle Comes Home");
        	printf("\n- The Foreigner");
        	printf("\n- Insidious : The Last Key");
			break;
	}
	}
	
	//WRITE RESULT TO FILE
	FILE *fresult;
	fresult = fopen("preferences.txt", "w");
	fprintf (fresult, "%s %d %s", p->name, p->age, p->genre);
	fclose(fresult);
}

//TV SHOWS

void tvshow (struct Viewer *);

void tvshow (struct Viewer *p)
{
	//DISPLAY
	printf ("\nName\t\t: %s", p->name);
	printf ("\nAge\t\t: %d", p->age);
	printf ("\nFavorite Genre\t: %s", p->genre);
	
	printf("\n\nHere are some recommendations for you!\n\n");
	if (p->age<=12) //CHILDREN
	{
		switch (p->genre_code)
		{
			case 1 : // COMEDY
				printf ("- The Loud House \nSpongebob Squarepants \n- The Boss Baby : Back in Business \n- Chowder \n- Pony");
				break;
				
			case 2 : // FANTASY
				printf ("- Winx Club \nDescendants : Wicked World \n- The Letter for the King \n- A Series of Unfortunate Events \n- The Fairly OddParents");	
				break;
			
			case 3 : // SCI-FI
				printf ("- Adventure of Jimmy Neutron \n- Powerpuff Girls \n- Big Hero 6 Series \n- Dexter's Laboratory \n- Danny Phantom");
				break;
				
			case 4 : // ADVENTURE
				printf ("- Adventure Time \n- Phineas and Ferb \n- Star Wars : The Clone Wars \n- Avatar : The Last Airbender \n- LEGO Friends");	
				break; 
			
			case 5 : // MYSTERY
				printf ("- Greenhouse Academy \n- aDetective Conan \n- Gravity Falls \n- Scooby-Doo! Mystery Incorporated \n- Mira, Royal Detective");
				break;
			
			case 6 : // MUSICAL
				printf ("- Little Einsteins \n- The Backyardigans \n- Alvin and The Chipmunks \n- Mickey Mouse Clubhouse \n- Troll : The Beat Goes On");
				break;
			
			case 7 : // ANIMATED
				printf ("- Winnie The Pooh \n- Peppa Pig \n- Special Agent OSO \n- Pokemon \n- Jake and The Neverland Pirates");
				break;
			
			case 8 : // EDUCATIONAL
				printf ("- Backyard Science \n- Connected \n- Sesame Street \n- Super Why \n- Art Attack");
				break;			
		}
		
	} else if (p->age>12 && p->age<=19) //TEENAGERS
	{
		switch (p->genre_code) 
		{
			case 1 : // COMEDY
				printf ("- Victorious \n- Family Guy \n- Brooklyn 99 \n- - Big Time Rush \n- Big Mouth");
			break;
				
			case 2 : // FANTASY
				printf ("- Attack on Titan \n- Teen Wolf \n- Once Upon a Time \n- Merlin \n- The Vampire Diaries");	
			break;
			
			case 3 : // SCI-FI
				printf ("- The 100 \n- Doctor Who \n- Black Mirror \n- iZombie \n- The Flash");
			break;
				
			case 4 : // ADVENTURE
				printf ("- Stranger Things \n- The Promised Neverland \n- Anne with an E \n- Rick and Morty \n- Supergirl");
			break; 
			
			case 5 : // MYSTERY
				printf ("- 13 Reasons Why \n- Unsolved Mysteries \n- You \n- Alice in Borderland \n- Pretty Little Liars");
			break;
			
			case 6 : // HORROR
				printf ("- Stranger Things \n- Chilling Adventures of Sabrina \n- Sweet Home \n- The Originals \n- Stranger Things");
			break;
			
			case 7 : // ROMANCE
				printf ("- Gossip Girl \n- Emily In Paris \n- True Beauty \n- High School Musical: The Musical: The Series \n- On My Block");
			break;
			
			case 8 : // THRILLER
				printf ("- Stranger Things \n- Black Mirror \n- Elite \n- Breaking Bad \n- Money Heist");
			break;			
		}
	} else if (p->age>19) //ADULTS
	{
		switch (p->genre_code)
		{
			case 1 : // COMEDY
				printf ("- Fresh Off The Boat \n- The Goldbergs \n- The Unicorn \n- Full House \n- The Big Bang Theory");
				break;
				
			case 2 : // FANTASY
				printf ("- The Witcher \n- Games of Thrones \n- The Magicians \n- Buffy the Vampire Slayer \n- Lucifer");	
				break;
			
			case 3 : // SCI-FI
				printf ("- L.U.C.A. The Beginning \n- The Umbrella Academy \n- Snowpiecer \n- Resident Alien \n- Love, Death and Robots");
				break;
				
			case 4 : // ADVENTURE
				printf ("- The Uncanny Counter \n- Outlander \n- Daybreak \n- Trip Flip \n- Trans-Siberian Pathfinders");	
				break; 
			
			case 5 : // MYSTERY
				printf ("- Criminal Minds \n- Law & Order \n- Sherlock \n- Mysteries at the Museum \n- Lost Treasure of The Maya");
				break;
				
			case 6 : // HORROR
				printf ("- The Walking Dead \n- American Horror Story \n- Locke & Key \n- Scream Queens \n- The Haunting of Hill House");
				break;
			
			case 7 : // ROMANCE
				printf ("- Bridgerton \n- First Dates \n- Crash Landing On You \n- Jane The Virgin \n- Virgin River");
				break;
			
			case 8 : // THRILLER
				printf ("- 9-1-1 \n- Nancy Drew \n- Supernatural \n- Dark \n- Criminal");
				break;			
		}
	}
	
	//WRITE RESULT TO FILE
	FILE *fresult;
	fresult = fopen("preferences.txt", "w");
	fprintf (fresult, "%s %d %s", p->name, p->age, p->genre);
	fclose(fresult);

}

//FUNCTION AGE_DETERMINE
void age_determine(struct Viewer watcher);
void age_determine(struct Viewer watcher)
{
	char ans;

    do
    {
		printf("\n\t1. TV SHOWS");
		printf("\n\t2. MOVIES");
	
	//ASK USER
	printf("\n\nWhat do you want to watch? [1/2] : ");
    	scanf("%d", &watcher.choice);
    	printf("---------------------------------------------");
		
		if(watcher.age <= 12) //CHILDREN
		{
			printf("\nGenre Codes :");
        	printf("\n\t1. Comedy         5. Mystery");
        	printf("\n\t2. Fantasy        6. Musical");
        	printf("\n\t3. Sci-fi         7. Animated");
        	printf("\n\t4. Adventure      8. Educational");

        	printf("\n\nChoose your favourite genre : ");
        	scanf("%d", &watcher.genre_code);
        	printf("---------------------------------------------");
        
           	switch (watcher.genre_code)
			{
        		case 1 :
        			strcpy(watcher.genre, "Comedy");
        			break;
        		
        		case 2 :
	        		strcpy(watcher.genre, "Fantasy");
    	    		break;
        		
        		case 3 :
        			strcpy(watcher.genre, "Sci-fi");
        			break;
        		
        		case 4 :
        			strcpy(watcher.genre, "Adventure");
        			break;
        		
        		case 5 :
	        	    strcpy(watcher.genre, "Mystery");
    	    	    break;
        	    
       		 	case 6 :
        			strcpy(watcher.genre, "Musical");
        			break;
        		
        		case 7 :
        			strcpy(watcher.genre, "Animated");
        			break;
        		
        		case 8 :
        			strcpy(watcher.genre, "Educational");
        			break;
        	}

		} else if(watcher.age >= 13) //TEENAGERS/ADULTS
		{
	        printf("\nGenre Codes :");
	        printf("\n\t1. Comedy         5. Mystery");
	        printf("\n\t2. Fantasy        6. Horror");
	        printf("\n\t3. Sci-fi         7. Romance");
	        printf("\n\t4. Adventure      8. Thriller");

	        printf("\n\nChoose your favourite genre : ");
	        scanf("%d",&watcher.genre_code);
        	printf("---------------------------------------------");
	
			switch (watcher.genre_code)
        	{
	        	case 1 :
    		   		strcpy(watcher.genre, "Comedy");
		       		break;
        		
		       	case 2 :
		       		strcpy(watcher.genre, "Fantasy");
		       		break;
        		
		       	case 3 :
        			strcpy(watcher.genre, "Sci-fi");
        			break;
        		
        		case 4 :
        			strcpy(watcher.genre, "Adventure");
        			break;
        		
        		case 5 :
        	   		strcpy(watcher.genre, "Mystery");
        	   		break;
        	    
		       	case 6 :
        			strcpy(watcher.genre, "Horror");
        			break;
        		
        		case 7 :
        			strcpy(watcher.genre, "Romance");
        			break;
        		
		       	case 8 :
		       		strcpy(watcher.genre, "Thriller");
        			break;
			}
		}
	
	//CALLING FUNCTION FOR TV SHOW/MOVIE
	if (watcher.choice==1)
	{
		tvshow(&watcher);
	} else if (watcher.choice==2)
	{
		movie(&watcher);
	}
	    
	//ASK IF USER WISHES TO CONTINUE
	fflush(stdin);
	printf ("\n\nDo you want more recommendations? [Y/N] : ");
	scanf ("%c", &ans);
	}while (ans=='Y'||ans=='y');
}

//MAIN
void main ()
{
	struct Viewer watcher;
	
	//DISPLAY
	printf("----------------------------------------------");
    printf("\n     TV SHOWS & MOVIES RECOMMENDATIONS");
    printf("\n--------------------------------------------");

    printf("\n\t\tWELCOME!");
	
	//PROMPT USER FOR INPUT
	fflush(stdin);
    printf("\n\nEnter your name : ");
    gets(watcher.name); 
    printf("Enter your age  : ");
    scanf("%d", &watcher.age);
	
	//CALL FUNCTION
	age_determine(watcher);
	printf ("\nThank you! Happy watching :D");
}


