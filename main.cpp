/* This is the work of Zarviel Vincent D. Umanos and Senon Macatangay for the group project.
This is a simple text rpg game that lets you decide the future of your character through simple choices.
This program also added -std=c++ 11 in order to make functions work(THIS OPTION WAS IN THE COMPILER OPTIONS) */
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include "MMSystem.h"
#include <chrono>
#include <thread>
#include <ctime>
#include <cmath>
#include <stdio.h>

using namespace std;

// This is for the text animation
void ani(char a[100])
    {
        int i; double k;
        for(int i=0;a[i]!='\0';i++)
        {
            for(int k=0;k<30000000;k++);
            cout<<a[i];
        }
    }

char answer;

void death()
{
    ani("You died.");
    cout << endl;
    system ("pause");
    }

void world12()
{
    ani ("Do you go back to your floor or go down the staircase?");
    cout << endl;
    system ("pause");
    cout<<endl;
    ani ("A. Go back to my apartment where I would be safe");
    cout<<endl;
    ani ("B. Go down the staircase and escape this place before getting trapped");
    cout<<endl;
    cin>>answer;
    system("CLS");
    switch (answer)
          {
          case 'A':
            ani("You went back to your apartment there you stayed and locked your door");
            cout<<endl;
            system("pause");
            system("CLS");
            ani("Days passed by and only the sound of footsteps and grunting were heard outside of your door");
            cout<<endl;
            system("pause");
            system("CLS");
            ani("Hungry and alone...");
            cout<<endl;
            system("pause");
            system("CLS");
            ani("Though, in your mind you know it's the only choice that you could have taken");
            cout<<endl;
            system("pause");
            system("CLS");
            ani("You were already trapped inside your building");
            cout<<endl;
            system("pause");
            system("CLS");
            ani("This continued for another day...");
            cout<<endl;
            system("pause");
            system("CLS");
            ani("Staying quiet...");
            cout<<endl;
            system("pause");
            system("CLS");
            ani("Until everything was over...");
            cout<<endl;
            system("pause");
            system("CLS");
            ani("...");
            cout<<endl;
            system("pause");
            system("CLS");
            death();
            break;
          case 'B':
            ani ("You made your way down the staircase only to find several blood marks the more you go down");
            cout<<endl;
            system("pause");
            system("CLS");
            ani ("There you reached the door down which was opened");
            cout<<endl;
            system("pause");
            system("CLS");
            ani ("You slowly approached it");
            cout<<endl;
            system("pause");
            system("CLS");
            ani ("Reaching the floor you took a peek outside and there you saw several zombies close by");
            cout<<endl;
            system("pause");
            system("CLS");
            ani ("You slowly backed out but tripped over a broken baseball bat");
            cout<<endl;
            system("pause");
            system("CLS");
            ani ("You made a loud thump and you immediately looked at the door");
            cout<<endl;
            system("pause");
            system("CLS");
            ani ("The zombies started running, you hear their footsteps rushing towards the door");
            cout<<endl;
            system("pause");
            system("CLS");
            ani ("You ran to try and close the door");
            cout<<endl;
            system("pause");
            system("CLS");
            ani ("You pulled the door only to find out its stuck");
            cout<<endl;
            system("pause");
            system("CLS");
            ani ("The horde of zombies rushed inside");
            cout<<endl;
            system("pause");
            system("CLS");
            death();
          }

}

void world11()
{
     ani ("You got to the door and opened it");
        cout << endl;
        system ("pause");
        system ("CLS");
         ani ("There you were met with a hallway and several blood trails everywhere");
        cout << endl;
        system ("pause");
        system ("CLS");
          ani ("Do you wish to continue?");
        cout << endl;
        system ("pause");
        system ("CLS");
        cout<<endl;
        ani ("A. Yes");
        cout<<endl;
        ani ("B. No");
        cout<<endl;
        cin>>answer;
        system("CLS");
          switch (answer)
          {
          case 'A':
            ani("You walked in the hallway, all the doors seemed to be open");
            cout<<endl;
            system("pause");
            system("CLS");
            ani("Blood were splattered everywhere.");
            cout<<endl;
            system("pause");
            system("CLS");
            ani("While walking several footsteps were heard in all directions");
            cout<<endl;
            system("pause");
            system("CLS");
            ani("You panic and silently run into a room and inside its comfort room to hide");
            cout<<endl;
            system("pause");
            system("CLS");
            ani("There you closed the door and locked it");
            cout<<endl;
            system("pause");
            system("CLS");
            ani("The footsteps stopped in front of the comfort room door");
            cout<<endl;
            system("pause");
            system("CLS");
            ani("Whatever was outside started banging on your door");
            cout<<endl;
            system("pause");
            system("CLS");
            ani("The door didn't get to hold the force of the creatures and the door opened up");
            cout<<endl;
            system("pause");
            system("CLS");
            death();
            break;
          case 'B':
            ani ("You went back in the Fire exit");
            cout<<endl;
            system("pause");
            system("CLS");
             ani ("Now only left with a choice of either staying on your floor or going down");
            cout<<endl;
            system("pause");
            system("CLS");
            break;
          }
}

