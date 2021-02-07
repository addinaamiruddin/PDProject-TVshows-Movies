#include<stdio.h>

//return function 
//if else for diff age categories 
//return an array[5] of recommended movies

void main ()
{
	//genres based on age categories
	
	switch (genre)
	{
		case 1 : // COMEDY
		if (age<=12)
		{
			tvshows[5]={"The Loud House", "Spongebob Squarepants", "The Boss Baby : Back in Business", "Chowder", "Phineas and Ferbs"}
		} else if (age>12 && age<20)
		{
			tvshows[5]={"Victorious", "Family Guy", "Brooklyn 99", ""}	
		} else if (age>19)
		{
			tvshows[5]={"Fresh Off The Boat", "The Goldbergs", "The Unicorn", "Full House", ""}
		}
		break;
		
		case 2 : // FANTASY
		if (age<=12)
		{
			tvshows[5]={"Winx Club", "Descendants : Wicked World", "", "", ""}
		} else if (age>12 && age<20)
		{
			tvshows[5]={"Attack on Titan", "", "", ""}	
		} else if (age>19)
		{
			tvshows[5]={""}
		}
		break;
		
		case 3 : // SCIFI
		if (age<=12)
		{
			tvshows[5]={"Adventure of Jimmy Neutron", "Powerpuff Girls", "Big Hero 6 Series", "", ""}
		} else if (age>12 && age<20)
		{
			tvshows[5]={"The 100", "Doctor Who", "", ""}	
		} else if (age>19)
		{
			tvshows[5]={"L.U.C.A. The Beginning", ""}
		}
		break;
		
		case 4 : // ADVENTURE
		if (age<=12)
		{
			tvshows[5]={"Adventure Time", "", "", "", ""}
		} else if (age>12 && age<20)
		{
			tvshows[5]={"Stranger Things", "", "", ""}	
		} else if (age>19)
		{
			tvshows[5]={""}
		}
		break;
		
		case 5 : // MYSTERY
		if (age<=12)
		{
			tvshows[5]={"Adventure Time", "", "", "", ""}
		} else if (age>12 && age<20)
		{
			tvshows[5]={"Chilling Adventures of Sabrina", "", "", ""}	
		} else if (age>19)
		{
			tvshows[5]={""}
		}	
		break;
		
		case 6 : //MUSICAL & HORROR
		if (age<=12) // MUSICAL
		{
			tvshows[5]={"Adventure Time", "", "", "", ""}
		} else if (age>12 && age<20) // HORROR
		{
			tvshows[5]={"Stranger Things", "", "", ""}	
		} else if (age>19) // HORROR
		{
			tvshows[5]={""}
		}	
		break;
		
		case 7 : //ANIMATED & ROMANCE
		if (age<=12) // ANIMATED
		{
			tvshows[5]={"Adventure Time", "", "", "", ""}
		} else if (age>12 && age<20) // ROMANCE
		{
			tvshows[5]={"Stranger Things", "", "", ""}	
		} else if (age>19) // ROMANCE
		{
			tvshows[5]={""}
		}
		break;
		
		case 8 : // EDUCATIONAL & THRILLER
		if (age<=12) // EDUCATIONAL
		{
			tvshows[5]={"Backyard Science", "", "", "", ""}
		} else if (age>12 && age<20) // THRILLER
		{
			tvshows[5]={"Stranger Things", "", "", ""}	
		} else if (age>19) // THRILLER
		{
			tvshows[5]={""}
		}
		break;
	}
	
	return tvshows[5];
}
