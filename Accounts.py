class Accounts():

    def __init__(self,account_number,account_firstname,account_lastname,current_balance,address,email):

        self.account_number = account_number
        self.account_firstname = account_firstname
        self.account_lastname = account_lastname
        self.current_balance = current_balance
        self.address = address
        self.email = email


    def update_address(self, new_address):
        Accounts.address = new_address

    def update_email (self, new_email):
        Accounts.email = new_email


    def Account_check(self):
        print(f'account number: {self.account_number}')
        print(f'name: {self.account_firstname} {self.account_lastname}')
        print(f'acoount balance: {self.current_balance}')
        print(f'address: {self.address}')
        print(f'email: {self.email}')