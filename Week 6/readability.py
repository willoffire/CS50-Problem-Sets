from cs50 import get_string
import math


def main():

    text = get_string("Text: ")
    letters = count_letters(text)
    words = count_words(text)
    sent = count_sentences(text)

    index = (0.0588 * letters / words * 100.0) - (0.296 * sent / words * 100.0) - 15.8
    level = round(index)
    if level >= 16:
        print("Grade 16+")
    elif level > 1 and level < 16:
        print(f"Grade {level}")
    else:
        print("Before Grade 1")


def count_letters(text):
    letters = 0
    for char in text:
        if char.isalpha():
            letters += 1
    return letters

def count_words(text):
    words = 1
    for i in range(len(text)):
        if text[i] == ' ':
            words += 1
    return words

def count_sentences(text):
    sent = 0
    for i in range(len(text)):
        if text[i] == '.' or text[i] == '!' or text[i] == '?':
            sent += 1
    return sent

main()
