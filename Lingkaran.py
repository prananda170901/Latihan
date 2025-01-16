import math

def jari_jari_dari_keliling(keliling):
    # Menghitung jari-jari dari keliling
    return keliling / (2 * math.pi)

def jari_jari_dari_luas(luas):
    # Menghitung jari-jari dari luas
    return math.sqrt(luas / math.pi)

# Contoh penggunaan
keliling = 69  # Misalnya keliling lingkaran
luas = 78.5      # Misalnya luas lingkaran

r_dari_keliling = jari_jari_dari_keliling(keliling)
r_dari_luas = jari_jari_dari_luas(luas)

print(f"Jari-jari dari keliling {keliling} adalah {r_dari_keliling:.2f}")
print(f"Jari-jari dari luas {luas} adalah {r_dari_luas:.2f}")
