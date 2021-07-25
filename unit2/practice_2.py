import sys

if __name__ == "__main__":
    print("práctica 2 - Code_blocks")

    building=   [[0,1,1,2],
                 [0,5,0,0],
                 [2,0,3,3]]

    # for x in range(0,len(building)):
    #     #print(building[x])
    #     #print(f" x: {x}, {building[x]}")
    #     for y in range(0,len(building)):
    #         print(f"building[{x}][{y}]: {building[x][y]} ")

    v=0
    for y in range(0,len(building)):
        #print(y)=012
        for x in range(0,len(building[y])):
            #print(x)
            if (y<1):
                v=v+building[y][x]
            else:
                 if (building[y-1][x] !=0):
                    v=v+building[y][x]






            # if(building[0][x]):
            #     v=v+building[y][x]
            # if (building[y+1][x] !=0):
            #     v=v+building[y][x]
            
            # else:
            #     v=v+building[x][y]
            #print(building[y][x])
            
    print(v)       