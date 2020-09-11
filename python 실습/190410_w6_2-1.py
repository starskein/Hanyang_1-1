import re

frequency = {}
total = 0
text = open('article.txt', 'r')
string = text.read().lower()
matching = re.findall(r'\b[a-z]{2,15}\b', string)

for word in matching:
    count = frequency.get(word, 0)
    frequency[word] = count + 1
for words in frequency.keys():
    print("%s: %s" % (words, frequency[words]))
for words in frequency.keys():
    total = total + frequency[words]
print('total:', total)