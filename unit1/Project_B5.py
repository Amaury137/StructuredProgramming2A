price = int(input("What is the cost of this item?:\n"))
IVA = int(input("And the tax rate in 100%?:\n"))
tax = price*(IVA/100)
total_price = tax + price

print("item: $", price)
print("tax: $", tax)
print("Total: $", total_price)