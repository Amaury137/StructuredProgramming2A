import sys

#Variables#
My_int=0
My_str= ""
My_float= 0.0
My_bool = True
My_list= []


if __name__ == "__main__":
    My_int= int( sys.argv[1] )
    My_str= str( sys.argv[2] )
    My_float= float( sys.argv[3] )
    My_bool = bool( sys.argv[4] )
    My_list= sys.argv 


    print(My_int, My_str, My_float, My_bool, My_list)

    