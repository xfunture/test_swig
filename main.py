import example

one = example.Example()
one.say_hello()
example.fact(2)

word = example.word('hello,world')
print("word content:{}".format( word.getWord()))
word.updateWord("new word")
print("word content:{}".format( word.getWord()))
word.testFunc(1,2.0,"c")
data = 200
data = word.testReference(data)
print("testReference:{}".format(data))

data = 1
data = word.testPointer(data)
print("testPointer:{}".format(data))
