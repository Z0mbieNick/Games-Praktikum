# Tag eins

# This is the number guessing game
import random

while True:
    status = True
    random_number = random.randint(1, 100)
    print("\nErrate die Zahl, welche zwischen 1 und 100 liegt: ")

    while status:
        guess = int(input("Gib eine Zahl ein: "))

        if guess == random_number:
            print("Glückwunsch! Ihr hast die Zahl erraten.\n")
            status = False
        elif guess < random_number:
            print("Zu niedrig!")
        elif guess > random_number:
            print("Zu hoch!")
        else:
            print("Ungültige Eingabe")

        