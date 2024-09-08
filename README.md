# HarvardX-CS50-Introduction to Computer Science
This repo contains all my solutions for CS50- Introduction to Computer Science Course
- Problem Sets 1 to 5 require **C-programming language**
- Problem Set 6 requires **Python**
- Problem Set 7 requires **Python** and **SQL**
- Problem Set 8 (Web Track) requires **Flask**, **HTML**, **CSS** and **Javascript**

## Problem Set-1
### Hello, it's me
[Link]https://cs50.harvard.edu/x/2024/psets/1/me/
#### Context
In a file called hello.c, in a folder called me, implement a program in C that prompts the user for their name and then says hello to that user. For instance, if the user’s name is Adele, your program should print hello, Adele\n!

### Mario-Less
[Link]https://cs50.harvard.edu/x/2024/psets/1/mario/less/
#### Context
In a file called mario.c in a folder called mario-less, implement a program in C that recreates that pyramid, using hashes (#) for bricks.

#  #
      #
     ##
    ###
But prompt the user for an int for the pyramid’s actual height, so that the program can also output shorter pyramids like the below:


Re-prompt the user, again and again as needed, if their input is not greater than 0 or not an int altogether.

### Mario-More
[Link]https://cs50.harvard.edu/x/2024/psets/1/mario/more/
#### Context
In a file called mario.c in a folder called mario-more, implement a program in C that recreates that pyramid, using hashes (#) for bricks, as in the below:

 #  #
       #  #
      ##  ##
     ###  ###
    ####  ####

### Cash
[Link]https://cs50.harvard.edu/x/2024/psets/1/cash/
#### Context
Suppose you work at a store and a customer gives you $1.00 (100 cents) for candy that costs $0.50 (50 cents). You’ll need to pay them their “change,” the amount leftover after paying for the cost of the candy. When making change. odds are you want to minimize the number of coins you’re dispensing for each customer, lest you run out (or annoy the customer!). In a file called cash.c in a folder called cash, implement a program in C that prints the minimum coins needed to make the given amount of change, in cents.

### Credit
[Link]https://cs50.harvard.edu/x/2024/psets/1/credit/
#### Context
In a file called credit.c in a folder called credit, implement a program in C that checks the validity of a given credit card number using Luhn’s Algorithm


## Problem Set-1
### Scrabble
[Link]https://cs50.harvard.edu/x/2024/psets/2/scrabble/
#### Context
In a file called scrabble.c in a folder called scrabble, implement a program in C that determines the winner of a short Scrabble-like game. Your program should prompt for input twice: once for “Player 1” to input their word and once for “Player 2” to input their word. Then, depending on which player scores the most points, your program should either print “Player 1 wins!”, “Player 2 wins!”, or “Tie!” (in the event the two players score equal points).

### Readability
[Link]https://cs50.harvard.edu/x/2024/psets/2/readability/
#### Context
In a file called readability.c in a folder called readability, you’ll implement a program that calculates the approximate grade level needed to comprehend some text. Your program should print as output “Grade X” where “X” is the grade level computed, rounded to the nearest integer. If the grade level is 16 or higher (equivalent to or greater than a senior undergraduate reading level), your program should output “Grade 16+” instead of giving the exact index number. If the grade level is less than 1, your program should output “Before Grade 1”.

### Caesar
[Link]https://cs50.harvard.edu/x/2024/psets/2/caesar/
#### Context
In a file called caesar.c in a folder called caesar, write a program that enables you to encrypt messages using Caesar’s cipher. At the time the user executes the program, they should decide, by providing a command-line argument, what the key should be in the secret message they’ll provide at runtime. We shouldn’t necessarily assume that the user’s key is going to be a number; though you may assume that, if it is a number, it will be a positive integer.