void world10()
{
     ani ("There you were met with a stairway, do you go up or down?");
        cout << endl;
        system ("pause");
        cout<<endl;
        ani ("A. Up");
        cout<<endl;
        ani ("B. Down");
        cout<<endl;
        cin>>answer;
        system("CLS");
          switch (answer)
          {
          case 'A':
            ani("You slowly walked up to the last floor");
            cout<<endl;
            system("pause");
            system("CLS");
            world11();
            break;
          case 'B':
            ani ("You made your way down the staircase only to find several blood marks the more you go down");
            cout<<endl;
            system("pause");
            system("CLS");
            ani ("There you reached the door down which was opened");
            cout<<endl;
            system("pause");
            system("CLS");
            ani ("You slowly approached it");
            cout<<endl;
            system("pause");
            system("CLS");
            ani ("Reaching the floor you took a peek outside and there you saw several zombies close by");
            cout<<endl;
            system("pause");
            system("CLS");
            ani ("You slowly backed out but tripped over a broken baseball bat");
            cout<<endl;
            system("pause");
            system("CLS");
            ani ("You made a loud thump and you immediately looked at the door");
            cout<<endl;
            system("pause");
            system("CLS");
            ani ("The zombies started running, you hear their footsteps rushing towards the door");
            cout<<endl;
            system("pause");
            system("CLS");
            ani ("You ran to try and close the door");
            cout<<endl;
            system("pause");
            system("CLS");
            ani ("You pulled the door only to find out its stuck");
            cout<<endl;
            system("pause");
            system("CLS");
            ani ("The horde of zombies rushed inside");
            cout<<endl;
            system("pause");
            system("CLS");
            death();
            break;
          }
}


void world9()
{
     ani ("Do you go up or down?");
        cout << endl;
        system ("pause");
        cout<<endl;
        ani ("A. Up, scavenge more areas for food");
        cout<<endl;
        ani ("B. Down, we must leave this place at once before getting trapped!");
        cout<<endl;
        cin>>answer;
        system("CLS");
          switch (answer)
          {
          case 'A':
            ani("You chose to go up");
            cout<<endl;
            system("pause");
            system("CLS");
            ani("You pressed the 6th floor which was the last floor");
            cout<<endl;
            system("pause");
            system("CLS");
            ani("The elevator ascended from the 5th floor making its way to the last floor");
            cout<<endl;
            system("pause");
            system("CLS");
            ani("The elevator reached the top floor and it made a sound as it stopped");
            cout<<endl;
            system("pause");
            system("CLS");
            ani("The elevator door opened and you heard a bunch of footsteps rushing towards you");
            cout<<endl;
            system("pause");
            system("CLS");
            ani("The elevator door opened and there you were met with several zombies rushing at you");
            cout<<endl;
            system("pause");
            system("CLS");
             ani("You pressed the close button as fast as you could");
            cout<<endl;
            system("pause");
            system("CLS");
             ani("The elevator doors started closing slowly but the zombies were already about to get to you");
            cout<<endl;
            system("pause");
            system("CLS");
             ani("You panicked and grabbed your Katana");
            cout<<endl;
            system("pause");
            system("CLS");
             ani("The elevator door was then stopped by a zombie making its way to you");
            cout<<endl;
            system("pause");
            system("CLS");
             ani("You continue to fight the horde of zombies");
            cout<<endl;
            system("pause");
            system("CLS");
             ani("But you got outnumbered quickly and they started to get on top of you");
            cout<<endl;
            system("pause");
            system("CLS");
            death();
            break;
          case 'B':
            ani ("You chose to go down");
            cout<<endl;
            system("pause");
            system("CLS");
             ani("The made its way down.");
            cout<<endl;
            system("pause");
            system("CLS");
             ani("You anxiously watch the number ticking down as the elevator continues to bring discomfort to you with the blood marks");
            cout<<endl;
            system("pause");
            system("CLS");
             ani("You finally reached the bottom");
            cout<<endl;
            system("pause");
            system("CLS");
             ani("The elevator door opened and there you were met with several zombies rushing at you");
            cout<<endl;
            system("pause");
            system("CLS");
             ani("You pressed the close button as fast as you could");
            cout<<endl;
            system("pause");
            system("CLS");
             ani("The elevator doors started closing slowly but the zombies were already about to get to you");
            cout<<endl;
            system("pause");
            system("CLS");
             ani("You panicked and grabbed your Katana");
            cout<<endl;
            system("pause");
            system("CLS");
             ani("The elevator door was then stopped by a zombie making its way to you");
            cout<<endl;
            system("pause");
            system("CLS");
             ani("You continue to fight the horde of zombies");
            cout<<endl;
            system("pause");
            system("CLS");
             ani("But you got outnumbered quickly and they started to get on top of you");
            cout<<endl;
            system("pause");
            system("CLS");
            death();
            break;
          }
}

