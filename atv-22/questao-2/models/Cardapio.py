class Cardapio:

    __produtos = []

    def __init__(self):
        pass

    def add_produto(self, produto):
        if self.get_produto_por_codigo(produto.get_codigo()) != None:
            return False

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

    def get_produto_por_codigo(self, codigo_produto):
        for produto in self.__produtos:
            if produto.get_codigo() != codigo_produto:
                continue

            else:
                return produto

        return None

    def get_produtos(self):
        return self.__produtos
