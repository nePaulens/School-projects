import random

correct_number = random.randint(1,20)
chances = 5

print('Can you guess the number in range of 1 to 20?')
print('You have ' + str(chances) + ' chances')


while True:

	guess_variable = input()

	if guess_variable.isdigit() == 1 and int(guess_variable) >= 1 and int(guess_variable) <= 20 :

		if chances == 1:
			print('Oops, game over!')
			break

		if guess_variable == "":
			print('Please enter a number between 1 and 20')

		elif int(guess_variable) == correct_number:
			print('Your guess is right!')
			break

		elif int(guess_variable) > correct_number:
			print('Your guess is too great')
			chances -= 1
			print(f'You have ' + str(chances) + ' remaining chances')


		elif int(guess_variable) < correct_number:
			print('Your guess is too low')
			chances -= 1
			print(f'You have ' + str(chances) + ' remaining chances')
	else:
		print('That is not in the given range')
