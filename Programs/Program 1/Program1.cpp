/*
	Title:  	Program 1
	Author:		Kamden Edens
	Date:		2/14/2022	
	Purpose:	This program is written for asking the user a sample of
                questions and then posting what type of personality they
                have.  
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    //Defining
    int introVert = 0, extroVert = 0, posiPerson = 0, negPerson = 0, sillyPerson = 0, seriousPerson = 0, spontaneousPerson = 0;
    int plannerPerson = 0; 
    char a, b, c, y, n;
    char answer, answer1, answer2, answer3, answer4, answer5, answer6, answer7, answer8, answer9, answer10, answer11, answer12;

    //User interface and questions
    do {
        cout << "-------------------------------------------------------" << endl;
        cout << setw(34) << "PERSONALITY TEST" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "\nPlease answer the following twelve questions to find " << endl;
        cout << "out your personality traits." << endl;
        // Resets variables for loop
        introVert = 0, extroVert = 0, posiPerson = 0, negPerson = 0, sillyPerson = 0, seriousPerson = 0, spontaneousPerson = 0;
        plannerPerson = 0;

        // question 1
        cout << "\n\nIf you were invited to a party with 10 people, " << endl;
        cout << "would you go? " << endl;
        cout << "\n     a. Absolutely!" << endl;
        cout << "     b. Depends." << endl;
        cout << "     c. Never." << endl;
        do {
            cin >> answer1;
            if (answer1 == 'a') {
                extroVert = extroVert + 1;
            }
            else if (answer1 == 'b') {
                introVert = introVert + 1;
                extroVert = extroVert + 1;
            }
            else if (answer1 == 'c') {
                introVert = introVert + 1;
            }
            else {
                cout << "Invalid answer. Try again with: (a, b, or c)" << endl;
            }
        } while (answer1 != 'a' && answer1 != 'b' && answer1 != 'c');
        // question 2
        cout << "\n\nWhen you get out of school, do you: " << endl;
        cout << "\n     a. Go hang out with friends?" << endl;
        cout << "     b. Talk a for a moment then go home?" << endl;
        cout << "     c. Or go straight home?" << endl;
        do {
            cin >> answer2;
            if (answer2 == 'a') {
                extroVert = extroVert + 1;
            }
            else if (answer2 == 'b') {
                introVert = introVert + 1;
                extroVert = extroVert + 1;
            }
            else if (answer2 == 'c') {
                introVert = introVert + 1;
            }
            else {
            cout << "Invalid answer. Try again with: (a, b, or c)" << endl;
            }
        } while (answer2 != 'a' && answer2 != 'b' && answer2 != 'c');
        // question 3
        cout << "\n\nWould you speak to a crowd of 50 people?" << endl;
        cout << "\n     a. Sure!" << endl;
        cout << "     b. Only if it was family." << endl;
        cout << "     c. Are you crazy?" << endl;
        do {
            cin >> answer3;
            if (answer3 == 'a') {
                extroVert = extroVert + 1;
            }
            else if (answer3 == 'b') {
                introVert = introVert + 1;
                extroVert = extroVert + 1;
            }
            else if (answer3 == 'c') {
                introVert = introVert + 1;
            }
            else {
            cout << "Invalid answer. Try again with: (a, b, or c)" << endl;
            }
        } while (answer3 != 'a' && answer3 != 'b' && answer3 != 'c');
        // question 4
        cout << "\n\nIf you recieved a bad grade on a test,  " << endl;
        cout << "would you? " << endl;
        cout << "\n     a. Think about how you can fix it next time" << endl;
        cout << "     b. Forget about it" << endl;
        cout << "     c. Cry lots of tears" << endl;
        do {
            cin >> answer4;
            if (answer4 == 'a') {
                posiPerson = posiPerson + 1;
            }
            else if (answer4 == 'b') {
                posiPerson = posiPerson + 1;
                negPerson = negPerson + 1;
            }
            else if (answer4 == 'c') {
                negPerson = negPerson + 1;
            }
            else {
            cout << "Invalid answer. Try again with: (a, b, or c)" << endl;
            }
        } while (answer4 != 'a' && answer4 != 'b' && answer4 != 'c');
        //question 5
        cout << "\n\nWhat do you think about when you look at " << endl;
        cout << "yourself in the miror? " << endl;
        cout << "\n     a. I look snazzy!" << endl;
        cout << "     b. Ehhh I'm okay." << endl;
        cout << "     c. EWWW I look terrible!" << endl;
        do {
            cin >> answer5;
            if (answer5 == 'a') {
                posiPerson = posiPerson + 1;
            }
            else if (answer5 == 'b') {
                posiPerson = posiPerson + 1;
                negPerson = negPerson + 1;
            }
            else if (answer5 == 'c') {
                negPerson = negPerson + 1;
            }
            else {
            cout << "Invalid answer. Try again with: (a, b, or c)" << endl;
            }
        } while (answer5 != 'a' && answer5 != 'b' && answer5 != 'c');
        // question 6
        cout << "\n\nWhen someone asks you about your day, " << endl;
        cout << "how do you respond? " << endl;
        cout << "\n     a. It's going great!" << endl;
        cout << "     b. Not fantastic but it's pretty good." << endl;
        cout << "     c. I'm so done with today." << endl;
        do {
            cin >> answer6;
            if (answer6 == 'a') {
                posiPerson = posiPerson + 1;
            }
            else if (answer6 == 'b') {
                posiPerson = posiPerson + 1;
                negPerson = negPerson + 1;
            }
            else if (answer6 == 'c') {
                negPerson = negPerson + 1;
            }
            else {
            cout << "Invalid answer. Try again with: (a, b, or c)" << endl;
            }
        } while (answer6 != 'a' && answer6 != 'b' && answer6 != 'c');
        // question 7
        cout << "\n\nHow do you describe the internet?" << endl;
        cout << "\n     a. A place of confusion and terror!" << endl;
        cout << "     b. What I use to talk to my friends." << endl;
        cout << "     c. A media that allows people to communicate to each other." << endl;
        do {
            cin >> answer7;
            if (answer7 == 'a') {
                sillyPerson = sillyPerson + 1;
            }
            else if (answer7 == 'b') {
                sillyPerson = sillyPerson + 1;
                seriousPerson = seriousPerson + 1;
            }
            else if (answer7 == 'c') {
                seriousPerson = seriousPerson + 1;
            }
            else {
            cout << "Invalid answer. Try again with: (a, b, or c)" << endl;
            }
        } while (answer7 != 'a' && answer7 != 'b' && answer7 != 'c');
        // question 8
        cout << "\n\nDo you like telling jokes?" << endl;
        cout << "\n     a. Of course! Who doesn't?" << endl;
        cout << "     b. Sometimes." << endl;
        cout << "     c. No, I'm boring." << endl;
        do {
            cin >> answer8;
            if (answer8 == 'a') {
                sillyPerson = sillyPerson + 1;
            }
            else if (answer8 == 'b') {
                sillyPerson = sillyPerson + 1;
                seriousPerson = seriousPerson + 1;
            }
            else if (answer8 == 'c') {
                seriousPerson = seriousPerson + 1;
            }
            else {
            cout << "Invalid answer. Try again with: (a, b, or c)" << endl;
            }
        } while (answer8 != 'a' && answer8 != 'b' &&  answer8 != 'c');
        // question 9
        cout << "\n\nWhen someone is talking to you, do you " << endl;
        cout << "cut up with them?" << endl;
        cout << "\n     a. Yes, whenever I can!" << endl;
        cout << "     b. Every now and then." << endl;
        cout << "     c. No, I listen intently to them." << endl;
        do {
            cin >> answer9;
            if (answer9 == 'a') {
                sillyPerson = sillyPerson + 1;
            }
            else if (answer9 == 'b') {
                sillyPerson = sillyPerson + 1;
                seriousPerson = seriousPerson + 1;
            }
            else if (answer9 == 'c') {
                seriousPerson = seriousPerson + 1;
            }
            else {
            cout << "Invalid answer. Try again with: (a, b, or c)" << endl;
            }
        } while (answer9 != 'a' && answer9 != 'b' && answer9 != 'c');
        // question 10
        cout << "\n\nDo you like to take random roadtrips?" << endl;
        cout << "\n     a. Uh, Yes!" << endl;
        cout << "     b. I can on somedays." << endl;
        cout << "     c. NOO, who does that?" << endl;
        do {
            cin >> answer10;
            if (answer10 == 'a') {
                spontaneousPerson = spontaneousPerson + 1;
            }
            else if (answer10 == 'b') {
                spontaneousPerson = spontaneousPerson + 1;
                plannerPerson = plannerPerson + 1;
            }
            else if (answer10 == 'c') {
                plannerPerson = plannerPerson + 1;
            }
            else {
            cout << "Invalid answer. Try again with: (a, b, or c)" << endl;
            }
        } while (answer10 != 'a' && answer10 != 'b' && answer10 != 'c');
        // question 11
        cout << "\n\nwhen you wake up in the morning, "<< endl;
        cout << "what's on your mind? " << endl;
        cout << "\n     a. Food!" << endl;
        cout << "     b. I think about some things then get up." << endl;
        cout << "     c. I have my clothes laid out and everything is in order." << endl;
        do {
            cin >> answer11;
            if (answer11 == 'a') {
                spontaneousPerson = spontaneousPerson + 1;
            }
            else if (answer11 == 'b') {
                spontaneousPerson = spontaneousPerson + 1;
                plannerPerson = plannerPerson + 1;
            }
            else if (answer11 == 'c') {
                plannerPerson = plannerPerson + 1;
            }
            else {
            cout << "Invalid answer. Try again with: (a, b, or c)" << endl;
            }
        } while (answer11 != 'a' && answer11 != 'b' && answer11 != 'c');
        // question 12
        cout << "\n\nHow many clothes do you pack for vacation? "<< endl;
        cout << "\n     a. Just enough." << endl;
        cout << "     b. I pack a few extra." << endl;
        cout << "     c. 6 outfits for everyday." << endl;
        do {
            cin >> answer12;
            if (answer12 == 'a') {
                spontaneousPerson = spontaneousPerson + 1;
            }
            else if (answer12 == 'b') {
                spontaneousPerson = spontaneousPerson + 1;
                plannerPerson = plannerPerson + 1;
            }
            else if (answer12 == 'c') {
                plannerPerson = plannerPerson + 1;
            }
            else {
            cout << "Invalid answer. Try again with: (a, b, or c)" << endl;
            }
        } while (answer12 != 'a' && answer12 != 'b' && answer12 != 'c');


        //Results
        cout << "\n\n                       " << "RESULTS" << endl;
        cout << "-------------------------------------------------------" << endl;

        if (introVert > extroVert) {
            cout << "You are an introvert." << endl;
        }
        else if (extroVert > introVert) {
            cout << "You are an extrovert." << endl;
        }
        else {
            cout << "You are neither an introvert or an extrovert." << endl;
        }

        if (posiPerson > negPerson) {
            cout << "You are a positive person." << endl;
        }
        else if (negPerson > posiPerson) {
            cout << "You are a negative person." << endl;
        }
        else {
            cout << "You are neither a positive or a negative person." << endl;
        }


        if (sillyPerson > seriousPerson) {
            cout << "You are a silly goose!" << endl;
        }
        else if (seriousPerson > sillyPerson) {
            cout << "You are a serious person." << endl;
        }
        else {
            cout << "You are neither a silly or a serious person." << endl;
        }

        if (spontaneousPerson > plannerPerson) {
            cout << "You are a spontaneous person." << endl;
        }
        else if (plannerPerson > spontaneousPerson) {
            cout << "You are a planner." << endl;
        }
        else {
            cout << "You are neither a spontaneous person or a planner." << endl;
        }
        cout << "-------------------------------------------------------" << endl;
        cout << "\n\nDo you want to run the test again? (y/n)" << endl;
        cin >> answer;
    } while (answer == 'y');
    return 0;
} 