void world8()
{
     ani ("Which do you take?");
        cout << endl;
        system ("pause");
        cout<<endl;
        ani ("A. Elevator, to save energy and not tire out");
        cout<<endl;
        ani ("B. Fire Exit, safety is key");
        cout<<endl;
        cin>>answer;
        system("CLS");
          switch (answer)
          {
          case 'A':
            ani("You went inside the elevator");
            cout<<endl;
            system("pause");
            system("CLS");
            world9();
            break;
          case 'B':
            ani ("You went to the Fire exit");
            cout<<endl;
            system("pause");
            system("CLS");
            world10();
            break;
          }
}

void world7()
{
     ani ("The inside seemed clean, do you wish to continue?");
        cout << endl;
        system ("pause");
        cout<<endl;
        ani ("A. Yes");
        cout<<endl;
        ani ("B. No");
        cout<<endl;
        cin>>answer;
        system("CLS");
          switch (answer)
          {
          case 'A':
            ani("You scavenged the room and found food, your hunger made you eat the food there and your hunger was stopped");
            cout<<endl;
            system("pause");
            system("CLS");
            break;
          case 'B':
            ani ("You went back to the hallway");
            cout<<endl;
            system("pause");
            system("CLS");
            ani ("You continue through the hallway and was met by the fire door and the elevator");
            cout<<endl;
            system("pause");
            system("CLS");
            world8();
            break;
          }
}

void world6()
{
     ani ("Do you plan to scavenge this room?");
        cout << endl;
        system ("pause");
        cout<<endl;
        ani ("A. Yes");
        cout<<endl;
        ani ("B. No");
        cout<<endl;
        cin>>answer;
        system("CLS");
          switch (answer)
          {
          case 'A':
            ani("You open the door");
            cout<<endl;
            system("pause");
            system("CLS");
            world7();
            break;
          case 'B':
            ani ("You continue through the hallway and was met by the fire door and the elevator");
            cout<<endl;
            system("pause");
            system("CLS");
            world8();
            break;
          }
}

