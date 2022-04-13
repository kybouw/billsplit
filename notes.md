# Notes

I have developed an algorithm for splitting up the grocery bill

1. Total the amount of things just for you
2. Total the amount of things just for the others
3. The rest of the bill is shared
4. Add the fraction of the shared bill to the amount that others owe
5. Now you have the total that you need to request

## Proto

```txt
How many ways are you splitting the bill?
> 2
Splitting 2 ways...
What is the bill total?
> 20.00
Bill total was $20.00
How much of the total was person A responsible for?
> 12
Person A owes $12.00
How much of the total was person B responsible for?
> 4
Person B owes $4.00
There was $4.00 split evenly amongst everyone.
Who paid the bill? [A/B]
> A
Person B owes person A $6.00
```
