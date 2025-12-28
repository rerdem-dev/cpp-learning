#include <iostream>
#include <random>
#include <cstdlib>

//ı used std bec. this isnt a big project.
using namespace std;

//variables
int cevap;
int secim;
int tahmin;

//number finding function
void numberfinder()
{
random_device rd;
mt19937 gen(rd());
uniform_int_distribution<int> dist(1, 10);

cevap = dist(gen);
}

//main code
int main() {

cout<<"Hi. Do you wanna play a number guessing game?"<<endl;

cout<<"1:Yea why not/////2:No fu."<<endl;
cout<<"Choice: ";
cin>>secim;

if(secim==1)
{
numberfinder();
system("cls");
cout<<"Then make ur guess.."<<endl;
etiket:
cout<<"Guess: ";
cin>>tahmin;

if(tahmin==cevap)
{
system ("cls");
cout<<"YOU WİN!";
}
else
{
cout<<"Wrong answer idiot. Try again."<<endl;
goto etiket;
}

}
else
{
cout<<"Then why are u here buddy";
}

return 0;

}