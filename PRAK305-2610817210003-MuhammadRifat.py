total_seconds = int(input("masukkan total detik: "))

days = total_seconds // 86400
rem = total_seconds % 86400
hours = rem // 3600
rem %=3600
minutes = rem // 60
seconds = rem % 60

if days > 0:
    print(f"{days} hari {hours:02d}:{minutes:02d}:{seconds:02d}")
else:
    print(f"{hours:02d}:{minutes:02d}:{seconds:02d}")