x = "ab cc deb"

y = ""

dic = {}

for i in xrange(len(x)):
    
	if x[i] == " " or x[i] not in dic:
        
	dic[x[i]] = 1

	        y += x[i]

print y