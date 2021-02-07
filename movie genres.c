int movie_genres(int);

int movie_genres(int age)
{
	int genre;
    if(age<=12)
    {
        switch(genre)
		{
        	case 1:
        	printf("Here are some recommendations for you!");
        	printf("\n- The Secret Life of Pets");
        	printf("\n- Spies in Disguise");
        	printf("\n- Hotel Transylvania");
        	printf("\n- Scoob!");
        	printf("\n- Sonic the Hedgehog");
			break;
				
			case 2:
        	printf("Here are some recommendations for you!");
        	printf("\n- Over the Moon");
        	printf("\n- Dolittle");
        	printf("\n- The Little Mermaid");
        	printf("\n- Pete's Dragon");
        	printf("\n- Into the Woods");
			break;
		
			case 3:
        	printf("Here are some recommendations for you!");
        	printf("\n- Next Gen");
        	printf("\n- Ralph Breaks the Internet");
        	printf("\n- The Emoji Movie");
        	printf("\n- Megamind");
        	printf("\n- Despicable Me");
			break;
			
			case 4:
        	printf("Here are some recommendations for you!");
        	printf("\n- Dora and the Lost City of Gold");
        	printf("\n- Mary Poppin Returns");
        	printf("\n- Frozen");
        	printf("\n- Pets United");
        	printf("\n- The Jungle Book");
			break;
			
			case 5:
        	printf("Here are some recommendations for you!");
        	printf("\n- Scooby-Doo");
        	printf("\n- Monster House");
        	printf("\n- Spirited Away");
        	printf("\n- Jaws");
        	printf("\n- Mystic River");
			break;
		
			case 6:
        	printf("Here are some recommendations for you!");
        	printf("\n- Smallfoot");
        	printf("\n- A Cinderella Story: Christmas Wish");
        	printf("\n- Aladdin");
        	printf("\n- The Lion King");
        	printf("\n- Trolls World Tour");
			break;
		
			case 7:
        	printf("Here are some recommendations for you!");
        	printf("\n- The Good Dinosaur");
        	printf("\n- Brave");
        	printf("\n- The Son of Bigfoot");
        	printf("\n- Monsters University");
        	printf("\n- Kung Fu Panda");
			break;
		
			case 8:
        	printf("Here are some recommendations for you!");
        	printf("\n- Harry Potter and the Philosopher's Stone");
        	printf("\n- The Polar Express");
        	printf("\n- School of Rock");
        	printf("\n- Dream Big");
        	printf("\n- Freedom Writers");
			break;
		}
    }
    else if(age>12)
    {
    	switch(genre)
    	{
    		case 1:
        	printf("Here are some recommendations for you!");
        	printf("\n- Jumaji: Welcome to the Jungle");
        	printf("\n- The Grinch");
        	printf("\n- Midnight Runners");
        	printf("\n- Instant Family");
        	printf("\n- Men In Black: International");
			break;
			
			case 2:
        	printf("Here are some recommendations for you!");
        	printf("\n- Gods of Egypt");
        	printf("\n- Mulan");
        	printf("\n- Fantastic Beasts: The Crimes of Grindelwald");
        	printf("\n- Wonder Woman 1984");
        	printf("\n- Along With the Gods: The Last 49 Days");
			break;
			
			case 3:
        	printf("Here are some recommendations for you!");
        	printf("\n- Geostorm");
        	printf("\n- Maze Runner");
        	printf("\n- Bird Box");
        	printf("\n- Independence Day: Resurgence");
        	printf("\n- The 5th Wave");
			break;
			
			case 4:
        	printf("Here are some recommendations for you!");
        	printf("\n- Alpha");
        	printf("\n- San Andreas");
        	printf("\n- The Mummy");
        	printf("\n- Divergent");
        	printf("\n- Suicide Squad");
			break;
			
			case 5:
        	printf("Here are some recommendations for you!");
        	printf("\n- Twin Murders: The Silence of the White City");
        	printf("\n- Unknown Origins");
        	printf("\n- Dark Waters");
        	printf("\n- Death Note");
        	printf("\n- The Invinsible Guest");
			break;
			
			case 6:
        	printf("Here are some recommendations for you!");
        	printf("\n- #Alive");
        	printf("\n- The Bridge Curse");
        	printf("\n- Nobody Sleeps in the Woods Tonight");
        	printf("\n- Escape Room");
        	printf("\n- Unfriended: Dark Web");
			break;
			
			case 7:
        	printf("Here are some recommendations for you!");
        	printf("\n- Be With You");
        	printf("\n- The Fault in Our Stars");
        	printf("\n- Crazy Rich Asians");
        	printf("\n- Me Before You");
        	printf("\n- La La Land");
			break;
			
			case 8:
        	printf("Here are some recommendations for you!");
        	printf("\n- Underwater");
        	printf("\n- Anna");
        	printf("\n- Annabelle Comes Home");
        	printf("\n- The Foreigner");
        	printf("\n- Insidious: The Last Key");
			break;
		}
	}
	return genre;
}














