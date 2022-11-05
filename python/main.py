import serial
from random import randint

arduino = serial.Serial('/dev/ttyACM0', 9600)

random_number = randint(1,5)
game_over = False
while not game_over:
    guess = input('Guess a number between 1 and 5\nYour answer:')
    if random_number == int(guess):
        arduino.write(str('0').encode())
        print('Correct, you win!')
        game_over = True
    else:
        arduino.write(str('1').encode())
        print('Incorrect, please try again')