void world5()
    {
        ani ("Do you plan to take them?");
        cout << endl;
        system ("pause");
        cout<<endl;
        ani ("A. Yes, I should use all the resources I can find");
        cout<<endl;
        ani ("B. No, leave it be.");
        cout<<endl;
        cin>>answer;
        system("CLS");
          switch (answer)
    {
        case 'A':
        ani("You walked your way to the medicine supply and small ration of food");
        cout<<endl;
        system("pause");
        system("CLS");
        ani("You carefully pick it up and put it slowly in your backpack");
        cout<<endl;
        system("pause");
        system("CLS");
        ani("You successfully grabbed everything!");
        cout<<endl;
        system("pause");
        system("CLS");
        ani("+1 Medicine Supply");
        cout<<endl;
        system("pause");
        system("CLS");
         ani("+1 Food");
        cout<<endl;
        system("pause");
        system("CLS");
        ani("You turn your back and continue to walk out to the door");
        cout<<endl;
        system("pause");
        system("CLS");
        ani("Before getting to the door you notice that the dead man on the floor was gone");
        cout<<endl;
        system("pause");
        system("CLS");
        ani("You turn your back only to find the man there.");
        cout<<endl;
        system("pause");
        system("CLS");
        ani("He grabs you and started biting you on your neck");
        cout<<endl;
        system("pause");
        system("CLS");
         ani("You fall down on the ground and this creature stares you down as your surroundings slowly faded.");
        cout<<endl;
        system("pause");
        system("CLS");
        death();
        break;
        case 'B':
         ani("You turn your back and move back our of the janitor room");
        cout<<endl;
        system("pause");
        system("CLS");
         ani("Everything seemed quiet.");
        cout<<endl;
        system("pause");
        system("CLS");
        ani("Suddenly, the corpse grabbed your foot");
        cout<<endl;
        system("pause");
        system("CLS");
         ani("You fell down on the ground shouting as the dead man crawls on top of you");
        cout<<endl;
        system("pause");
        system("CLS");
        ani("The dead man started biting you on your neck");
        cout<<endl;
        system("pause");
        system("CLS");
         ani("You try pushing the man away but you grew more weak as you form a pool of blood around your body");
        cout<<endl;
        system("pause");
        system("CLS");
        death();
        break;
    }
    }


void world4()
    {
        ani ("Now at the hallway. You see a blood trail continuing to go to your right and on your left is a clean path. Where do you go?");
        cout << endl;
        system ("pause");
        cout<<endl;
        ani ("A. Check on what the blood trail leads to");
        cout<<endl;
        ani ("B. You chose a safer path and avoided the mystery that the blood trail could've led to");
        cout<<endl;
        cin>>answer;
        system("CLS");
          switch (answer)
    {
        case 'A':
        ani("The blood trail led to an open janitor's room");
        cout<<endl;
        system("pause");
        system("CLS");
        ani("You continued to go inside only to find a dead corpse on the floor");
        cout<<endl;
        system("pause");
        system("CLS");
        ani("The blood seemed to come from the man on the floor, who was trying to crawl to this room");
        cout<<endl;
        system("pause");
        system("CLS");
        ani("At the end of the room you see a couple of medical supplies and a small ration of food");
        cout<<endl;
        system("pause");
        system("CLS");
        world5();
        break;
        case 'B':
         ani("You chose to avoid the blood trail and went on the safer path");
        cout<<endl;
        system("pause");
        system("CLS");
        ani("There you find a door that seemed to be clean of any scratches and blood marks.");
        cout<<endl;
        system("pause");
        system("CLS");
        break;
    }
    }


void world3()
    {
        ani ("Your stomach started to make sounds. You're hungry. What do you do now?");
        cout << endl;
        system ("pause");
        cout<<endl;
        ani ("A. You check on your neighbors");
        cout<<endl;
        ani ("B. You try to call for help on your phone");
        cout<<endl;
        cin>>answer;
        system("CLS");
        switch (answer)
    {
        case 'A':
        ani("You went to the hallway to check on your neighbors");
        cout<<endl;
        system("pause");
        system("CLS");
        world4();
        break;
        case 'B':
        ani("You check on your phone but it's already out of battery.");
        cout<<endl;
        system("pause");
        system("CLS");
        ani("You then try to check your land line but there was no dial tone");
        cout<<endl;
        system("pause");
        system("CLS");
        ani("You then begin to panic and shout asking for help");
        cout<<endl;
        system("pause");
        system("CLS");
         ani("A loud thud startled you and it seemed to come from the door of your apartment");
        cout<<endl;
        system("pause");
        system("CLS");
        ani("You ran to your door only to find it open and a blood trail that seemed to come from outside");
        cout<<endl;
        system("pause");
        system("CLS");
        ani("You turn your back only to find a man there.");
        cout<<endl;
        system("pause");
        system("CLS");
        ani("He grabs you and started biting you on your neck");
        cout<<endl;
        system("pause");
        system("CLS");
         ani("You fall down on the ground and this creature stares you down as your surroundings slowly faded.");
        cout<<endl;
        system("pause");
        system("CLS");
        death();
        break;
    }
    }
