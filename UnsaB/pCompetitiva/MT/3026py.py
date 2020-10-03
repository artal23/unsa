def repetir(cadena,n):
	return cadena*n
 
def encontrarMayor1(L):
	cadena = "1" + "0"*(L-2)
	return cadena
 
def encontrarMayor2(L):
	cadena = "1" + "0"*(L-1)
	return cadena

def all9(A): 
	for x in A:
		if x!='9': 
			return False
		return True

L = int(input())
A = input()

izq = A[:L]
der = A[L:]
 
veces = len(A)//L
 
if all9(A):
	if len(A)%L != 0:
		print(repetir(encontrarMayor1(L),veces+2))
	else:
		print(repetir(encontrarMayor2(L),veces+1))
else:
	if len(A)%L != 0:
		print(repetir(encontrarMayor2(L),veces+1))
	else: 
		i = int(izq[-1])
		j = int(der[0])
        
if j < i:
	print(repetir(izq, veces) )
        
else:
	dizq = int(izq)
	print(repetir(str(dizq+1),veces))
