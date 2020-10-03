
def primo(nro):
	if nro < 2:
		return False
	if nro == 2:
		return True
	if nro%2!=0:
		for i in range(2,nro):
			if nro%i==0:
				return False
			return True
		return False

def c_primo(a,b):
	cont=0
	for i in range(a,b):
		if primo(i)==True:
			cont+=1
			print(i)
	print(cont)

c_primo(0,10)
