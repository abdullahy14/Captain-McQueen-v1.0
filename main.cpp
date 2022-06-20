#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    string name;
    cout << setw(2) << "Hello, my name is McQueen and i'm your virtual nutritionist, Please enter your name: \n";
    cin >> name;
    double a, h, w, ws;
    cout << "Please " << name << ", enter your age in years: \n";
    cin >> a;
      cout << "Please " << name << ", enter your height in cm: \n";
    cin >> h;
      cout << "Please " << name << ", enter your weight in kg: \n";
    cin >> w;
     cout << "Please " << name << ", enter your waist circumference in cm, you can enter 0 if you want to skip it. \n";
    cin >> ws;
    double mbmr = 88.362 + (13.397 * w) + (4.799 * h) - (5.677 * a);
    double fbmr = 447.593 + (9.247 * w) + (3.098 * h) - (4.330 * a);
    double gmcal = mbmr + 800;
    double lmcal = mbmr - 700;
    double gfcal = fbmr + 800;
    double lfcal = fbmr -400;
    double bmi = w / (h * h) * 10000;
    double bfat = (bmi * 1.2) + (0.23 * a) - 16.2;
if (ws == 0){
    string answer;
    cout << "What's your gender " << name << "? male or female. \n";
    cin >> answer;

       if (answer == "male"){
           cout << name << " your bmr is " << round(mbmr) << " KCL per day. \n";
       }


    else if (answer == "female"){
        cout << name << " your bmr is " << round(fbmr) << " KCL per day. \n";
    }
    string answer2;
    cout << "Do you want to gain or lose weight? ";
    if (answer == "male"){
           if (bmi >= 25)
        {
            if (bmi >= 23){
                cout << "Neither gaining nor losing weight, I think your weight is ideal. Trust me, I'm captain McQueen. \n";
            }
            else{
                cout << "I recommend losing weight. \n";
            }

        }
        else
        {
            cout << "I recommend gaining weight. \n";
        }
    }
     else if (answer == "female")
    {
        if (bmi >= 25)
        {
            if (bmi >= 23, bfat <= 13)
            {
                cout << "Neither gaining nor losing weight, I think your weight is ideal. Trust me, I'm captain McQueen. answer 'no' if you wanted to remain on your weight. \n";
            }
            else
            {
                cout << "I recommend losing weight. \n";
            }

        }
        else
        {
            cout << "I recommend gaining weight. \n";
        }
    }

    cin >> answer2;
    if (answer2 == "gain")
    {
        if (answer == "male")
        {
            cout << "You need " << round(gmcal) << " KCL per day. \n";
        }
        else if (answer == "female")
        {
            cout << "You need " << round(gfcal) << " KCL per day. \n";

        }
    }
    else if (answer2 == "lose")
    {
       if (answer == "male")
        {
            cout << "You need " << round(lmcal) << " KCL per day. \n";
        }
        else if (answer == "female")
        {
            cout << "You need " << round(lfcal) << " KCL per day. \n";
        }
        }
        else if (answer2 == "no")
        {
            if (answer == "male")
            {
            cout << name << " you need " << mbmr << " KCL per day. \n";
            }
            else if (answer == "female")
            {
                cout << name << " you need " << fbmr << " KCL per day. \n";
            }

        }
        string answer3;
    cout << "Do you want me to calculate your macro nutrients daily intake? yes or no. \n";
    cin >> answer3;
    if (answer3 == "yes")
    {
        if (answer == "male", answer2 == "gain")

        {
            cout << "Your protein intake per day is " << round(w * 1.6) << " grams. \n";
            cout << "Your fat intake per day is " << round(gmcal * 0.3 / 9.0) << " grams. \n";
            cout << "Your carbohydrates intake per day is " << round( (gmcal - (gmcal * 0.3 / 9.0) - (gmcal * 0.55 / 4) ) / 4)<< " grams. \n";
         }
         else if (answer == "female", answer2 == "lose")
         {
            cout << "Your protein intake per day is " << round(w * 1.6) << " grams. \n";
            cout << "Your fat intake per day is " << round(lfcal * 0.3 / 9.0) << " grams. \n";
            cout << "Your carbohydrates intake per day is " << round( (lfcal - (lfcal * 0.3 / 9.0) - (lfcal * 0.55 / 4) ) / 4)<< " grams. \n";
         }
         else if (answer == "male", answer2 == "lose")
         {
            cout << "Your protein intake per day is " << round(w * 1.6) << " grams. \n";
            cout << "Your fat intake per day is " << round(lmcal * 0.3 / 9.0) << " grams. \n";
            cout << "Your carbohydrates intake per day is " << round( (lmcal - (lmcal * 0.3 / 9.0) - (lmcal * 0.55 / 4) ) / 4)<< " grams. \n";
         }
          else if (answer == "female", answer2 == "gain")
         {
            cout << "Your protein intake per day is " << round(w * 1.6) << " grams. \n";
            cout << "Your fat intake per day is " << round(gfcal * 0.3 / 9.0) << " grams. \n";
            cout << "Your carbohydrates intake per day is " << round( (gfcal - (gfcal * 0.3 / 9.0) - (gfcal * 0.55 / 4) ) / 4)<< " grams. \n";
         }
             else if (answer == "female", answer2 == "no")
         {
            cout << "Your protein intake per day is " << round(w * 1.6) << " grams. \n";
            cout << "Your fat intake per day is " << round(fbmr * 0.3 / 9.0) << " grams. \n";
            cout << "Your carbohydrates intake per day is " << round( (fbmr - (fbmr * 0.3 / 9.0) - (fbmr * 0.55 / 4) ) / 4)<< " grams. \n";
         }
    else if (answer == "male", answer2 == "no")
         {
            cout << "Your protein intake per day is " << round(w * 1.6) << " grams. \n";
            cout << "Your fat intake per day is " << round(mbmr * 0.3 / 9.0) << " grams. \n";
            cout << "Your carbohydrates intake per day is " << round( (mbmr - (mbmr * 0.3 / 9.0) - (mbmr * 0.55 / 4) ) / 4)<< " grams. \n";
         }

    }
       string answer5;
    cout << "Do you want me to calculate your body fat percent? yes or no. \n";
    cin >> answer5;
    if (answer5 == "yes")
    {
        cout << "Your body fat percent is " << bfat << "%. To have a further accurate percentage you need to enter your body waist circumference. \n";
    }

}
else
{
    double wsbfat = (495 / (1.0324 - (0.19077 * log10(ws) + (0.15456 * log10(h)))) ) /100 - 450 /100  ;
      string answer;
    cout << "What's your gender " << name << "? male or female. \n";
    cin >> answer;

       if (answer == "male")
       {
           cout << name << " your bmr is " << round(mbmr) << " KCL per day. \n";
       }


    else if (answer == "female")
    {
        cout << name << " your bmr is " << round(fbmr) << " KCL per day. \n";
    }
    string answer2;
    cout << "Do you want to gain or lose weight? ";
    if (answer == "male")
    {
           if (bmi >= 25)
        {
            if (bmi >= 23)
            {
                cout << "Neither gaining nor losing weight, I think your weight is ideal. Trust me, I'm captain McQueen. \n";
            }
            else
            {
                cout << "I recommend losing weight. \n";
            }

        }
        else
        {
            cout << "I recommend gaining weight. \n";
        }
    }
     else if (answer == "female")
    {
        if (bmi >= 25)
        {
            if (bmi >= 23, bfat <= 13)
            {
                cout << "Neither gaining nor losing weight, I think your weight is ideal. Trust me, I'm captain McQueen. answer 'no' if you wanted to remain on your weight. \n";
            }
            else
            {
                cout << "I recommend losing weight. \n";
            }

        }
        else
        {
            cout << "I recommend gaining weight. \n";
        }
    }

    cin >> answer2;
    if (answer2 == "gain")
    {
        if (answer == "male")
        {
            cout << "You need " << round(gmcal) << " KCL per day. \n";
        }
        else if (answer == "female")
        {
            cout << "You need " << round(gfcal) << " KCL per day. \n";

        }
    }
    else if (answer2 == "lose")
    {
       if (answer == "male")
        {
            cout << "You need " << round(lmcal) << " KCL per day. \n";
        }
        else if (answer == "female")
        {
            cout << "You need " << round(lfcal) << " KCL per day. \n";
        }
        }
        else if (answer2 == "no")
        {
            if (answer == "male")
            {
            cout << name << " you need " << mbmr << " KCL per day. \n";
            }
            else if (answer == "female")
            {
                cout << name << " you need " << fbmr << " KCL per day. \n";
            }

        }
        string answer3;
    cout << "Do you want me to calculate your macro nutrients daily intake? yes or no. \n";
    cin >> answer3;
    if (answer3 == "yes")
    {
        if (answer == "male", answer2 == "gain")

        {
            cout << "Your protein intake per day is " << round(w * 1.6) << " grams. \n";
            cout << "Your fat intake per day is " << round(gmcal * 0.3 / 9.0) << " grams. \n";
            cout << "Your carbohydrates intake per day is " << round( (gmcal - (gmcal * 0.3 / 9.0) - (gmcal * 0.55 / 4) ) / 4)<< " grams. \n";
         }
         else if (answer == "female", answer2 == "lose")
         {
            cout << "Your protein intake per day is " << round(w * 1.6) << " grams. \n";
            cout << "Your fat intake per day is " << round(lfcal * 0.3 / 9.0) << " grams. \n";
            cout << "Your carbohydrates intake per day is " << round( (lfcal - (lfcal * 0.3 / 9.0) - (lfcal * 0.55 / 4) ) / 4)<< " grams. \n";
         }
         else if (answer == "male", answer2 == "lose")
         {
            cout << "Your protein intake per day is " << round(w * 1.6) << " grams. \n";
            cout << "Your fat intake per day is " << round(lmcal * 0.3 / 9.0) << " grams. \n";
            cout << "Your carbohydrates intake per day is " << round( (lmcal - (lmcal * 0.3 / 9.0) - (lmcal * 0.55 / 4) ) / 4)<< " grams. \n";
         }
          else if (answer == "female", answer2 == "gain")
         {
            cout << "Your protein intake per day is " << round(w * 1.6) << " grams. \n";
            cout << "Your fat intake per day is " << round(gfcal * 0.3 / 9.0) << " grams. \n";
            cout << "Your carbohydrates intake per day is " << round( (gfcal - (gfcal * 0.3 / 9.0) - (gfcal * 0.55 / 4) ) / 4)<< " grams. \n";
         }
             else if (answer == "female", answer2 == "no")
         {
            cout << "Your protein intake per day is " << round(w * 1.6) << " grams. \n";
            cout << "Your fat intake per day is " << round(fbmr * 0.3 / 9.0) << " grams. \n";
            cout << "Your carbohydrates intake per day is " << round( (fbmr - (fbmr * 0.3 / 9.0) - (fbmr * 0.55 / 4) ) / 4)<< " grams. \n";
         }
    else if (answer == "male", answer2 == "no")
         {
            cout << "Your protein intake per day is " << round(w * 1.6) << " grams. \n";
            cout << "Your fat intake per day is " << round(mbmr * 0.3 / 9.0) << " grams. \n";
            cout << "Your carbohydrates intake per day is " << round( (mbmr - (mbmr * 0.3 / 9.0) - (mbmr * 0.55 / 4) ) / 4)<< " grams. \n";
         }

    }
       string answer5;
    cout << "Do you want me to calculate your body fat percent? yes or no. \n";
    cin >> answer5;
    if (answer5 == "yes")
        cout << "Your body fat percent is " << wsbfat << "%. \n";
}
system("pause");
    return 0;
}