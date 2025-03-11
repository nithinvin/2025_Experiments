import csv

file_path = '/mnt/g/Nithin/GPU_Logs_20250311.txt'

with open(file_path, newline='', encoding='ISO-8859-1') as csvfile:
    reader = csv.reader(csvfile)
    for row in reader:
        print(", ".join(row))

