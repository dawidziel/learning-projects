out = " "
for a in xrange(1,100):
	if a%3==0 and a%5==0:
		out +='\n{} fizzbuzz'.format(str(a))
	elif a%5==0:
		out +='\n{} buzz'.format(str(a))
	elif a%3==0:
		out +='\n{} fizz'.format(str(a))
	else:
		out +='\n{}'.format(str(a))
print(out)
