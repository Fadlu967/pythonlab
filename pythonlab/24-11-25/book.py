class Book:
    def __init__(self, title, author, price):
        self.title = title
        self.author = author
        self.price = price
        print("Welcome to the Book Information System!")

    def update_price(self):
        new_price = float(input("Enter new price of the book: "))
        self.price = new_price
        print("Price updated to:", self.price)

    def display(self):
        print("\nBook Details:")
        print("Title:", self.title)
        print("Author:", self.author)
        print("Price: $", self.price)


b = Book("The Great Gatsby", "F. Scott Fitzgerald", 15)
b.display()
b.update_price()
b.display()
