import Accounts
import ATM

Account1 = Accounts.Accounts(account_number=123456,account_firstname = "Royce",account_lastname = "Chua",current_balance = 1000,address = "Silver Street  Quezon City", email = "roycechua123@gmail.com")

print("================Account1================")


Account1.Account_check()


user1_serialnumber = 12345
ATM1 = ATM.ATM(user1_serialnumber,500,"deposit")
ATM1.deposit(Account1)
ATM1.check_currentbalance(Account1)
ATM1.check_serialnumber()
ATM1.view_transactionsummary()

print('\n')
print("================Account2================")

Account2 = Accounts.Accounts(account_number=321349, account_firstname = "John",account_lastname = "Doe",current_balance = 2000,address = "Gold Street Quezon City",email = "johndoe@yajoo.com")

Account2.Account_check()

user2_serialnumber = 67891
ATM2 = ATM.ATM(user2_serialnumber,300,"deposit")
ATM2.deposit(Account2)
ATM2.check_currentbalance(Account2)
ATM2.check_serialnumber()
ATM2.view_transactionsummary()
