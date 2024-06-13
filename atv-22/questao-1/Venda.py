class Venda:
    total_bruto = 0

    def __init__(self, valor_produto, qtde_produto):
        self.valor_produto = valor_produto
        self.qtde_produto = qtde_produto

        self.total_bruto = self.valor_produto * self.qtde_produto

    def get_porcentagem_desconto(self):
        if self.qtde_produto <= 9:
            return 0.00
        elif self.qtde_produto >= 10 or self.qtde_produto <= 99:
            return 0.05
        elif self.qtde_produto >= 100 or self.qtde_produto <= 999:
            return 0.1
        else:
            return 0.15

    def get_valor_desconto(self):
        return self.total_bruto * self.get_porcentagem_desconto()

    def get_total_bruto(self):
        return self.total_bruto

    def get_total_liquido(self):
        return self.total_bruto - self.get_valor_desconto()
