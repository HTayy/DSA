import random

NUM_TESTS = 10  # Số lượng test muốn tạo

for t in range(1, NUM_TESTS + 1):
    filename = f"test{t}.inp"
    n = random.randint(1000000, 1000000)  # Sinh số phần tử ngẫu nhiên

    if t == 1:
        data = f"{n}\n" + " ".join(str(_) for _ in range(n)) + "\n"
    elif t == 2:
        data = f"{n}\n" + " ".join(str(_) for _ in range(n, 0, -1)) + "\n"
    else:
        data = f"{n}\n" + " ".join(str(random.randint(1, 1000000)) for _ in range(n)) + "\n"

    with open(filename, "w") as f:
        f.write(data)
