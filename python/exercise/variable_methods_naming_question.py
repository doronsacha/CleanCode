def a(b):
    return 0 if len(b) == 0 else b[0] if len(b) == 1 else b[0] + a(b[1:])

def c(d):
    return [i**2 for i in d]

def e(f):
    g = f[0]
    for h in f[1:]:
        if h > g:
            g = h
    return g

def j(k):
    l = k[0]
    for m in k[1:]:
        if m < l:
            l = m
    return l

def n(o, p):
    q = 0
    for r in o:
        if r == p:
            q += 1
    return q

def s(t):
    u = []
    for v in t:
        if v not in u:
            u.append(v)
    return u

def w(x):
    y = x.copy()
    for i in range(len(y)):
        for j in range(i + 1, len(y)):
            if y[i] > y[j]:
                y[i], y[j] = y[j], y[i]
    return y

def z(aa):
    return aa[::-1]

def ab(ac, ad):
    return ac + ad

def ae(af):
    for i in range(len(af) - 1):
        if af[i] > af[i + 1]:
            return False
    return True

def ag(ah, ai):
    try:
        return ah.index(ai)
    except ValueError:
        return -1

def aj(ak, al, am):
    ak.insert(am, al)
    return ak

an = [1, 2, 3, 4, 5]
ao = a(an)
print("a:", ao)
ap = c(an)
print("c:", ap)
aq = e(an)
print("e:", aq)
ar = j(an)
print("j:", ar)
as_ = n(an, 3)
print("n of 3:", as_)
at = s(an)
print("s:", at)
au = w(an)
print("w:", au)
av = z(an)
print("z:", av)
aw = [6, 7, 8]
ax = ab(an, aw)
print("ab:", ax)
ay = ae(an)
print("ae:", ay)
az = ag(an, 4)
print("ag of 4:", az)
ba = aj(an, 10, 2)
print("aj:", ba)
