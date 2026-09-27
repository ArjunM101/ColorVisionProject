#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int choice;
    bool running = true;

    while (running) {
        cout << "\nColor Vision Palette Evaluator\n";
        cout << "1. Compare two colors\n";
        cout << "2. Color accessibility information\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1: {
                int red1, green1, blue1;
                int red2, green2, blue2;
                int difference;

                cout << "\nEnter RGB values from 0 to 255.\n";

                cout << "Color 1 red: ";
                cin >> red1;

                cout << "Color 1 green: ";
                cin >> green1;

                cout << "Color 1 blue: ";
                cin >> blue1;

                cout << "Color 2 red: ";
                cin >> red2;

                cout << "Color 2 green: ";
                cin >> green2;

                cout << "Color 2 blue: ";
                cin >> blue2;

                // Check if all RGB values are valid
                if (red1 < 0 || red1 > 255 ||
                    green1 < 0 || green1 > 255 ||
                    blue1 < 0 || blue1 > 255 ||
                    red2 < 0 || red2 > 255 ||
                    green2 < 0 || green2 > 255 ||
                    blue2 < 0 || blue2 > 255) {

                    cout << "Invalid RGB value. Values must be 0-255.\n";
                }
                else {
                    // Calculate simple RGB difference
                    difference =
                        abs(red1 - red2) +
                        abs(green1 - green2) +
                        abs(blue1 - blue2);

                    cout << "\nColor difference score: "
                         << difference << "\n";

                    if (difference >= 400) {
                        cout << "Rating: Easy to distinguish\n";
                    }
                    else if (difference >= 150) {
                        cout << "Rating: Moderately distinguishable\n";
                    }
                    else {
                        cout << "Rating: Difficult to distinguish\n";
                    }

                    // Simple red-green accessibility warning
                    int redGreenDifference =
                        abs(red1 - red2) + abs(green1 - green2);

                    if (redGreenDifference < 100) {
                        cout << "Warning: These colors may be difficult "
                             << "to distinguish for some users.\n";
                        cout << "Consider using labels, symbols, or "
                             << "patterns in addition to color.\n";
                    }
                }

                break;
            }

            case 2:
                cout << "\nColor vision deficiency can make certain "
                     << "colors difficult to distinguish.\n";
                cout << "Red-green color vision deficiency is the most "
                     << "common type.\n";
                cout << "Important information should not rely only "
                     << "on color.\n";
                break;

            case 3:
                running = false;
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid menu choice.\n";
        }
    }

    return 0;
}
