#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
  
bool 
char
int
float
double
void

 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    
    bool isWritable = true;
    bool playSound = false;
    bool performOperation = true;

    char separator = '_';
    char gonGiveItToYa = 'X';
    char special = 'k';

    int failedAttempts = 1000000;
    int unitsSold = 8248;
    int numSamples = 44100;

    float basePrice = 1.99f;
    float percentCorrect = 0.70f;
    float piRounded = 3.141593f;

    double averagePerHour = 7.3453472756235;
    double startingValue = 0.0;
    double amplitudeModifier = 0.6789;
    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function

    ignoreUnused(isWritable, playSound, performOperation, separator, gonGiveItToYa, special, failedAttempts, unitsSold, numSamples, basePrice, percentCorrect, piRounded, averagePerHour, startingValue, amplitudeModifier);
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
bool canAfford(float moneyAvailable, float moneyNeeded = 29.99f)
{
    ignoreUnused(moneyAvailable, moneyNeeded);
    return {};
}

/*
 2)
 */
 int catsToFeed(int catsInAlley, int catsFostered = 6, int catsOwned = 4)
 {
     ignoreUnused(catsInAlley, catsFostered, catsOwned);
     return {};
 }

/*
 3)
 */
 int facesMelted(bool shreded, int peopleInAudience, int notesPlayed, int highKicksPerformed)
 {
     ignoreUnused(shreded, peopleInAudience, notesPlayed, highKicksPerformed);
     return {};
 }

/*
 4)
 */
 void bangHead(bool musicPlaying = true, float rockinFactor = 0.999456f)
 {
     ignoreUnused(musicPlaying, rockinFactor);
 }

/*
 5)
 */
 bool yes(bool no = false)
 {
     ignoreUnused(no);
     return {};
 }

/*
 6)
 */
 double getBodyOdor(float temperature, double funkFactor, int daysSinceShower)
 {
     ignoreUnused(temperature, funkFactor, daysSinceShower);
     return {};
 }

/*
 7)
 */
 void sweetChildOMine(char o = 'o', int oh = 0)
 {
     ignoreUnused(o, oh);
 }

/*
 8)
 */
 float xFactor(char x = 'X')
 {
     ignoreUnused(x);
     return {};
 }

/*
 9)
 */
int countSheep(int numSheep, float hoursUntilSleep) 
{
    ignoreUnused(numSheep, hoursUntilSleep);
    return {};
}

/*
 10)
 */
bool laughAtJoke(double awkwardPauseLength, bool isFunny = false)
{
    ignoreUnused(awkwardPauseLength, isFunny);
    return {};
}

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto affordable = canAfford(123.50f, 29.99f);
    //2)
    auto numCats = catsToFeed(30, 6, 5);
    //3)
    auto meltyFaces = facesMelted(true, 50000, 1500000, 37);
    //4)
    bangHead(true, 0.04576f);
    //5)
    auto maybe = yes(false);
    //6)
    auto bodyOdor = getBodyOdor(106.0f, 0.99995, 16);
    //7)
    sweetChildOMine('o', 0);
    //8)
    auto whichFactor = xFactor('X');
    //9)
    auto sheepCounted = countSheep(75, 1.54f);
    //10)
    auto isLaughing = laughAtJoke(12.5, false);
    
    ignoreUnused(carRented);

    ignoreUnused(affordable, numCats, meltyFaces, maybe, bodyOdor, whichFactor, sheepCounted, isLaughing);

    std::cout << "good to go!" << std::endl;
    return 0;    
}
