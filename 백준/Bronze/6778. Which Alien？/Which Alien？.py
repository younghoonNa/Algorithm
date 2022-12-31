import sys
input = sys.stdin.readline

antenna = int(input())
eye = int(input())

if 3 <= antenna and eye <= 4: print("TroyMartian")
if antenna <= 6 and 2 <= eye: print("VladSaturnian")
if antenna <= 2 and eye <= 3: print("GraemeMercurian")
