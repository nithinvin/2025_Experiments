file_path = '/mnt/g/Nithin/GPU_Logs_20250311.txt' 

with open(file_path, 'r', encoding='ISO-8859-1') as file:
    for line in file:
        # row = line.strip().split(',')
        print(line)
