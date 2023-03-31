a = int(input("How many number do you have ot check? ::"))
if 1 <= a <= 100:

    for i in range(a):
        n = int(input("Enter a number ot check it is even or odd: "))

        if n % 2 == 0:
            print("even")
        else:
            print("odd")
else:
    print("ধের আমারে কি গাধা মনে হয় নাকি এত গুলা সংখা চেক করতে আমার বাতাস বাহির হবে । বাদ দেন🥴")