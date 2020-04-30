a = 'My  naMe  is  Son  Chang  Ha:  my  pin  is  000125-3!!!!!!.'

a1,a2,a3,a4,a5,a6,a7,a8,a9,a10=a.split("  ")

a2=a2.lower()

a=" ".join([a1,a2,a3,a4,a5,a6,a1,a8,a9,a10])

a=a.replace(":",",").replace("!","")

print(a)

