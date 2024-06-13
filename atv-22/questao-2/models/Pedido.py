class Pedido:
    __produtos = []

    def __init__(self):
        pass

    def add_produto(self, produto):
        self.__produtos.append(produto)
        return True

    def remove_produto(self, codigo_produto):
        for produto in self.__produtos:
            if produto.get_codigo() != codigo_produto:
                continue

            else:
                self.__produtos.remove(produto)
                return True

        return False

    def get_produtos(self):
        return self.__produtos

    def get_total_pedido(self):
        soma = 0
        for produto in self.get_produtos():
            soma += produto.get_valor()

        return soma
