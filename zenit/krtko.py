inp = int(input())
input_str = input()

# Split the input into a list of numbers
numbers = list(map(int, input_str.split()))

# Initialize variables to track the current chain and the longest chain
current_chain = []
longest_chain = []

# Iterate through the numbers
for num in numbers:
    # If the current chain is empty or the difference between the current number and the last number in the chain is 1
    if not current_chain or num - current_chain[-1] == 0:
        current_chain.append(num)
    else:
        # Check if the current chain is longer than the longest chain
        if len(current_chain) > len(longest_chain):
            longest_chain = current_chain
        current_chain = [num]

# Check if the current chain is longer than the longest chain
if len(current_chain) > len(longest_chain):
    longest_chain = current_chain

print(longest_chain)