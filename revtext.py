reversing a sentence but not words

a = " i am a hunter"
n = len(a)
m = n-1
rev = ''
word = ''
for i in xrange(n):
    if a[m-i] == ' ':
        rev += word
        rev += ' '
        word = ''
    else:
        word = a[m-i] + word
rev += word    
print rev
print n
print len(rev)