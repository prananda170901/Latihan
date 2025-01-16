def hitung_phi(iterasi):
    phi = 0
    for i in range(iterasi):
        phi += (-1)**i / (2 * i + 1)  # Deret Leibniz
    return 4 * phi

# Contoh penggunaan
iterasi = 1709  # Jumlah iterasi untuk mendekati nilai phi
phi = hitung_phi(iterasi)
print(f"Nilai phi dengan {iterasi} iterasi adalah: {phi}")
