#include "stdlib.h"

int joke(void);

const char* puns[] = {
        "Why can't a bicycle stand up by itself? It's two tired!",
        "What do you call a bear with no teeth? A gummy bear!",
        "Why do cows wear bells? Their horns don't work!",
        "What do you call a fake noodle? An impasta!",
        "Why did the tomato turn red? Because it saw the sal-ad dressing!",
        "Why don't scientists trust atoms? Because they make up everything!",
        "Why did the scarecrow win an award? Because he was outstanding in his field!",
        "Why can't a nose be 12 inches long? Because then it would be a foot!",
        "Why did the kid throw his clock out the window? Because he wanted to see time fly!",
        "What do you call a boomerang that doesn't come back? A stick!",
        "Why did the math book look sad? Because it had too many problems!",
        "Why did the cookie go to the doctor? Because he was feeling crumby!",
        "Why did the chicken go to the seance? To get to the other side!",
        "Io io io, your mom is so fat, she has her own gravitational field!",
        "I tried to catch some fog earlier. I mist.",
        "I'm reading a book about anti-gravity. It's impossible to put down!",
        "I wondered why the baseball was getting bigger. Then it hit me.",
        "Knock, knock. Who's there? Interrupting cow. Interrupting cow wh-MOOOO!",
        "Skeletons can't play church music, obviously. They got no organs.",
        "Ultimately, Asgore ended up making Papyrus a nice hedge skullpture.",
        "A skeletal ape would be called a babone.",
        "Some of these puns aren't that hilarious, but come on, throw us a bone.",
        "A French Sans would greet you with the ol' bone-jour.",
        "I went to a party, and mettaton of new people.",
        "Sans has a reputation for being lazy. He's almost bone idle.",
        "The skeleton wanted a friend to talk to, he was feeling bonely.",
        "Looks like you had a rough day. But it's going tibia okay.",
        "I'm not a big fan of elevators, but I'll make an exception for you.",
        "A list of Sans' puns would be sans-tastic.",
        "She was Asgoregeous as the first day I'd seen her.",
        "But first, let me take a Skelfie",
        "TEM AN JERRY s TORITOS",
        "Your spaghetti is impastable to eat",
        "I'm not lion, these puns are unbearable."
};

int joke(void) {
    int num_puns = sizeof(puns) / sizeof(puns[0]);
    srand(time(NULL));
    int random_index = rand() % num_puns;
    printf("%s\n", puns[random_index]);
    return 0;
}

