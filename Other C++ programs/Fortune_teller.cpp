#include<iostream>

using namespace std;

void welcome();
int choice(int);
void get_date();
void checkdate(int , int , int);
int zodiac_sign(int , int , int);
int number_colour(int , int , int);
int soulmate(int , int , int);
int love_compatibility(int , int , int);

int main()
{
    int dd,dm,dy,choose;
    welcome();
    cout << "                     ()  WELCOME TO OUR DIGITAL FORTUNE TELLER  ()               \n";

    int age;
    char name[20];
    cout << "\nEnter your name: ";
    cin >> name;
    cout << "Enter your age : ";
    cin >> age;
   get_date();
   choice(choose);
}

void get_date()
{
    int dd, dm, dy;
    cout << "\nEnter your date of birth ( date month year ): ";
    cin >> dd >> dm >> dy;

    checkdate(dd, dm, dy);
    
}
void checkdate(int dd, int dm, int dy)
{
    if ((dm > 12) || (dm == 2 && dd >= 30) || (dm == 1, 3, 5, 7, 8, 10, 12 && dd > 31) || (dm == 2, 4, 6, 9, 11 && dd > 30) || (2021 - dy > 100) || (dy > 2021))
    {
        cout << "\n\n\t\t\tTHE ENTRY YOU MADE WAS WRONG.....\n";
        cout << "\n\n\t\t\tPLEASE ENTER CORRECT DATE OF BIRTH ACCORDING TO GREGORIAN CALENDAR\n";
        get_date();
    }

}

int choice(int ch)
{
    int choose,dd,dy,dm;
    cout<<"FORTUNE TELLER SYSTEM welcomes you to make your choice. (1,2,3,4 or 5)\n";
    cout<<"1 >> ZODIAC SIGN\n2 >> LUCKY NUMBER and COLOUR\n3 >> WHERE YOU WILL GET YOUR SOULMATE ?\n4 >> LOVE COMPATIBILITY\n5 >> EXIT\n";
    
    while(1)
    {
        cout<<"\nPlease enter your CHOICE ( 1 to 5)\n";
        cin>>choose;
        switch(choose)
        {
            {
                case 1: zodiac_sign(dd,dm,dy);
                break;
            }

            {
                case 2: number_colour(dd,dm,dy);
                break;
            }

            {
                case 3: soulmate(dd,dm,dy);
                break;
            }

            {
                case 4: love_compatibility(dd,dm,dy);
                break;
            }

            {
                case 5: exit(0);
                break;
            }

            default: 
            cout<<"Please enter a VALID choice.";
        }
    }
}


void welcome()
{
    cout<<"|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n~~~~~~~~~~~~ WELCOME TO OUR FORTUNE TELLING SYSTEM ~~~~~~~~~~~~\n\n|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";
    cout<<"\n\nThis system is designed to predict your fortune based on your personal details. i.e. your Date of Birth,\nYour Age and some more information about you is needed for the purpose of being accurate in the results.";
    cout<<"\n\nThis systems can be used to predict your\n\n>> ZODIAC SIGN >> LUCKY NUMBER >> LUCKY COLOUR >> LOVE COMPATIBILITY >> and much more about you !";
    cout<<"\n\n                                 ------Excited ?-----\n\n             Come take a flight into the prestigious fortune telling system.\n\n                                 ------LET'S GO-----\n\n";
}
int zodiac_sign(int dd, int dm, int dy)
{
    
    if ((dd >= 21 && dm == 3) || (dd <= 19 && dm == 4))
    {
         cout<<"\nYour Zodiac Sign is --> ARIES \n";
    }

    else if((dd >= 20 && dm == 4) || (dd <= 20 && dm == 5))
    {
         cout<<"\nYour Zodiac Sign is --> TAURUS \n";
    }

    else if((dd >= 21 && dm == 5) || (dd <= 20 && dm == 6))
    {
         cout<<"\nYour Zodiac Sign is --> GEMINI \n";
    }

    else if((dd >= 21 && dm == 6) || (dd <= 22 && dm == 7))
    {
         cout<<"\nYour Zodiac Sign is --> CANCER \n";
    }

    else if((dd >= 23 && dm == 7) || (dd <= 22 && dm == 8))
    {
         cout<<"\nYour Zodiac Sign is --> LEO \n";
    }

    else if((dd >= 23 && dm == 8) || (dd <= 22 && dm == 9))
    {
         cout<<"\nYour Zodiac Sign is --> VIRGO \n";
    }

    else if((dd >= 23 && dm == 9) || (dd <= 22 && dm == 10))
    {
         cout<<"\nYour Zodiac Sign is --> LIBRA \n";
    }

    else if((dd >= 23 && dm == 10) || (dd <= 21 && dm == 11))
    {
         cout<<"\nYour Zodiac Sign is --> SCORPIO \n";
    }

    else if((dd >= 22 && dm == 11) || (dd <= 21 && dm == 12))
    {
        cout<<"\nYour Zodiac Sign is --> SAGITTARIUS \n"; 
    }

    else if((dd >= 22 && dm == 12) || (dd <= 19 && dm == 1))
    {
        cout<<"\nYour Zodiac Sign is --> CAPRICORN \n";
    }

    else if((dd >= 20 && dm == 1) || (dd <= 18 && dm == 2))
    {
        cout<<"\nYour Zodiac Sign is --> AQUARIUS \n";
    }

    else if((dd >= 19 && dm == 2) || (dd <= 20 && dm == 3))
    {
        cout<<"\nYour Zodiac Sign is --> PISCES \n";
    }
    

}

