from random import randint

def battle(a, b):
    if a == 'a':
        p_damage = 2
        p_chance = 3
    else:
        p_damage = 1
        p_chance = 2
    foe_strength = b + 1
    foe_health = b + 1
    player_health = 5
    while player_health > 0 and foe_health > 0:
        print("Before combat!")
        print("\tPlayer health: %d" % player_health)
        print("\tFoe health: %d" % foe_health)
        if randint(1, p_chance) == 1:
            foe_health -= p_damage
        if randint(1, 4) == 1:
            player_health -= foe_strength
        print("After combat: ")
        print("\tPlayer health: %d" % player_health)
        print("\tFoe health: %d" % foe_health)
    if player_health <= 0:
        print("Player defeated!")
        return False
    elif foe_health <= 0:
        print("Foe defeated!")
        return True
    else:
        print("Draw!")
        return True
print("Welcome to our game!")
a = True
while a:
    character = raw_input("a or b: ")
    if character == 'a':
        print("Knight!")
        a = False
    elif character == 'b':
        print("Wizard!")
        a = False

#knight -> 1 in 3 of hit; 2 dmg
#Wizard -> 1 in 2 of hit; 1 dmg
#foe -> 1 in 4 of hit; 1 dmg

n_foes = int(raw_input("Number of enemies: "))
counter = 0
condition = True
while condition and counter < n_foes:
    condition = battle(character, counter)
    if condition:
        counter += 1
if counter == n_foes:
    print("You won!!")
else:
    print("Better luck next time!")
