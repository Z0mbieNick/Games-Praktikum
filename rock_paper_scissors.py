
import random

status = True
computer_points = 0
player_points = 0

while status:
    input_user = input("\nScheere, Stein oder Papier:  ")
    computer = random.choice(["Scheere", "Stein", "Papier"])

    if input_user == computer:
        print(f"\nSpieler: {input_user}")
        print(f"Computer: {computer}")
        print("Unentschieden!")
        print(f"\n{computer_points} : {player_points}")
    if input_user == "Scheere" and computer == "Stein":
        print(f"")