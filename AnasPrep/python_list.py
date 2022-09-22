#listHandling
def find_prefix(words,msg) :
    filtered_strings = []
    for x in words:
       if(x.startswith(msg)):
          filtered_strings.append(x)
        
    return filtered_strings
    
words = ['Hello', 'World', 'Hello World!']
msg = 'He'
print(find_prefix(words,msg))
    
#stringHandling

def compress_string(msg):
	compressed_message = ""
	i = 0

	while (i <= len(msg)-1):
		count = 1
		ch = msg[i]
		j = i
		while (j < len(msg)-1):
			if (msg[j] == msg[j+1]):
				count = count+1
				j = j+1
			else:
				break
		compressed_message=compressed_message+ch+str(count)
		i = j+1
	return compressed_message


compressed_message=compress_string("AAAAaaBCCCDDeAAA")
print(compressed_message)


