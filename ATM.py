class ATM ():
    serial_number = 0
    def __init__(self,serial_number,amount,history):
        self.serial_number = serial_number
        self.amount = amount
        self.history = history
    def deposit(self,account):
        account.current_balance = account.current_balance + self.amount

    def widthdraw(self,account):
        account.current_balance = account.current_balance - self.amount

    def  check_currentbalance(self,account):
            print(f'Account balance after transaction: {account.current_balance}')

    def check_serialnumber(self):
        print(f'serial number: {self.serial_number}')

    def view_transactionsummary(self):
        print(f'transaction history: {self.history}')