int number_colour(int dd, int dm, int dy)
{
    
    if ((dd >= 21 && dm == 3) || (dd <= 19 && dm == 4))
    {
        cout<<"\nYour lucky numbers are --> 6 , 49\n";
        cout<<"Your lucky colour is --> Red\n";
    }

    else if((dd >= 20 && dm == 4) || (dd <= 20 && dm == 5))
    {
        cout<<"\nYour lucky numbers are --> 5 , 6\n";
        cout<<"Your lucky colours are --> Pink , White\n";
    }

    else if((dd >= 21 && dm == 5) || (dd <= 20 && dm == 6))
    {
        cout<<"\nYour lucky numbers are --> 5 , 6\n";
        cout<<"Your lucky colours are --> Light Yellow , Green\n";
    }

    else if((dd >= 21 && dm == 6) || (dd <= 22 && dm == 7))
    {
        cout<<"\nYour lucky numbers are --> 2 , 9.\n";
        cout<<"Your lucky colours are --> White , Grey , Cream\n";
    }

    else if((dd >= 23 && dm == 7) || (dd <= 22 && dm == 8))
    {
        cout<<"\nYour lucky numbers are  --> 1 , 5 , 9.\n";
        cout<<"Your lucky colours are --> Shades of Gold , Burnt Orange\n ";
    }

    else if((dd >= 23 && dm == 8) || (dd <= 22 && dm == 9))
    {
        cout<<"\nYour lucky numbers are --> 5 and 6\n";
        cout<<"Your lucky colours are --> Blue , Green , Yellow\n";
    }

    else if((dd >= 23 && dm == 9) || (dd <= 22 && dm == 10))
    {
        cout<<"\nYour lucky numbers are --> 5 , 6 , 9\n";
        cout<<"Your lucky colours are --> White , Light Blue\n";
    }

    else if((dd >= 23 && dm == 10) || (dd <= 21 && dm == 11))
    {
        cout<<"\nYour lucky numbers are --> 1 , 4 , 2 , 7\n";
        cout<<"Your lucky colours are --> All Shades of Brown , Red , white\n";
    }

    else if((dd >= 22 && dm == 11) || (dd <= 21 && dm == 12))
    {
        cout<<"\nYour lucky numbers are --> 5 , 3 , 8 , 6\n";
        cout<<"Your lucky colours are --> Dark Yellow , Orange\n";
    }

    else if((dd >= 22 && dm == 12) || (dd <= 19 && dm == 1))
    {
        cout<<"\nYour lucky numbers are --> 6 , 5 , 8\n";
        cout<<"Your lucky colours are --> Black , Purple , Dark Brown\n";
    }

    else if((dd >= 20 && dm == 1) || (dd <= 18 && dm == 2))
    {
        cout<<"\nYour lucky numbers are --> 3 , 9 , 7\n";
        cout<<"Your lucky colours are --> Blue , Purple , White\n";
    }

    else if((dd >= 19 && dm == 2) || (dd <= 20 && dm == 3))
    {
        cout<<"\nYour lucky numbers are --> 3 , 7\n";
        cout<<"Your lucky colours are --> Yellow , Orange\n";
    }
    
}