void world1 ()
    {
        ani ("Now you stand with the katana in your hand and the food in your backpack, what do you plan on doing next?");
        cout << endl;
        system ("pause");
        cout<<endl;
        ani ("A. You camp out for the week until your food runs out");
        cout<<endl;
        ani ("B. You check on your neighbors");
        cout<<endl;
        cin>>answer;
        system("CLS");
          switch (answer)
    {
        case 'A':
        ani("You chose to camp out for a week, spending the rest of your days thinking on what's happening until your food finally runs out.");
        cout<<endl;
        system("pause");
        system("CLS");
        ani("-1 Food");
        cout<<endl;
        system("pause");
        system("CLS");
        world3();
        break;
        case 'B':
        ani("You went to the hallway to try and check on your neighbors.");
        cout<<endl;
        system("pause");
        system("CLS");
        world4();
        break;
    }


    }


void world2 ()
    {
        ani("The things you saw only made you confused and more anxious of what's happening. What do you do?");
        cout << endl;
        system ("pause");
        cout<<endl;
        ani ("A. You scavenge your surroundings hoping to find something.");
        cout<<endl;
        ani ("B. You turn the television on to find more information");
        cout<<endl;
        cin>>answer;
        system("CLS");
           switch (answer)
    {
        case 'A':
        ani("You found a weapon and have stacked all the food you can find.");
         cout<<endl;
        system("pause");
        system("CLS");
        ani("+1 Katana");
        cout<<endl;
        system("pause");
        system("CLS");
        ani("+1 Food");
        cout<<endl;
        system("pause");
        system("CLS");
        world1();
        break;
        case 'B':
        ani("You turned the television on.");
        cout<<endl;
        system("pause");
        system("CLS");
        ani("The television blasted a static noise as you try to find a channel but all seemed to be down");
        cout<<endl;
        system("pause");
        system("CLS");
        ani("A loud thud startled you and it seemed to come from the door of your apartment");
        cout<<endl;
        system("pause");
        system("CLS");
        ani("You ran to your door only to find it open and a blood trail that seemed to come from outside");
        cout<<endl;
        system("pause");
        system("CLS");
        ani("You turn your back only to find a man there.");
        cout<<endl;
        system("pause");
        system("CLS");
        ani("He grabs you and started biting you on your neck");
        cout<<endl;
        system("pause");
        system("CLS");
         ani("You fall down on the ground and this creature stares you down as your surroundings slowly faded.");
        cout<<endl;
        system("pause");
        system("CLS");
        death();
        break;
    }
    }

int main()
{
    // This is what plays the background music for the game
    PlaySound(TEXT("SoundRPG.wav"),NULL,SND_FILENAME| SND_LOOP | SND_ASYNC);
    // This is for the text color
    system("color a");

    ani("Do you wish to enter the game?");
    cout<<endl;
    // This pauses the console to give the user time to read the text lines
    system ("pause");
    system("CLS");
    ani ("The story of the game depends on the choices you make as it will affect your character deeply.");
    cout<<endl;
    ani ("Best of luck.");
    cout<<endl;
    system("pause");
    system("CLS");
    ani ("You are stranded in a hotel room. You're on the 5th floor and for what it seems like an apocalypse occurring.");
    cout<<endl;
    system ("pause");
    system("CLS");
    ani ("You have nothing with you to defend yourself as well as any food or water to help you survive. What do you do?");
    cout<<endl;
    system ("pause");
    cout<<endl;
    ani ("A. You scavenge your surroundings hoping to find something.");
    cout<<endl;
    ani ("B. You look at the window outside to see what's really happening");
    cout<<endl;
    cout<<endl;
    ani("Type the letter of your answer:");
    cout<<endl;
    cin>>answer;
    system("CLS");

    switch (answer)
    {
        case 'A':
        ani("You found a weapon and have stacked all the food you can find.");
        cout<<endl;
        system("pause");
        system("CLS");
        ani("+1 Katana");
        cout<<endl;
        system("pause");
        system("CLS");
        ani("+1 Food");
        cout<<endl;
        system("pause");
        system("CLS");
        world1();
        break;
        case 'B':
        ani("You look outside your window only to see your surroundings on fire and people running and chasing after one another.");
        cout<<endl;
        system("pause");
        system("CLS");
         world2();
        break;
    }

    system("pause");
    return 0;
}
