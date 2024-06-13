class Produto:

    def __init__(self, codigo, descricao, valor):
        self.__codigo = codigo
        self.__descricao = descricao
        self.__valor = valor

    def get_codigo(self):
        return self.__codigo

    def get_descricao(self):
        return self.__descricao

    def get_valor(self):
        return self.__valor
