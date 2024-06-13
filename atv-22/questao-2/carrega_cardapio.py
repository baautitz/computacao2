from models.Cardapio import Cardapio
from models.Produto import Produto


def run(cardapio: Cardapio):
    cardapio.add_produto(Produto(100, "Cachoro-Quente", 9))
    cardapio.add_produto(Produto(101, "Cachoro-Quente Duplo", 11))
    cardapio.add_produto(Produto(102, "X-Egg", 12))
    cardapio.add_produto(Produto(103, "X-Salada", 13))
    cardapio.add_produto(Produto(104, "X-Bacon", 14))
    cardapio.add_produto(Produto(105, "X-Tudo", 17))
    cardapio.add_produto(Produto(200, "Refrigerante Lata", 5))
    cardapio.add_produto(Produto(201, "Chá Gelado", 4))
