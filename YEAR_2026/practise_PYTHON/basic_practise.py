print("Hello World")

print("Number:", 7 + 13 * 10 / 3) # print("Number: 7") # Однакове

print("Number:", 7, 15, 5, sep="/") # sep="" дозволяє нам міняти символ між виводами (без цього атрибута будуть просто пробіли)

print("Special characters in output \" ") # ми можемо поставити символ \ перед наприклад лапками і воно не буде рахуватись як системне. просто як символ

# ЗМІННІ:

number = 17
digitnumber = 45.68588
word = "its word :)"
print(number, digitnumber, word, sep=", ")
number = 8
print(number)
del number, digitnumber, word # видалення змінної
print(number, digitnumber, word, sep=", ") # і все. видає помилку тому що у нас вже немає змінної

