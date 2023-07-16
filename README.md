# GenieGuess
A number-guessing game developed during my first semester as an undergrad student of Information Systems at the Instituto Federal Do Espírito Santo, developed with the intent of getting acquainted with C++ since it was used during my programming classes.
## Game Logic
The computer first asks the player for the maximum number the guess can be. It then asks the player if the number he's thinking of is half of that. Upon the player's response of whether the guess is right, or the number he is thinking of is higher or lower than that, the computer calculates the average between the possible minimum and maximum numbers the player can be thinking of (based on his responses of higher or lower), providing the middle point between them (by calculating their average), then asking again the same question, which always reduces the possible numbers the player can be thinking of by half.

By asking the same question over and over, the computer will guess the right number.
