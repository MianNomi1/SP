arr = [
         [1,2,3,4,5,6,7,8],
         [2,5,6,1,3,5,6,1],
         [3,8,9,1,4,5,6,2],
         [4,5,6,1,3,5,6,1],
         [5,5,6,1,3,5,6,1],
         [6,5,6,1,3,5,6,1],
         [7,5,6,1,3,5,6,1],
         [8,5,6,1,3,5,6,1]
]


mat = [
    [8,9],
    [5,6]
]

for i in range(len(arr)):
    for j in range(len(arr)):
        if mat[0][0] == arr[i][j]:
            if (j+1) < len(arr): #if the column is in boundary
                if mat[0][1] == arr[i][j+1]:
#checking next row
                    if (i+1) < len(arr): #if it is not out of bound
                        if mat[1][0] == arr[i+1][j]:
                            if mat[1][1] == arr[i+1][j+1]:#printing 
                                print("matrix matched at {}rd column && {}nd row".format(i+1,j+1))
                    
                
    
    
        

    