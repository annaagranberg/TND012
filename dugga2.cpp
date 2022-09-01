// ========================================
//  TND012, 2020: Dugga 2
//  Name: Anna Granberg
//  LiU-id: anngr950
//  Created by Anna Granberg on 2020-09-26.
// ========================================

// Input: Users number sequence in lottery ticket
// Output: Winning amount and their lucky number
// Output depending on sertain circumstances


#include <iostream>
#include <vector>

int main() {
    
/* ********* Varibles and vectors ****** */
    int ticketnumbers [10];
    int win = 0;
    std::vector<int> lucky_number;
    std::vector<int> tickets;
    int add_ticket = 0;
    bool checknumber = true;
/* ************************************* */
   
    
/* ======== "Main" loop to register users ticket numbers + if they want another one ======= */
    std::cout<< "Welcome to the lottery, lets se if you can win!!!\n";
    
    do{
        std::cout << "Enter your ticket numbers: ";
            for (int i=0; i < 10; i++)
                {std::cin >> ticketnumbers[i];}
        
                for (int i=0; i < 10; i++)
        {
                    if (ticketnumbers[0] + ticketnumbers[9] == ticketnumbers[i])
                        {
                        win +=2000;
                        lucky_number.push_back(ticketnumbers[i]);
                        }
            
            tickets.push_back(ticketnumbers[i]);
        }
        
        std::cout << "One more ticket? ";
        std::cin >> add_ticket;
        
    }while (add_ticket != 0);
/* ========================== */

    
/*==== to calculate if the user will get an awarded 1000 ====*/
    if (tickets.size() >= 100)
    {
        for (int i = 1; i < 100; i++) {
          
            for (int q = 0; q < tickets.size(); q++) {
                
                if (i==tickets[q])
                    {
                        break;
                    }
                
                else if (q == tickets.size()-1)
                    {
                        checknumber = false;
                    }
            }
    }
    
    if (checknumber == true)
        {win+=1000;}
    }
/* ======================================================== */
    
    
/* =========== Present amount and lucky number ============ */
    std::cout << "\nYour winning amount is: " << win << "\n";
   
    if (lucky_number.empty())
    {}
    else
    {std::cout << "\nLucky numbers: ";}
    
        for (int i = 0; i < lucky_number.size(); i++)
        std::cout << lucky_number[i] << " ";
}
/* ======================================================== */


/* Test data of example 1
80  3 87 62 30 90 10 21 46 27 1
12 49 83  9 39 88 95 59 20 37 1
80 40 87 67 31 90 11 24 56 77
*/

/* Test data of example 2
80  3 87 62 30 90 10 21 46 27 1
12 49 83  9 39 88 95 59 20 37 1
80 40 87 67 31 90 11 24 56 77 1
11 48 51 42  8 74 64 41 36 53 1
52 82 16 72 19 70 44 56 29 33 1
54  1 99 14 23 22 94 79 55  2 1
60 86 34  4 31 63 84 89  7 78 1
43 93 97 45 25 38 28 26 85 49 1
47 65 57 67 73 69 32 71 24 66 1
92 98 96 77  6 75 17 61 58 13 1
35 81 18 15  5 68 91 50 76 12
*/

/* Test data of example 3
80  3 87 62 30 90 10 21 46 27 1
12 40 83  9 39 88 95 59 20 37 1
80 40 87 67 31 90 11 24 56 77
*/
