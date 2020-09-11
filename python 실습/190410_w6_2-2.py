import re

frequency = {}
total = 0
text = open('article.txt', 'r')
string = text.read()
matching = re.findall(r'[a-zA-Z]', string)

for word in matching:
    count = frequency.get(word, 0)
    frequency[word] = count + 1
for words in frequency.keys():
    print("%s: %s" % (words, frequency[words]))
print('-------------------------')
i = 65
while i < 123:
    for words in frequency.keys():
        if ord(words) == i:
            print("%s: %s" % (words, frequency[words]))
    i = i + 1
print('-------------------------')
n = max(frequency.values())
while n > 0:
    for words in frequency.keys():
        if frequency[words] == n:
            print("%s: %s" % (words, frequency[words]))
    n = n - 1
