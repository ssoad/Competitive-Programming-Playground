class AmusingJoke:
    name1 = ""
    name2 = ""
    jumbLetters = ""

    def solve(self):
        from collections import Counter, OrderedDict

        map1 = Counter(self.name1)
        map2 = Counter(self.name2)
        map_jumLtr = (Counter(self.jumbLetters))
        
        return "YES" if (OrderedDict(map1+map2)==map_jumLtr) else "NO"

if __name__ == "__main__":
    a = AmusingJoke()
    a.name1 = input()
    a.name2 = input()
    a.jumbLetters = input()
    print(a.solve())