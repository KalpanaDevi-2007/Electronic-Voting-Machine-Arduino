#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// Button Pins
const int btnA = 6;
const int btnB = 7;
const int btnC = 8;
const int btnD = 9;
const int btnResult = 10;
const int btnReset = A0;

// Output Pins
const int greenLED = A1;
const int redLED = A2;
const int buzzer = A3;

// Vote Counters
int voteA = 0;
int voteB = 0;
int voteC = 0;
int voteD = 0;

void setup()
{
  pinMode(btnA, INPUT_PULLUP);
  pinMode(btnB, INPUT_PULLUP);
  pinMode(btnC, INPUT_PULLUP);
  pinMode(btnD, INPUT_PULLUP);
  pinMode(btnResult, INPUT_PULLUP);
  pinMode(btnReset, INPUT_PULLUP);

  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(buzzer, OUTPUT);

  digitalWrite(greenLED, LOW);
  digitalWrite(redLED, LOW);
  digitalWrite(buzzer, LOW);

  lcd.begin(16,2);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Electronic");
  lcd.setCursor(0,1);
  lcd.print("Voting Machine");

  delay(2000);

  showWelcome();
}

void loop()
{
  if(digitalRead(btnA)==LOW)
  {
    voteA++;
    voteMessage("Candidate A");
  }

  if(digitalRead(btnB)==LOW)
  {
    voteB++;
    voteMessage("Candidate B");
  }

  if(digitalRead(btnC)==LOW)
  {
    voteC++;
    voteMessage("Candidate C");
  }

  if(digitalRead(btnD)==LOW)
  {
    voteD++;
    voteMessage("Candidate D");
  }

  if(digitalRead(btnResult)==LOW)
  {
    showResult();
  }

  if(digitalRead(btnReset)==LOW)
  {
    resetVotes();
  }
}

void voteMessage(String candidate)
{
  digitalWrite(greenLED,HIGH);

  tone(buzzer,1000);
  delay(200);
  noTone(buzzer);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Vote Accepted");
  lcd.setCursor(0,1);
  lcd.print(candidate);

  delay(1000);

  digitalWrite(greenLED,LOW);

  // Wait until button released
  while(
  digitalRead(btnA)==LOW ||
  digitalRead(btnB)==LOW ||
  digitalRead(btnC)==LOW ||
  digitalRead(btnD)==LOW);

  delay(200);

  showWelcome();
}

void showWelcome()
{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Press Button");
  lcd.setCursor(0,1);
  lcd.print("To Vote");
}

void showResult()
{
  digitalWrite(redLED,HIGH);

  lcd.clear();

  lcd.print("A:");
  lcd.print(voteA);
  lcd.print(" B:");
  lcd.print(voteB);

  lcd.setCursor(0,1);

  lcd.print("C:");
  lcd.print(voteC);
  lcd.print(" D:");
  lcd.print(voteD);

  delay(5000);

  int maxVote = voteA;
  String winner = "Candidate A";

  if(voteB>maxVote)
  {
    maxVote=voteB;
    winner="Candidate B";
  }

  if(voteC>maxVote)
  {
    maxVote=voteC;
    winner="Candidate C";
  }

  if(voteD>maxVote)
  {
    maxVote=voteD;
    winner="Candidate D";
  }

  lcd.clear();
  lcd.print("Winner");
  lcd.setCursor(0,1);
  lcd.print(winner);

  delay(3000);

  digitalWrite(redLED,LOW);

  showWelcome();
}

void resetVotes()
{
  voteA=0;
  voteB=0;
  voteC=0;
  voteD=0;

  digitalWrite(redLED,LOW);

  lcd.clear();
  lcd.print("Election");
  lcd.setCursor(0,1);
  lcd.print("Reset Done");

  tone(buzzer,1500);
  delay(300);
  noTone(buzzer);

  delay(1500);

  showWelcome();
}