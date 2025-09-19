while True:
    print("\nMenu:\n1 - Quadrado\n2 - Fatorial\n3 - Sair")
    opcao = int(input("Escolha: "))

    if opcao == 1:
        n = int(input("Digite um numero: "))
        print("Quadrado:", n * n)
    elif opcao == 2:
        n = int(input("Digite um numero: "))
        f = 1
        for i in range(1, n+1):
            f *= i
        print("Fatorial:", f)
    elif opcao == 3:
        print("Saindo...")
        break
    else:
        print("Opcao invalida!")

