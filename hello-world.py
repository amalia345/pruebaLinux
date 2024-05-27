print("Hello")

num1=5
num2= 67
num3= 245

def sumaDeTres(a, b, c):
    return a+b+c

resulto = sumaDeTres(num1,num3,num2)
resulto2 = sumaDeTres(100,num3,num2)

print(resulto)
print(14+num3)

def resta(a,b,c):
    return a-b-c
resultado = resta(num1, num2, num3)
print(resultado)

#Dividir el num a entre el num  b, si el resultado es mayor que 50 dar el mensaje felicidades, si no dar el resultado 
def division(a,b):
    return a/b
result = division(151, 3)

if(result>50):
    print("Felicidades")
else:
    print(result)

#Funcion que le des 2 numeros, el primero es el numero a evaluar, el segundo es el divisor que quieres checar, 
#el programa te debe decir si es divisible exacto entre ese numero o no 

def divisivilidad(denominador,numerador):
    if(denominador== 0):
        return("NO se puede dividir entre 0")
    elif(numerador%denominador== 0):
        return(f"Es exactamente divisible entre {denominador}")
    else:
        return("No es divisible")
    
resul_divisible = divisivilidad(5,20)
print(resul_divisible)