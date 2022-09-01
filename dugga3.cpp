// ============================================================
// TND012: Dugga 3
// Name: Anna Granberg
// LiU-id: Anngr950
// ============================================================
//What does the program compute? π,
//Fun fact on the 14th of March it´s Pi day,/* https://www.allrecipes.com/recipe/24090/caramel-pecan-pie/ */ (very tasty with ice cream)



#include <iostream>
#include <cstdlib>  // std::rand
#include <ctime>    // used for seeding the random generator
#include <iomanip> // to display with 7 digits after decimal point


/*=== Data type ===*/
struct point {
    double x = 0.0;
    double y = 0.0;
};

/*====== Functions ======*/
int getNumberOfSamples();
double getRandomNumber();
point getRandomPoin();
bool insideSquare(point p);
bool insideCircle(point p);
void printRatio(int a, int b);


/*======= Main ======*/
int main() {
    std::srand((unsigned)std::time(0));  // use current time as seed for random generator
    int a = 0; //circle
    int b = 0; //square
    
    
    // Ask for number of samples
    int number_of_samples = getNumberOfSamples();
    
    //Count how many point inside or on the circle/square
    for (int i = 1; i<= number_of_samples; i++) {
        point p = getRandomPoin();
        
        if (insideSquare(p)) { //inside square aautomaticlly instide circle
            a++;
            b++;
        }
        
        else if (insideCircle(p) && insideSquare(p) == false) { //when its ONLY inside circle
            a++;
        }
    }
    //Print final ratio, a over b, circle over square
    printRatio(a,b);
    
}

/*======= Get number of samples =======*/
int getNumberOfSamples() {
    int n = 0;
    
    std::cout << "Number of samples: ";
    std::cin >> n;
    
    return n;
}

/*===== Random number [-1.0,1.0] =====*/
double getRandomNumber() {
    constexpr double Max = RAND_MAX;
    double random_number = std::rand() / Max;
    double Random_number2 = 2.0*random_number - 1.0;
    
    
    return Random_number2;
}

/*========== Random point (x,y) =========*/
point getRandomPoin() {
    point p;
    
    p.x = getRandomNumber();
    p.y = getRandomNumber();
    
    return p;
}

/*==== See if point is inside square====*/
bool insideSquare(point p) {
    
    if (p.x <= 0.5 && p.x >= -0.5 && p.y <= 0.5 && p.y >= -0.5) {
        return true;
    }
    else
        return false;
}

/*=== See if point is inside circle ===*/
bool insideCircle(point p) {
    double r = 1.0;
    double center_x = 0.0;
    double center_y = 0.0;
    double d = sqrt((double)(p.x - center_x) * (p.x - center_x) + (p.y - center_y) * (p.y - center_y));
    
    if (d <= r) {
        return true;
    }
    else
        return false;
}

/*===== Print the ratio =====*/
void printRatio(int a, int b){
    std::cout<<std::setprecision(8);
    
    double print_ratio = ((double)a / (double)b);
    
    std::cout << "Ratio: " << print_ratio << "\n\n";
}
