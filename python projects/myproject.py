from tkinter import*
from tkinter import messagebox
from tkinter import ttk
root=Tk()
root.geometry("400x300+200+150")
root.title("Around")
root.configure(bg="gray")




def destroy():
    root.destroy()

def sayhello():
     messagebox.showinfo('Welcome' , ' Logged In '  + ent1.get ())

########################
lb=Label(root,text="اسم المستخدم",bg="gray",font=("arial",12,"bold"))
lb.place(x=30,y=30)



lb1=Label(root,text="كلمة السر",bg="gray",font=("arial",12,"bold"))
lb1.place(x=30,y=80)

lb2=Label(root,text="Country",bg="gray",font=("arial",12,"bold"))
lb2.place(x=175,y=130)


########################
var=StringVar()
var1=StringVar()
ent=Entry(root,bg="light blue",fg="black",bd=9,relief="sunken",font=("arial",10,"bold"),textvariable=var)
ent.place(x=120,y=76)
var.set('Enter User ID')


ent1=Entry(root,bg="light blue",fg="black",bd=9,relief="sunken",font=("arial",10,"bold"),textvariable=var1)
ent1.place(x=120,y=30)

var1.set('Enter Password')

################################################

bt=Button(root,text="Enter",bg="black",fg="red",bd=10,font=("arial",10,"bold"),command=sayhello)
bt.place(x=170,y=170)


bt1=Button(root,text="Exit",bg="black",fg="red",bd=10,font=("arial",11,"bold"),command=destroy)
bt1.place(x=172,y=220)

v=IntVar()
v.set("2")
c = Checkbutton(root,text="Male",variable=v)
c.place(x=30,y=170)

c1 = Checkbutton(root,text="Female")
c1.place(x=30,y=200)
###################################

cb=ttk.Combobox(root,values=('egypt','italy','england','Russia'))
cb.place(x=30,y=130)

click=StringVar()

o=OptionMenu(root,click,'Sat','Mon','Tus','Friday')
o.place(x=30,y=250)


######################################
menubar=Menu(root)
filemenu= Menu(menubar)
filemenu.add_command(label='make new',command=lambda:print('new'))
menubar.add_cascade(label='File', menu=filemenu )









root.mainloop()
