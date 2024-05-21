def suma (x , y) :
    return x + y

def resta (x , y) :
    return x - y

def multiplicacion (x , y) :
    return x * y

def division (x , y) :
    if division ==0:
        print("No se puede dividir entre cero")
    else:
        print("El resultado es: ")
    return x / y

def interfaz():
    print("Ingrese una opcion")
    print 

def interfaz():
    print("Ingresa dos numeros")
    print ("1.Suma")
    print ("2. Resta")
    print ("3.Multiplicacion")
    print ("4. Division")

    opcion = input ("Cual")

    zen1 = float(input("primer numero"))
    zen2 = float(input("segunto numero"))

    if opcion == '1':
        print("Resultado:", suma(num1, num2))
    elif opcion == '2':
        print("Resultado:", resta(num1, num2))
    elif opcion == '3':
        print("Resultado:", multiplicacion(num1, num2))
    elif opcion == '4':
        print("Resultado:", division(num1, num2))
    else:
        print("Opción no válida")

    interfaz()
