#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <fstream>
#include "Epilogue.h"
#include "CharacterCreator.h"

using namespace std;
int choice;

void divider()
{
    system("pause");
    system("cls");
}
int main() {

    string name;


    Epilogue end;
    CharacterCreator player;

    stack<int> EntitiesEncounter;
    queue<string> StoryQueue;

    string line;
    //for text dialogue
    ifstream myfile("Story.txt");
    if (myfile.is_open()) {
        while (getline(myfile, line)) {
            StoryQueue.push(line);
        }
        myfile.close();
    }
    //incase the txt file fails to load or is not loaded
    else cout << "Unable to open file";

    //start
    cout << "Welcome User to this adventure.Hope you have popcorn lined up,\n""Not because this is going to be long but because you need something to eat man, C'mon stay healthy.\n";
    player.enterName(name);
    cin >> name;
    divider();
    player.genderSelected(choice);
    cin >> choice;
    cout << "You are a " << player.gender;
    divider();
    //The character speaking in these lines is who I call the admiral
    cout << "Welcome back, hmm let's see here You're name is? " << name << "\n Huh interesting name, alright well to catch you up as fast as I can.\n You've been in a coma for what I can tell is 5 year's, maybe longer, I can't be sure.\n But the world has gone to hell, War has broken out and monsters that belong in a mythology book started to pop up in high number's, This isn't something light, Millions of people are at risk.  " << endl;
    divider();

    cout << " However what this file says is that you are an adventurer of high merit, we could use someone like you to help us, heck maybe you are our key for salvation.\n But I won't lie to you this will not be easy. So I offer two choices." << endl;
    divider();

    cout << " The two choice's I give you are.\nFight for us, we'll give you the best equipment we have to help us fight this invasion and you'll go down as a hero or a man who came close to being one.\n Or you leave out that door and live out Your day's but live with the fact you could've done something but chose not too.\n Now Pick";
    divider();

    cout << StoryQueue.front();
    cout << "\n1.Cancel the Apocalypse   \t 2. Leave out the door a free man\n";
    cout << "Answer now: ";
    cin >> choice;
    if (choice == 1)
    {
        cout << "Good choice Now, come on let's go we have work to do" << endl;
    }
    if (choice == 2)
    {
        cout << "Sorry to hear that but it's you're choice I can't force you, have a nice life" << endl;
        cout << " 'As the Admiral leaves the room, you feel an overwhelming feeling of regret and shame but you stand by you're choice as you return to you're house and live out the rest of you're days wishing you've done something as the masses cheer on the hero's who won the war.' " << endl;
        end.Badending();
    }
    cout << " ' You equip a brand new set of armour and weapon's, and you are currently getting briefed by the Adrimal for what he describes' 'a mission to end this war once and for all'' " << endl;
    cout << " listen up" << name << "This is the Spire which emerged a few month's before you awoke, we've noticed a huge amount of Monster's and energy strangly." << endl;
    cout << "You're objective is to investigate what is going on in the Spire and elimnate it, for what we know the estimated that you will arrive at the Spire, a huge amount of monster's are going to gather up there, for what reason? No idea, but it is essential that we destroy this Spire no matter what " << endl;
    cout << "Be advise you will recieve no support beside's resupplies and escape if possible,be aware you have a been equipped with a two bomb's both nuclear now you can place both outside and inside for maximum damage, Good luck" << name << "we are counting on you" << endl;
    divider();

    cout << "You make your way to the spire via the Jeep and make you're way southeast of the outpost. The drive would take 2 day's to travel so in the meantime you 3 options.";
    divider();
    cout << StoryQueue.front();
    cout << "\n1.Try Origami \n 2.Listen to some tunes\n 3.Sleep";
    cout << "Answer now: ";
    cin >> choice;
    if (choice == 1)
    {
        cout << "You try making an origami bird but the Jeep hit a rabbthole and the origami got ruined and then you cried." << endl;
    }
    if (choice == 2)
    {
        cout << "You put on shook me all night long by ACDC and sing along to it to make the drive go by faster." << endl;
    }
    if (choice == 3)
    {
        cout << "You close you're eyes as you reminisce about the time you lost while in a coma and proceed to rest" << endl;
    }
    divider();

    cout << "After a long night's rest, you awaken 20km's away from the spire and you proceed for 12 more km's and then proceed the rest of the way on foot";
    cout << "You then reach the spire, you notice the immense size of it but you feel an immense pressure when you go near it ";
    cout << "You have the choice to place one of the bombs you have right beside the entrance, or open the gate arm both and lob both of them and run. ";
    cout << "You make your way to the spire via the Jeep and make you're way southeast of the outpost. The drive would take 2 day's to travel so in the meantime you 3 options.";
    divider();
    cout << StoryQueue.front();
    cout << "\n1.Plant the first bomb outside the entrance \n 2.deploy both Bombs in the entrance ";
    cout << "Answer now: ";
    cin >> choice;
    if (choice == 1)
    {
        cout << "You've planted the bomb outside the entrance and cover it up so it won't be discovered";
    }
    if (choice == 2)
    {
        cout << "You've decided to open the entrance and arm both bomb's and then throw both of them as you run as fast as possible away from the blast radius and barely make it out.\n You destroy the spire but suffer massive radiation damage but you feel proud about it.";
        end.Goodending();
    }
    cout << "After you prep the bomb you proceed to head inside while readying you're weapon's and proceed to curve a way towards the center and through a horde of monster's ";
    cout << "You encounter a big creature, you then proceed to use a grapple hook to away from the creature and continue sprinting toward's the center of the spire.";
    divider();
    
    cout << "You finally reach the center but you encounter a armoured humanoid monster blocking the point where the bomb should be place. you have to fight him";
    divider();

    cout << StoryQueue.front();
    cout << "\n1.Melee combat \n 2.Open fire on it while running and gunning ";
    cout << "Answer now: ";
    cin >> choice;
    if (choice == 1)
    {
        cout << "You pull out two kukri and start using you're grappling hook to gain an advantage over the humanoid monster to hit a few blows on him, you then get hit by his weapon which is a hammer but you managed to recover and continue doing maneuvers to gain a slight advantage. ";
    }
    if (choice == 2)
    {
        cout << "You open fire with you're gun, but you don't seem to even make a dent but just seriously annoy and disorient him";
    }
        cout << StoryQueue.front();
        cout << "\n1.Continue Melee combat \n 2.Start using small yield explosives on it";
        cout << "Answer now: ";
        cin >> choice;
        if (choice == 1)
        {
            cout << "You notice crack's between the armour, small cracks but the blade should be able to reach it and do some damage, you then pierce each crack and you can see the monster start to falter slowly. ";
        }
        if (choice == 2)
        {
            cout << "you start using grenades and anything with enough force to damage the monster, you hit him with a few well place shot's, which doe's damage and knocks the monster on his back with visible damage and he start's to get tired";
        }
        cout << StoryQueue.front();
        cout << "\n1.Final melee attack \n 2.Final ranged attack";
        cout << "Answer now: ";
        cin >> choice;
        if (choice == 1)
        {
            cout << "You throw a grenade towards the Monster helmet which creates an opening on the Monster allowing you to finish it off with a well place strike but unfortunatly you get heavily injured during this last strike due to him getting one last hit on you with his weapon. ";
        }
        if (choice == 2)
        {
            cout << "You fire a few more shot's into the Monster but before you can finish him off with a grenade up close, he end's up smacking you across the room, fortunatly you finish the Monster off but you end up heavily injured";
        }
        cout << "You crawl towards the center after the battle, you can hear the monsters outside try to enter in the room you try to radio for extraction but the signal barely get's through but you learn that escape is possible but very very risky so you are now left with two option's.";
        divider();

        cout << StoryQueue.front();
        cout << "\n1.Deploy the final bomb and detonate both bomb's \n 2.Deploy the bomb and reach the rescue crew";
        cout << "Answer now: ";
        cin >> choice;
        if (choice == 1)
        {
            cout << "You look at the bomb and then the monsters breaching in, and after reviewing all you're options and going through you're life, you decide to make the ultimate sacrifice to ensure the mission is done and detonate both bomb's taking you and every monster in the spire along with the energy signature. Ensuring the survival of everyone back home and being proud of the decision you made. ";
            cout << "Mission Complete but at a heavy cost, may we honour" << name << "sacrifice so that we may move foward and ensure our future.";
            end.Tragicending();
        }
        if (choice == 2)
        {
            cout << "You manage to arm the bomb and set timer's for both bomb's and you make it to the extraction team and escape just as the bomb's activate, destroying the monster's and ensuring everyone survival, and no one died on the mission, as you return home to a mass of grateful people";
            end.Goodending();
        }
}
