import random as ctfFlagDecryptor
class Number():
    def __init__(self, val):
        self.val = val
    def divByTwo(self):
        if self.val % 2 == 0:
            return True
        return False
    def ternary(self):
        bit = 0
        oldInt = self.val
        newInt = []
        while oldInt != 0:
            oldInt, bit = divmod(oldInt, 3)
            newInt.insert(0, bit)
        return newInt
def hash(string):
    hash = []
    for j in string:
        hash.append(j)
    for i in range(len(hash)):
        hash[i] = ord(hash[i])
    for x in range(len(hash)):
        y = Number(x)
        if y.divByTwo():
            hash[x] = ((hash[x]) ** 2) + 8
        else:
            hash[x] = hash[x] + 3
    print("\nHash: ", end="")
    for x in range(len(hash)):
        print(chr(hash[x]), end="")
    print()
    return hash
def verify(string):
    code = hash(string)
    for x in range(len(code)):
        code[x] = Number(code[x]).ternary()
    definitelyNotTheFlagPleaseIgnoreThisVariableItsCompletelyIrrelevant = [10412, 111, 9417, 106, 15137, 117, 2609, 121, 2609, 117, 2817, 52, 12108, 106, 9033, 52, 2817, 98, 10412, 120, 12108, 128]
    for x in range(len(definitelyNotTheFlagPleaseIgnoreThisVariableItsCompletelyIrrelevant)):
        definitelyNotTheFlagPleaseIgnoreThisVariableItsCompletelyIrrelevant[x] = Number(definitelyNotTheFlagPleaseIgnoreThisVariableItsCompletelyIrrelevant[x]).ternary()
    print("Correct Passcode!  You are a true Hacker!") if code == definitelyNotTheFlagPleaseIgnoreThisVariableItsCompletelyIrrelevant else print(ctfFlagDecryptor.choice(["You're bad", "Wow you weren't even close...", "Better luck next time!", "Are you even trying", "C'mon I thought you know the codes", "Clearly you aren't a CTF god", "Man this problem isn't even hard and you still managed to mess up... Wow."]))
def main():
    string = input("What is the Password? ")
    verify(string)
main()
