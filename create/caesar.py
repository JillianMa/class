ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

def encrypt(word, key):
    encrypted_result = ""
    for original_character in word:
        # Get index (position) of original character
        alphabetic_index = ALPHABET.find(original_character)
        
        # If index is valid (non-negative)
        if alphabetic_index >= 0:
            
            # Compute new index (add key, mod in case goes past end)
            new_index = alphabetic_index + key
            new_index = new_index % len(ALPHABET)
    
            # Get the new character (convert from index to letter)
            new_character = ALPHABET[new_index]
            
            # Add the new shifted character to the encrypted result
            encrypted_result += new_character
        
        # Otherwise we'll keep the original character
        else:
            encrypted_result += original_character
    return encrypted_result
    
message = input("Enter a word to Enrcypt: ")
shift = int(input("Please enter a shift: "))

print("Encrypting with a Caesar Cipher...")

print(encrypt(message.upper(), shift))

