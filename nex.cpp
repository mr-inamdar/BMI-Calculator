#include <iostream>
#include <iomanip>

using namespace std;

// Function to calculate BMI
void calculateBMI() {
    float weight, height, bmi;
    cout << "Enter weight (in kg): ";
    cin >> weight;
    cout << "Enter height (in meters): ";
    cin >> height;
    if (height > 0) {
        bmi = weight / (height * height);
        cout << "Your BMI is: " << fixed << setprecision(2) << bmi << endl;
        if (bmi < 18.5)
            cout << "You are underweight.\n";
        else if (bmi >= 18.5 && bmi <= 24.9)
            cout << "You have a normal weight.\n";
        else if (bmi >= 25 && bmi <= 29.9)
            cout << "You are overweight.\n";
        else
            cout << "You are obese.\n";
    } else {
        cout << "Invalid height entered.\n";
    }
}

// Function to display weight loss tips
void weightLossTips() {
    cout << "Tips for Weight Loss:\n";
    cout << "1. Eat a balanced diet.\n";
    cout << "2. Exercise regularly.\n";
    cout << "3. Stay hydrated.\n";
    cout << "4. Get enough sleep.\n";
}

// Function to display weight gain tips
void weightGainTips() {
    cout << "Tips for Weight Gain:\n";
    cout << "1. Eat calorie-dense foods.\n";
    cout << "2. Increase protein intake.\n";
    cout << "3. Strength train.\n";
    cout << "4. Avoid skipping meals.\n";
}

// Function to display about information
void about() {
    cout << "BMI Calculator Application\n";
    cout << "Version: 1.0\n";
    cout << "Developed by: [Your Name]\n";
}

int main() {
    int choice;

    do {
        // Display menu
        cout << "\nBMI Calculator\n";
        cout << "1) Calculate BMI\n";
        cout << "2) Tips On Weight Loss\n";
        cout << "3) Tips On Weight Gain\n";
        cout << "4) About Us\n";
        cout << "5) Exit/Quit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        // Handle menu options
        switch (choice) {
            case 1:
                calculateBMI();
                break;
            case 2:
                weightLossTips();
                break;
            case 3:
                weightGainTips();
                break;
            case 4:
                about();
                break;
            case 5:
                cout << "Exiting application. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}