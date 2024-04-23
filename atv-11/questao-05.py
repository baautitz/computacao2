# Você acabou de saber que um de seus
# convidados não poderá comparecer ao jantar, portanto será necessário enviar um
# novo conjunto de convites. Você deverá pensar em outra pessoa para convidar.
#
#   • Comece com seu programa do Exercício 3.4. Acrescente uma instrução print
#   no final de seu programa, especificando o nome do convidado que não poderá
#   comparecer.
#
#   • Modifique sua lista, substituindo o nome do convidado que não poderá
#   comparecer pelo nome da nova pessoa que você está convidando.
#
#   • Exiba um segundo conjunto de mensagens com o convite, uma para cada
#   pessoa que continua presente em sua lista

convidados = ['Bianca', 'Andrey', 'Mateus']

nao_compareceu = convidados[1]
del convidados[1]

convidados.insert(1, 'Bruna')

print(f"{nao_compareceu} não pôde comparecer. :(")

for c in convidados:
    print(f"Olá, {c}! Gostaria de participar do meu jantar?")
