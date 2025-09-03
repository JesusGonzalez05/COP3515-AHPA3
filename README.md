# COP3515-AHPA3
Bob's Ice Cream Assignment

Bob’s Ice Cream sells four types of ice cream: vanilla, chocolate, mint, and strawberry.
Bob's Ice Cream sells ice cream from trucks that are parked at two different corners. They sold {$11.5, $15.75, $22, $7.25} on Saturday and {$12.75, $9.25, $16.5, $21} on Sunday [note sales are in vanilla, chocolate, mint, and strawberry order].
Create an enum for flavors:enum flavors {vanilla, chocolate, mint, strawberry};
Create a program that allows a user to enter the type of ice cream sold.
Create a program that allows a user to enter the sales data.
Load two one-dimensional arrays with Bob’s entered sales data. Only index your arrays using an enum variable (enum flavors index = vanilla; corner1Sales[index] = 11.5;)
Sum the contents of the flavors in the arrays together.
Print out the resulting flavors and their sum with Bob's total sales.


Note: when using fgets:
you'll need to make the array that holds your string +2 in size. You have to have room for the final /n and the final /0.
Your fgets max size has to account for the twoadditional characters: max string size + 2.