int soulmate(int dd, int dm, int dy)
{
    
    if ((dd >= 21 && dm == 3) || (dd <= 19 && dm == 4))
    {
        cout<<"\nYou will find you soulmate in a CAFE !\n";
    }

    else if((dd >= 20 && dm == 4) || (dd <= 20 && dm == 5))
    {
        cout<<"\nYou will find your soulmate (NEVER) !\n";
    }

    else if((dd >= 21 && dm == 5) || (dd <= 20 && dm == 6))
    {
        cout<<"\nYou will find your soulmate in your CLASS !\n";
    }

    else if((dd >= 21 && dm == 6) || (dd <= 22 && dm == 7))
    {
        cout<<"\nYou will find your soulmate in your COLLEGE !\n";
    }

    else if((dd >= 23 && dm == 7) || (dd <= 22 && dm == 8))
    {
        cout<<"\nYou will find your soulmate in JUNGLE !\n";
    }

    else if((dd >= 23 && dm == 8) || (dd <= 22 && dm == 9))
    {
        cout<<"\nYou know your soulmate since your SCHOOL TIME !\n";
    }

    else if((dd >= 23 && dm == 9) || (dd <= 22 && dm == 10))
    {
        cout<<"\nYour soulmate DOESN'T EXIST , DON'T TRY!\n";
    }

    else if((dd >= 23 && dm == 10) || (dd <= 21 && dm == 11))
    {
        cout<<"\nYou will find your soulmate on a HOLIDAY TRIP !\n";
    }

    else if((dd >= 22 && dm == 11) || (dd <= 21 && dm == 12))
    {
        cout<<"\nYou will find your soulmate at the AGE OF 60 !\n";
    }

    else if((dd >= 22 && dm == 12) || (dd <= 19 && dm == 1))
    {
        cout<<"\nYour soulmate is ON THE WAY to you !\n";
    }

    else if((dd >= 20 && dm == 1) || (dd <= 18 && dm == 2))
    {
        cout<<"\nYou will find your soulmate AFTER MARRIAGE !\n";
    }

    else if((dd >= 19 && dm == 2) || (dd <= 20 && dm == 3))
    {
        cout<<"\nYou will find your soulmate near HANDPUMP !\n";
    }
    
}

int love_compatibility(int dd, int dm, int dy)
{
    
    if ((dd >= 21 && dm == 3) || (dd <= 19 && dm == 4))
    {
        cout<<"\nYour love life will be like a strawberry. Sweet and tasty.\n";
    }

    else if((dd >= 20 && dm == 4) || (dd <= 20 && dm == 5))
    {
        cout<<"\nLove life word does't exist in your way!\n";
    }

    else if((dd >= 21 && dm == 5) || (dd <= 20 && dm == 6))
    {
         cout<<"\nDon't get married otherwise you will be trapped.\n";
    }

    else if((dd >= 21 && dm == 6) || (dd <= 22 && dm == 7))
    {
        cout<<"\nYour love life will be like a done. Bitter Gourd \n";
    }

    else if((dd >= 23 && dm == 7) || (dd <= 22 && dm == 8))
    {
        cout<<"\nDon't try to be smart in front of your partner. Otherwise all set.\n";
    }

    else if((dd >= 23 && dm == 8) || (dd <= 22 && dm == 9))
    {
        cout<<"\nYour love life will be like a venilla chocolate.\n";
    }

    else if((dd >= 23 && dm == 9) || (dd <= 22 && dm == 10))
    {
        cout<<"\nYour love life will be so interesting and adventureous.\n";
    }

    else if((dd >= 23 && dm == 10) || (dd <= 21 && dm == 11))
    {
        cout<<"\nYour love life will be like a snake and ladder game.Be aware!\n";
    }

    else if((dd >= 22 && dm == 11) || (dd <= 21 && dm == 12))
    {
        cout<<"\nYour love life will be like so tragedic. All the best.\n";
    }

    else if((dd >= 22 && dm == 12) || (dd <= 19 && dm == 1))
    {
        cout<<"\nYour love life will be like a sweet cone. Enjoy your each and every moment.\n";
    }

    else if((dd >= 20 && dm == 1) || (dd <= 18 && dm == 2))
    {
        cout<<"\nYour love life will be like a kajjukatli ! Enjoy and keep your partner happy.\n" ;
    }

    else if((dd >= 19 && dm == 2) || (dd <= 20 && dm == 3))
    {
        cout<<"\nYour love life will be like a jalebi. Crispy and fudge.\n";
    }
    
}