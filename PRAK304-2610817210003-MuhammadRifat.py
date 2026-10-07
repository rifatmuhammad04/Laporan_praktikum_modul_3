a = int(input("Masukkan Angka: "))

if a==0:
    print("nol")
elif 1 <= a <= 9:
    print("satuan")
elif 10 <= a <= 19:
    print("belasan")
elif 20 <= a <= 99:
    print("puluhan")
else:
    print("anda menginput melebihi nilai bilangan")