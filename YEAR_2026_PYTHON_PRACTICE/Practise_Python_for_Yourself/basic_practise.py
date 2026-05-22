print("Hello World")

print("Number:", 7 + 13 * 10 / 3) # print("Number: 7") # Однакове

print("Number:", 7, 15, 5, sep="/") # sep="" дозволяє нам міняти символ між виводами (без цього атрибута будуть просто пробіли)

print("Special characters in output \" ") # ми можемо поставити символ \ перед наприклад лапками і воно не буде рахуватись як системне. просто як символ

# ЗМІННІ:

number = 17 # int
digitnumber = 45.68588 # float
word = "its word :)" # string
bool = True # False or True # bool
print(number, digitnumber, word, sep=", ")
number = 8
print(number)
del number, digitnumber, word # видалення змінної
# print(number, digitnumber, word, sep=", ") # і все. видає помилку тому що у нас вже немає змінної

# number1 = input("Введіть перше число: ")
# number2 = input("Введіть друге число: ")
# print(number1 + number2) #якщо зробити так. то вивід буде просто два числа 5236. ВВід користувача це по базі тип string. Тому компілятор просто поставить їх поруч.

# number1 = int(input("Введіть перше число: "))
# number2 = int(input("Введіть друге число: "))
# print(number1 + number2) # оскільки ми уточнили що тип буде Int то компілятор додав два числа
# del number1, number2

# IF: ТАБУЛЯЦІЯ ЦЕ НАШЕ ВСЕ


# if a = b:
#   print("Yes")
#   if a > b:
#       print("a > b")

# створимо змінну типу bool
isHappy = False

if isHappy == True:
    print("user happy")
#elif number == 5: 
else:
    print("user is not happy")

# Ми можемо зробити так:
# data = input("Введіть число буквами: ")
# number = 5 if data == "five" else 000 # якщо користувач введе five то значення змінної буде 5, інакше - 0
# print(number)

# ЦИКЛИ for / while:

for i in range(1, 6, 2): # в радіусі від 1 до 6 з кроком в 2
    print(i)

word = "Hello World!"
countOfLetters = 0
letter = input("Впишіть літеру яку ми будемо шукати у Hello World! ")
for i in word:
    if i == letter:
        countOfLetters += 1
print("Count: ", countOfLetters)

i = 5
while i < 15:
    print(i)
    i +=1
    if i == 10:
        break # коли ми досягли умови ми можемо прописати break, і він закінчить цикл


