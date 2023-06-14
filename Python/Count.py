def count_word_frequency(file_name, word):
    try:
        with open(file_name, 'r') as f:
            text = f.read()
            count = text.count(word)
            print(f"The word '{word}' appears {count} times in the file '{file_name}'.")
    except FileNotFoundError:
        print(f"File '{file_name}' not found.")


file_name = input("Enter the file name: ")
word = input("Enter the word to count: ")
count_word_frequency(file_name, word)
