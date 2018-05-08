class num():
    def __init__(self, val):
        self.val = val
    def ternary(self):
        bit = 0
        oldInt = self.val
        newInt = []
        while oldInt != 0:
            oldInt, bit = divmod(oldInt, 3)
            newInt.insert(0, bit)
        return newInt
passwd = [10412, 111, 9417, 106, 15137, 117, 2609, 121, 2609, 117, 2817, 52, 12108, 106, 9033, 52, 2817, 98, 10412, 120, 12108, 128]
for x in range(len(passwd)):
    passwd[x] = num(passwd[x]).ternary()
for x in range(len(passwd)):
    print(passwd[x])
