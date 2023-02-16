print("deme un nuemro")

numero = int(input())

print(f"este el numero que indreso {numero}")

def suma(a):
    a = a + 13
    return a


print(suma(numero))

#leer archivo en python

fichero = open('./login.py', 'r')

print(f"este abre un ficereo en python {fichero}")
caracter = fichero.readlines()

print(f"aqui impriem el contenido del archivo {caracter}")
print(fichero.read)