def add_author(func): # decorator
   print('Author: Natalia Tsarkova')
   return func

@add_author 
def decorators_article():
   print('Article: Decorators in Python')

decorators_article()




#def add_author(func):
#   print('Tasha Tsar')   
#   return func

#def decorators_article():
#   print('Understanding Decorators')

#decorators_article = add_author(decorators_article)

#decorators_article()
