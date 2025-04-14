import pandas as pd

# Read the CSV file
df = pd.read_csv("contact_numbers.csv")

# Shuffle the DataFrame
df = df.sample(frac=1, random_state=None).reset_index(drop=True)

# Save the shuffled DataFrame to a new CSV file
df.to_csv("contact_numbers_shuffled.csv", index=False)

print("File has been shuffled and saved as 'contact_numbers_shuffled.csv'")
