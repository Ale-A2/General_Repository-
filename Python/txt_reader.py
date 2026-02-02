#to open a text file, use the with open 

# parameter for this functions are the file name. if the file is in the same directory, only the file name is needed, but if this is elsewhere, full path is needed.
# accessor, this is a specifier of the permision to this file.
with open ("writing_piece.txt",'r') as file:
    var = file.read() # this stores all of the text into a variable.

    # if var is printed, all of the text file will be printer onto the console
    print(var)

    ############ SIMPLE TEST TO MODITY AND CONDITIONALIZE THE CONTENTS IN THE TEXT VARIABLE
    # words = var.split()
    
    # txt = ""
    # new_par = []
    # for each in words:
    #     if len(each) > 4:
    #         new_par.append(each)

    # txt = " ".join(new_par)

    # print(txt)

    ################## PRINTS TEXT THAT IS OF LENGTH GREATER THAN 4



    # print(var[0:30])

    # always close a file after you are done working with it. Does this save the file in case it was modified?
        # is done to release systems resources, flush buffered data, and allow other programs to possibly access the same data
        # it also prevents data corruption

    # file.close()


    # ######################### ADD TEXT TO THE END OF THE FILES ######################################################
    # this add text to the end of a file, done with append
    # file.write(" This is sample text at the end of the text")

    # if the file persmission was to be in write mode 'w', then this function would delete any preexisting stream and replace it with whatever it is added in the function.
    file.close()



    pass