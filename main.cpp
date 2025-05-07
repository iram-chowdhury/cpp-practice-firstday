#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

void areaOfCircle()
{
  long double radiusOfCircle;
  cout << "Please enter the radius of the circle & then I will use my magic math skills to calculate the area." << endl;
  cin >> radiusOfCircle;
  double pi = 3.14;
  long double areaOfCircle = pi * pow(radiusOfCircle, 2);
  cout << "The area of the circle is: " << areaOfCircle << endl;
}

void celciusCalculator()
{
  cout << endl
       << "Hello World!" << endl;
  cout << "We are going to convert from celcius to fahrenheit. Please input the value for celsius!" << endl;
  double celcius;
  cin >> celcius;
  double fahrenheit = (celcius - 30) / 2;
  cout << "Your number in celcius: " << celcius << endl
       << "In fahrenheit is: " << fahrenheit << endl;
}

void getName(string &name, int &age)
{
  // string name;
  cout << "Type your full name here: ";
  getline(cin >> ws, name);
  cout << "What is your age?: ";
  // int age;
  cin >> age;
  cout << "Your full name is " << name << "." << endl;
  cout << "Your age is " << age << " years old." << endl;
}

void getLengthOfName(string name)
{
  cout << "The length of your name in number of characters is: " << name.length() << endl;
}
 
void diceRoll()
{
  cout << "This program rolls a dice twice, and gives a number from 1 to 6." << endl;
  srand(time(0));
  const int maxValue = 6;
  const int minValue = 1;
  int maxValue2;
  int minValue2;
  auto randomNumber = (rand() % (maxValue - minValue + 1)) + minValue;
  cout << "Your number is: " << randomNumber << endl;
  auto randomNumber2 = (rand() % (maxValue - minValue + 1)) + minValue;
  cout << "Your second number is: " << randomNumber2 << endl;
  cout << "After this line it will also calculate a random number between two numbers that you pick" << endl;
  cout << "Please pick your minimum value & then your maximum value: ";
  cin >> minValue2;
  cin >> maxValue2;
  auto randomNumber3 = (rand() % (maxValue2 - minValue2 + 1)) + minValue2;
  cout << "The random number between " << minValue2 << " & " << maxValue2 << " is " << randomNumber3;
}

void canVote(int ageOfUser)
{
  if (ageOfUser >= 18)
  {
    cout << "Congratulations! You can vote." << endl;
  }
  else
  {
    cout << "Unfortunately you cannot vote. You need to be 18 years old or older to vote.";
  }
}

void whatMonthIsIt(int month)
{
  switch (month)
  {
  case 1:
    cout << "It is January.";
    break;
  case 2:
    cout << "It is February.";
    break;
  case 3:
    cout << "It is March.";
    break;
  case 4:
    cout << "It is April.";
    break;
  case 5:
    cout << "It is May.";
    break;
  case 6:
    cout << "It is June.";
    break;
  case 7:
    cout << "It is July.";
    break;
  case 8:
    cout << "It is August.";
    break;
  case 9:
    cout << "It is September.";
    break;
  case 10:
    cout << "It is October.";
    break;
  case 11:
    cout << "It is November.";
    break;
  case 12:
    cout << "It is December.";
    break;
  default:
    cout << "Please select a number from 1-12. Anything else won't work.";
  }
}

void whatGradeDidYouGet(int gradeNumber)
{
  if (gradeNumber >= 80 && gradeNumber <= 100)
  {
    cout << "You got an A! Congratulations, that's amazing." << endl;
  }
  else if (gradeNumber >= 70 && gradeNumber < 80)
  {
    cout << "You got a B. That's really good. Pat yourself on the back." << endl;
  }
  else if (gradeNumber >= 60 && gradeNumber < 70)
  {
    cout << "You got a C. Not bad, but you could do better." << endl;
  }
  else if (gradeNumber >= 50 && gradeNumber < 60)
  {
    cout << "You got a D... borderline failing. You have to do better. -.-" << endl;
  }
  else if (gradeNumber < 50 && gradeNumber >= 0)
  {
    cout << "Unfortunately you failed. You must re-do the class to get a credit." << endl;
  }
  else
  {
    "The number you chose was not between 0 to 100. Please try again.";
  }
}

