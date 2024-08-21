
#include <stdio.h>
#include <stdlib.h>

int main() {
    char quotes[21][40] = {
        "Life is Roblox.",
        "God did.",
        "Did the Drake vocals come in yet?",
        "Another one.",
        "They dont want you to...",
        "Lion!",
        "Support me.",
        "I have so much jewelry.",
        "Tell them to bring out the whole ocean.",
        "Call me asparagus.",
        "Not everybody can talk cloth.",
        "Budget Approved!",
        "I called her Chandalier.",
        "Tell them to bring the yacht out.",
        "Lets go golfing.",
        "And perhaps what is this?",
        "Together were stronger.",
        "Have you ever played Rugby?",
        "Dont be a fool, get a pool.",
        "Call me Tangerine",
        "CAPUCINO!"
    };

    printf("%s\n", quotes[rand() % sizeof(quotes) / sizeof(quotes[0])]);
}
