def vowel(string):
    f=0
    for i in string:
        a=i.lower()
        if ((a=='a')or (a=='e')or (a=='i')or (a=='o')or(a=='u')):
            f=f+1
    return f

string=input("Enter a string ")
print("The number of vowels in the string are", vowel(string))