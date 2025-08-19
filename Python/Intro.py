################################ Using Coordinated for maps 
# import turtle 

# alan = turtle.Turtle()

# alan.color("orange")
# alan.shape("triangle")


# for i in range(5):
#     alan.forward(100)
#     alan.right(145)

############################################

#using for loops for other types of shapes. with variability in their movements

# import turtle 

# alan = turtle.Turtle()

# alan.color("orange")
# alan.shape("triangle")
# alan.width(3)

# for i in range(36):
#     alan.forward(100)
#     alan.left(145)
#     alan.forward(10)
#     alan.right(90)
#     alan.forward(10)
#     alan.left(135)
#     alan.forward(100)

# for i in range(90,0,-2):
#     alan.forward(25)
#   alan.left(i)

# for i in range(2,18):
#     print(i)

#created triangles inside triangles 
# def triangle(t, length):
#     if(length > 10):
#         for i in range(3):
#             t.forward(length)
#             t.left(120)
#     triangle(t, length/2)

# #created a nested triangles
# def triangles(t, length):
#     if length > 10:
#         for i in range(3):
#             t.forward(length)
#             t.left(120)
#             triangles(t, length/2)


# triangles(alan, 200)

# triangles(alan, 120)

#########################################################################

# Dictionaries
# dictionary declaration
thisdict = {
    "brand" : "Ford",
    "electric": False,
    "year" : 1964,
    "colors" : ["red", "blue","black"]
}

# Values are accesses by giving the key in []. WE access value with the key colors. prints red blue black
print(thisdict["colors"])

# Using dictionaries to plot 
# opendata.cityofnewyokr.us website that offers data sets with different topics 