void convertNumberToPercentage()
{
  double number;
  cout << "Please select a number to be converted into percentage: ";
  cin >> number;
  double percentage = number * 100;
  cout << "Your number " << number << " converted to percentage is: " << percentage << "%" << endl;
}

void ternaryOperatorExample()
{
  auto numberHere = 71;

  numberHere < 80 ? cout << "The number 71 is less than 80!" << endl : cout << "Number is more than 80!" << endl;

  numberHere = 88;

  numberHere < 80 ? cout << "The number 88 is less than 80!" << endl : cout << "Number is more than 80!" << endl;

  cout << "Please enter your number here to check if it's over 80 or not: ";
  cin >> numberHere;
  numberHere < 80 ? cout << "Number is less than 80!" << endl : cout << "Number is more than 80!" << endl;
}

void isTempAboveZero()
{
  double temp;
  cout << "Please insert temperature now to check if it's above 0: ";
  cin >> temp;
  cout << endl;
  bool tempAction;
  cout << "Now enter whether the tempature you picked was celcius or fahrenheit (1/True for Celcius or 0/False for Fahrenheit): ";
  cin >> tempAction;
  cout << endl;
  if (temp > 0 && tempAction == true)
  {
    cout << "Your temperature in celcius is above 0!" << endl;
  }
  else if (temp > 0 && tempAction == false)
  {
    cout << "Your temperature in fahrenheit is above 0!" << endl;
  }
  else
  {
    cout << "Your temperature is not above 0." << endl;
  }
}

void repeatingNumbers()
{
  int number;
  int i;
  cout << "Please enter a number to repeat: ";
  cin >> number;
  cout << endl
       << "Please enter how many times you want it to repeat: ";
  cin >> i;
  while (i > 0)
  {
    cout << number << endl;
    i--;
  }
}

void positiveNumberCheck(int &number)
{
  if (number < 0) {
    do {
      cout << "Please enter a positive number: ";
      cin >> number;
    } while (number < 0);
}
}

void idekAtp()
{
  string name;
  int age;
  int number;
  int number2;
  getName(name, age);
  getLengthOfName(name);
  cout << "Please enter a positive number here: ";
  cin >> number;
  positiveNumberCheck(number);
  cout << "Okay now that you have selected a number, please select a second positive number: ";
  cin >> number2;
  positiveNumberCheck(number2);
  cout << "The two numbers you selected are: " << number << " & " << number2 << ". Is that correct?" << endl;
  string validity; 
  cout << "Reply with either 'Yes', 'No', 'Y' or 'N': ";
  getline(cin >> ws, validity);
  cout << endl;
  if (validity == "Y" || validity == "N" || validity == "Yes" || validity == "No") {
    cout << "Okay perfect, let's move on then." << endl;
  } else {
    do {
      cout << "That is not one of the required answers. Please try again (Y, N, Yes or No): ";
      validity.clear();
      getline(cin >> ws, validity);
    } while (validity != "Y" && validity != "N" && validity != "Yes" && validity != "No");
  }
  cout << "Now that we have both our numbers selected, we're gonna do something special!" << endl;
}

int main()
{
  /* int age;
  string name;
  int month;
  getName(name, age);
  canVote(age);
  cout << "Please select a number from 1-12 to determine what month it is." << endl;
  cin >> month;
  whatMonthIsIt(month);

  int grade;
  cout << endl << "Please enter your grade in whole numbers (0-100): ";
  cin >> grade;
  while (grade < 0 || grade > 100) {
    cout << "Please try again. That was not a number between 0 to 100: ";
    cin >> grade;
  }
  whatGradeDidYouGet(grade); */

  idekAtp();

  // randomFunction();

  /* getName();
  diceRoll();
  celciusCalculator();
  areaOfCircle(); */

  return 0;
}

/*
cout << "Wow cool!" << endl;
double roundedNumber = 10.5;
double ceiledNumber = ceil(roundedNumber);
cout << ceiledNumber << endl;
double result = floor(1.2);
cout << result << endl;
double powerOf = pow(2, 3);
cout << powerOf << endl;

*/

/*
double price = 99.99;
float interestRate = 3.67F;
long fileSize = 90000L;
char leter = 'a';
bool isValid = true;
bool isNotValid = false;

srand(time(0));
int number = rand() % 100;
cout << number;
*/