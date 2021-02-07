int tvshows_genres(int);

int tvshows_genres(int age)
{
	int genre;
	
	printf("Here are some recommendations for you!");
	if (age<=12)
	{
		switch (genre)
		{
			case 1 : // COMEDY
				printf ("The Loud House \nSpongebob Squarepants \nThe Boss Baby : Back in Business \nChowder \nPony");
			break;
				
			case 2 : // FANTASY
				printf ("Winx Club \nDescendants : Wicked World \nThe Letter for the King \nA Series of Unfortunate Events \nThe Fairly OddParents");	
			break;
			
			case 3 : // SCI-FI
				printf ("Adventure of Jimmy Neutron \nPowerpuff Girls \nBig Hero 6 Series \nDexter's Laboratory \nDanny Phantom);
			break;
				
			case 4 : // ADVENTURE
				printf ("Adventure Time \nPhineas and Ferb \nStar Wars : The Clone Wars \nAvatar : The Last Airbender \nLEGO Friends");	
			break; 
			
			case 5 : // MYSTERY
				printf ("Greenhouse Academy \naDetective Conan \nGravity Falls \nScooby-Doo! Mystery Incorporated \nMira, Royal Detective");
			break;
			
			case 6 : // MUSICAL
				printf ("Little Einsteins \nThe Backyardigans \nAlvin and The Chipmunks \nMickey Mouse Clubhouse \nTroll : The Beat Goes On");
			break;
			
			case 7 : // ANIMATED
				printf ("Winnie The Pooh \nPeppa Pig \nSpecial Agent OSO \nPokemon \nJake and The Neverland Pirates");
			break;
			
			case 8 : // EDUCATIONAL
				printf ("Backyard Science \nConnected \nSesame Street \nSuper Why \nArt Attack");
			break;			
		}
		
	} else if (age>12 && age<=19)
	{
		switch (genre)
		{
			case 1 : // COMEDY
				printf ("Victorious \nFamily Guy \nBrooklyn 99 \nBig Time Rush \nBig Mouth");
			break;
				
			case 2 : // FANTASY
				printf ("Attack on Titan \nTeen Wolf \nOnce Upon a Time \nMerlin \nThe Vampire Diaries");	
			break;
			
			case 3 : // SCI-FI
				printf ("The 100 \nDoctor Who \nBlack Mirror \niZombie \nThe Flash");
			break;
				
			case 4 : // ADVENTURE
				printf ("Stranger Things \nThe Promised Neverland \nAnne with an E \nRick and Morty \nSupergirl");
			break; 
			
			case 5 : // MYSTERY
				printf ("13 Reasons Why \nUnsolved Mysteries \nYou \nAlice in Borderland \nPretty Little Liars");
			break;
			
			case 6 : // HORROR
				printf ("Stranger Things \nChilling Adventures of Sabrina \nSweet Home \nThe Originals \n");
			break;
			
			case 7 : // ROMANCE
				printf ("Gossip Girl \nEmily In Paris \nTrue Beauty \nHigh School Musical: The Musical: The Series \nOn My Block");
			break;
			
			case 8 : // THRILLER
				printf ("Stranger Things \nBlack Mirror \nElite \nBreaking Bad \nMoney Heist");
			break;			
		}
	} else if (age>19)
	{
		switch (genre)
		{
			case 1 : // COMEDY
				printf ("Fresh Off The Boat \nThe Goldbergs \nThe Unicorn \nFull House \nThe Big Bang Theory");
			break;
				
			case 2 : // FANTASY
				printf ("The Witcher \nGames of Thrones \nThe Magicians \nBuffy the Vampire Slayer \nLucifer");	
			break;
			
			case 3 : // SCI-FI
				printf ("L.U.C.A. The Beginning \nThe Umbrella Academy \nSnowpiecer \nResident Alien \nLove, Death and Robots");
			break;
				
			case 4 : // ADVENTURE
				printf ("The Uncanny Counter \nOutlander \nDaybreak \nTrip Flip \nTrans-Siberian Pathfinders");	
			break; 
			
			case 5 : // MYSTERY
				printf ("Criminal Minds \nLaw & Order \nSherlock \Mysteries at the Museum \Lost Treasure of The Maya");
			break;
			
			case 6 : // HORROR
				printf ("The Walking Dead \nAmerican Horror Story \nLocke & Key \nScream Queens \nThe Haunting of Hill House");
			break;
			
			case 7 : // ROMANCE
				printf ("Bridgerton \nFirst Dates \nCrash Landing On You \nJane The Virgin \nVirgin River");
			break;
			
			case 8 : // THRILLER
				printf ("9-1-1 \nNancy Drew \nSupernatural \nDark \nCriminal");
			break;			
		}
	}



}
